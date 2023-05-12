// This file describes a 5 x 5 systolic array of Processing Elements
// Notably, this is a standalone module without an interface

import Vector::*;
import RegFile::*;
import ProcessingElement::*;
// TODO(ltang): write preprocessing code to get input
// import GetInput::*;


// // Input square matrix 4ension
// Integer 4 = 4;
// Number of input matrix pairs (A,B)
Int#(32) num_input_mtx = 1;

interface SystolicArray;
    // Initialize PE 
    // method Action init(); 
    // Reset PE value and iterations to 0
    method Action reset_all_pe();
    // method ActionValue#(Vector#(4, Int#(32))) get_row_diag(Int#(32) x);
    // method ActionValue#(Vector#(4, Int#(32))) get_col_diag(Int#(32) y);
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

    Reg#(Bool) input_mtx_received <- mkReg(False);
    Reg#(Bool) pe_op_finished <- mkReg(False);
    Reg#(Bool) pe_receive_done <- mkReg(False);
    Reg#(Int#(32)) pe_state <- mkReg(0);
    Reg#(Int#(32)) pe_iter_num <- mkReg(0);

    Vector#(4, Vector#(4, Reg#(Int#(32)))) x1 <- replicateM(replicateM(mkReg(1)));
    Vector#(4, Vector#(4, Reg#(Int#(32)))) x2 <- replicateM(replicateM(mkReg(1)));

    // 2D 4` x 4` grid of PEs
    Vector#(4, Vector#(4, PE_interface)) array <- replicateM(replicateM(mkProcessingElement));
    // Grid of input data that controls flow input to each PE in the array
    // Controls top-down input flow
    Vector#(4, Vector#(4, Reg#(Int#(32)))) top <- replicateM(replicateM(mkReg(0)));
    // Controls left-right input flow
    Vector#(4, Vector#(4, Reg#(Int#(32)))) left <- replicateM(replicateM(mkReg(0)));


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
        // $display("get col diag?");
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
    
    rule set_outfile(file_valid == False);
        $display("set_outfile");
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


    (* descending_urgency = "pe_compute, pulse_data" *)
    // Single pulse of the data through the array
    rule pulse_data(input_mtx_received && pe_op_finished);
        $display("pulse_data");
        
        if (pe_state < max_steps) begin
            // Column vector (top-down flow) from left matrix
            let a_column = get_col_diag(pe_state);
            // Row vector (left-right flow) from top matrix
            let b_row = get_row_diag(pe_state);
            
            // Send matrix data left-right
            for (Int#(32) i = 0; i < 4; i = i + 1) begin
                // Pre-saturate entire left column
                left[i][0] <= a_column[i];
                for (Int#(32) j = 1; j < 4; j = j + 1) begin
                    if (pe_state == 0) begin
                        // Before the array receives any data, set top row (except for left column) to 0
                        left[i][j] <= 0;
                    end else begin
                        // Pulse data rightwards
                        left[i][j] <= left[i][j - 1];
                    end
                end
            end

            // Send matrix data top-down
            for (Int#(32) i = 0; i < 4; i = i + 1) begin
                // Pre-saturate entire top row
                top[0][i] <= b_row[i];
                for (Int#(32) j = 1; j < 4; j = j + 1) begin
                    if (pe_state == 0) begin
                        // Before the array receives any data, set left column (except for top row) to 0
                        top[j][i] <= 0;
                    end else begin
                        // Pulse data downwards
                        top[j][i] <= top[j - 1][i];
                    end
                end
            end
        end else begin // All input data has flowed through entire array. Can clear input grids.
            for (Int#(32) i = 0; i < 4; i = i + 1) begin
                for (Int#(32) j = 0; j < 4; j = j + 1) begin
                    top[i][j] <= 0;
                    left[i][j] <= 0;
                end
            end
        end

        pe_state <= pe_state + 1;
        pe_iter_num <= pe_iter_num + 1;
        // Data grid is updated, now PEs need to receive data and compute
        pe_receive_done <= False;
        pe_op_finished <= False;

    endrule

    
    // Move inputs from top/left data grid into PEs
    rule pe_put(input_mtx_received && !pe_receive_done && !pe_op_finished);
        $display("pe_put");
        for (Int#(32) i = 0; i < 4; i = i + 1) begin
            for (Int#(32) j = 0; j < 4; j = j + 1) begin  
                array[i][j].flow_top(top[i][j]);
                array[i][j].flow_left(left[i][j]);
            end
        end
        pe_receive_done <= True;
    endrule


    // One step of PE computation
    rule pe_compute(input_mtx_received && pe_receive_done);
        $display("pe_compute");
        // Finished a single wave of PE operations 
        pe_op_finished <= True;

        // End of all matrix multiplications
        if (pe_iter_num == max_global_iters) begin
            $finish(0);
        end
        
        // End of a single A * B multiplication
        // Write out output matrix C
        if (pe_iter_num == max_pe_iters) begin
            for (Int#(32) i = 0; i < 4; i = i + 1) begin
                for (Int#(32) j = 0; j < 4; j = j + 1) begin  
                    let c = array[i][j].get_output();
                    $fwrite(out_file, "%d\t", c);
                end
                $fwrite(out_file, "\n");
            end
            $fwrite(out_file, "\n\n"); 
        end
    endrule


    // method Action init(); 
    rule init;
        $display("init?");
        for (Int#(32) i = 0; i < 4; i = i + 1) begin
            for (Int#(32) j = 0; j < 4; j = j + 1) begin
                array[i][j].init_pe();
                array[i][j].set_total_iter(max_pe_iters);
            end
        end
    endrule
    // endmethod


    // Reset grid for a new matrix pair (A,B)
    method Action reset_all_pe() if (input_mtx_received && pe_op_finished && pe_state == max_pe_iters);
        for (Int#(32) i = 0; i < 4; i = i + 1) begin
            for (Int#(32) j = 0; j < 4; j = j + 1) begin
                array[i][j].reset_pe();
            end
        end
        pe_state <= 0;
        // Reset happens on (max_pe_iters = max_steps + 1) pe_iters, but 
        pe_iter_num <= pe_iter_num - 1;
    endmethod


endmodule