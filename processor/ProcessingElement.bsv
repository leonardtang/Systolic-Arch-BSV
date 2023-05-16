// This file describes a single Processing Element
// It stores a current value, and adds an incoming product of elements flowing in from the top and left PE's

package ProcessingElement;
import Ehr::*;

interface PE_interface;
    // Initialize PE 
    method Action init_pe(); 
    // Reset PE value and iterations to 0
    method Action flow_top(Int#(32) x);
    // Flow "y" (left) value into PE
    method Action flow_left(Int#(32) y);
    // Set total number of computation iterations PE is allowed to perform
    method Action set_total_iter(Int#(32) z);
    // Get PE output (value that flows down and right)
    method Int#(32) get_output();
    // Check if computation finished
endinterface


(* synthesize *)
module mkProcessingElement(PE_interface);

    Reg#(Int#(32)) product <- mkReg(0);
    Ehr#(2, Int#(32)) top <- mkEhr(0);
    Ehr#(2, Int#(32)) left <- mkEhr(0);
    Reg#(Int#(32)) total_iters <- mkReg(0);

    Reg#(Bool) on <- mkReg(False);
    Reg#(Bool) received_top <- mkReg(False);
    Reg#(Bool) received_left <- mkReg(False);
    Ehr#(2, Bool) done <- mkEhr(False);
    Ehr#(2, Int#(32)) iter_count <- mkEhr(0);

    // Core Multiply and Accumulate code
    // Could be sped up potentially with binary MAC implementation instead
    rule pe_mac if (on && !done[1]);
        product <= product + top[1] * left[1];
        // $display("Product", product);
        if (iter_count[1] >= total_iters) begin
            on <= False;
        end
        done[1] <= True;
    endrule

    method Action init_pe() if (!on);
        // $display("init_pe");
        on <= True;
        product <= 0;
        iter_count[1] <= 0;
    endmethod

    method Action set_total_iter(Int#(32) iters) if (!on);
        // $display("set_total_iter");
        total_iters <= iters;
    endmethod

    method Action flow_top(Int#(32) x) if (on && iter_count[0] < total_iters);
        // $display("flow_top");
        top[0] <= x;
        iter_count[0] <= iter_count[0] + 1;
        done[0] <= False;
    endmethod

    // Note that flow_top and flow_left will always be called together in SystolicArray
    // So iter_count only incremenets on pairs of calls
    method Action flow_left(Int#(32) x) if (on && iter_count[0] < total_iters);
        // $display("flow_left");
        left[0] <= x;
    endmethod

    method Int#(32) get_output if (done[1]);
        return product;
    endmethod

endmodule


endpackage 