// This file describes a 5 x 5 systolic array of Processing Elements
// Notably, this is a standalone module without an interface

import Ehr::*;
import Vector::*;
import RegFile::*;
import ProcessingElement::*;

// Number of input matrix pairs (A,B)
Int#(32) num_input_mtx = 1;

interface SystolicArray;
    // Initialize PE 
    method Action init(); 
    method Action loadDataA(Bit#(512) data);
    method Action loadDataB(Bit#(512) data);
    method ActionValue#(Bit#(512)) getResults();
endinterface

(* synthesize *)
module mkSystolicArray(SystolicArray);

    // The last input from either square matrix will require 2 * (4 - 1) steps before reaching the grid
    // Then another 4 steps to flow through the grid
    Int#(32) max_steps = 2 * (4 - 1) + 4;
    // Require one extra iteration on each PE to perform a computation once input is received
    // Note that we only increase `pe_iter_num` when both inputs flow into the PE
    Int#(32) max_pe_iters = max_steps + 1;
    // Total number of iterations, depending on number of input matrices
    Int#(32) max_global_iters = max_pe_iters * num_input_mtx;

    // Setting this to be True for now just to unblock for testing
    Reg#(Bool) ready <- mkReg(True);
    Reg#(Bool) pe_op_finished <- mkReg(True);
    Reg#(Bool) pe_receive_done <- mkReg(False);
    Reg#(Int#(32)) pe_state <- mkReg(0);
    Reg#(Int#(32)) pe_iter_num <- mkReg(0);

    Vector#(4, Vector#(4, Reg#(Int#(32)))) x1 <- replicateM(replicateM(mkReg(0)));
    Vector#(4, Vector#(4, Reg#(Int#(32)))) x2 <- replicateM(replicateM(mkReg(0)));
    Vector#(4, Vector#(4, Reg#(Int#(32)))) res <- replicateM(replicateM(mkReg(0)));

    // 2D 4` x 4` grid of PEs
    Vector#(4, Vector#(4, PE_interface)) array <- replicateM(replicateM(mkProcessingElement));
    // Grid of input data that controls flow input to each PE in the array
    // Controls top-down input flow
    Vector#(4, Vector#(4, Ehr#(2, Int#(32)))) top <- replicateM(replicateM(mkEhr(0)));
    // Controls left-right input flow
    Vector#(4, Vector#(4, Ehr#(2, Int#(32)))) left <- replicateM(replicateM(mkEhr(0)));

    Reg#(Int#(32)) count <- mkReg(0);


    function Vector#(4, Int#(32)) get_row_diag(Int#(32) this_pe_state);
        Vector#(4, Int#(32)) curr_row;
        for (Int#(32) i = 0; i < 4; i = i + 1) begin
            if (this_pe_state - i < 0 || this_pe_state - i >= 4) begin
                curr_row[i] = 0;
            end else begin
                curr_row[i] = x1[this_pe_state - i][i];
            end
        end
        return curr_row;
    endfunction 

    
    function Vector#(4, Int#(32)) get_col_diag(Int#(32) this_pe_state);
        Vector#(4, Int#(32)) curr_col;
        for (Int#(32) i = 0; i < 4; i = i + 1) begin
            if (this_pe_state - i < 0 || this_pe_state - i >= 4) begin
                curr_col[i] = 0;
            end else begin
                curr_col[i] = x2[i][this_pe_state - i];
            end
        end
        return curr_col;
    endfunction

    
    // File output
    let out_file <- mkReg(InvalidFile);
    Reg#(Bool) file_valid <- mkReg(False);

    rule countCycles if (count < 50 && !ready);
        $display("Cycle", count);
        count <= count + 1;
    endrule
    
    rule set_outfile(file_valid == False);
        String file = "results.txt";
        File f <- $fopen(file);
        if (f == InvalidFile) begin
            $display("Invalid file %s", file);
            $finish(0);
        end

        f = f | stdout_mcd;
        file_valid <= True;
        out_file <= f;
    endrule

    // Single pulse of the data through the array
    rule pulse_data(!ready && pe_iter_num < max_pe_iters && pe_state == pe_iter_num);
        
        if (pe_state < max_steps) begin
            // Column vector (top-down flow) from left matrix
            let a_column = get_col_diag(pe_state);
            // Row vector (left-right flow) from top matrix
            let b_row = get_row_diag(pe_state);
            
            // Send matrix data left-right
            for (Int#(32) i = 0; i < 4; i = i + 1) begin
                // Pre-saturate entire left column
                left[i][0][0] <= a_column[i];
                for (Int#(32) j = 1; j < 4; j = j + 1) begin
                    if (pe_state == 0) begin
                        // Before the array receives any data, set top row (except for left column) to 0
                        left[i][j][0] <= 0;
                    end else begin
                        // Pulse data rightwards
                        left[i][j][0] <= left[i][j - 1][0];
                    end
                end
            end

            // Send matrix data top-down
            for (Int#(32) i = 0; i < 4; i = i + 1) begin
                // Pre-saturate entire top row
                top[0][i][0] <= b_row[i];
                for (Int#(32) j = 1; j < 4; j = j + 1) begin
                    if (pe_state == 0) begin
                        // Before the array receives any data, set left column (except for top row) to 0
                        top[j][i][0] <= 0;
                    end else begin
                        // Pulse data downwards
                        top[j][i][0] <= top[j - 1][i][0];
                    end
                end
            end
        end else begin // All input data has flowed through entire array. Can clear input grids.
            for (Int#(32) i = 0; i < 4; i = i + 1) begin
                for (Int#(32) j = 0; j < 4; j = j + 1) begin
                    top[i][j][0] <= 0;
                    left[i][j][0] <= 0;
                end
            end
        end
        // Data grid is updated, now PEs need to receive data and compute
        pe_state <= pe_state + 1;
    endrule

    
    // Move inputs from top/left data grid into PEs
    rule pe_put(!ready && pe_iter_num < max_pe_iters);
        for (Int#(32) i = 0; i < 4; i = i + 1) begin
            for (Int#(32) j = 0; j < 4; j = j + 1) begin  
                array[i][j].flow_top(top[i][j][1]);
                array[i][j].flow_left(left[i][j][1]);
            end
        end
        pe_receive_done <= True;
        pe_iter_num <= pe_iter_num + 1;
    endrule


    // One step of PE computation
    rule pe_compute(!ready && pe_iter_num == max_pe_iters);
        $display("Writing out results:");
        for (Int#(32) i = 0; i < 4; i = i + 1) begin
            for (Int#(32) j = 0; j < 4; j = j + 1) begin  
                let c = array[i][j].get_output();
                res[i][j] <= c;
                $fwrite(out_file, "%d\t", c);
            end
            $fwrite(out_file, "\n");
        end
        $fwrite(out_file, "\n\n"); 
        ready <= True;
    endrule


    // method Action init(); 
    method Action init() if (ready);
        for (Int#(32) i = 0; i < 4; i = i + 1) begin
            for (Int#(32) j = 0; j < 4; j = j + 1) begin
                array[i][j].init_pe();
                array[i][j].set_total_iter(max_pe_iters);
            end
        end
        $display("Matrix X1");
        for (Int#(32) i = 0; i < 4; i = i + 1) begin
            for (Int#(32) j = 0; j < 4; j = j + 1) begin  
                $fwrite(out_file, "%d\t", x1[i][j]);
            end
            $fwrite(out_file, "\n");
        end
        $display("Matrix X2");
        for (Int#(32) i = 0; i < 4; i = i + 1) begin
            for (Int#(32) j = 0; j < 4; j = j + 1) begin  
                $fwrite(out_file, "%d\t", x2[i][j]);
            end
            $fwrite(out_file, "\n");
        end
        ready <= False;
        pe_state <= 0;
        pe_iter_num <= 0;
    endmethod

    method Action loadDataA(Bit#(512) data) if (ready);
        for (Integer i = 0; i < 4; i = i + 1) begin
            for (Integer j = 0; j < 4; j = j + 1) begin
                x2[i][j] <= unpack(data[(i * 4 + j + 1) * 32 - 1:(i * 4 + j) * 32]);
            end
        end
    endmethod

    method Action loadDataB(Bit#(512) data) if (ready);
        for (Integer i = 0; i < 4; i = i + 1) begin
            for (Integer j = 0; j < 4; j = j + 1) begin
                x1[i][j] <= unpack(data[(i * 4 + j + 1) * 32 - 1:(i * 4 + j) * 32]);
            end
        end
    endmethod

    method ActionValue#(Bit#(512)) getResults() if (ready);
        Bit#(512) tmp = 0;
        Bit#(512) ret = 0;
        for (Int#(32) i = 0; i < 4; i = i + 1) begin
            for (Int#(32) j = 0; j < 4; j = j + 1) begin
                tmp = zeroExtend(pack(res[i][j]));
                ret = ret + (tmp << ((i * 4 + j) * 32));
            end
        end
        return ret;
    endmethod
endmodule