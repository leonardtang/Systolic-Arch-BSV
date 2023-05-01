// This file describes a single Processing Element
// It stores a current value, and adds an incoming product of elements flowing in from the top and left PE's

package processing_element;

interface PE_interface;
    // Initialize PE 
    method Action init_pe(); 
    // Reset PE value and iterations to 0
    method Action reset_pe(); 
    // Flow "x" (top) value into PE
    method Action flow_top(int x);
    // Flow "y" (left) value into PE
    method Action flow_left(int y);
    // Set total number of computation iterations PE is allowed to perform
    method Action set_total_iter(int z);
    // Get PE output (value that flows down and right)
    method int get_output();
    // Check if computation finished
    method Bool is_finished();
endinterface


(* synthesize *)
module makePE(PE_interface);

    Reg#(int) product <- mkReg(0);
    Reg#(int) top <- mkReg(0);
    Reg#(int) left <- mkReg (0);
    Reg#(int) total_iters <- mkReg(0);

    Reg#(Bool) on <- mkReg(False);
    Reg#(Bool) received_top <- mkReg(False);
    Reg#(Bool) received_left <- mkReg(False);
    Reg#(Bool) done <- mkReg(False);
    Reg#(int) iter_count <- mkReg(0);

    // Core Multiply and Accumulate code
    // Could be sped up potentially with binary MAC implementation instead
    rule pe_mac (received_top && received_left && on);
        product <= product + received_top * received_left;
        done <= True; 
    endrule

    method Action init_pe() if (!on);
        on <= True;
        product <= 0;
    endmethod

    method Action set_total_iter(int iters);
        total_iters <= iters;
    endmethod

    method Action reset_pe() if (on);
        product <= 0;
        iter_count <= 0;
    endmethod

    method Bool is_finished();
        return done;
    endmethod

    method Action flow_top(int x) if (on && (iter_count < total_iters) && (!received_top));
        top <= x;
        received_top <= True;
        iter_count <= iter_count + 1;
    endmethod

    // Potentially hacky assumption: here we assume that flow_top and flow_left will always be called together
    // So iter_count only incremenets on pairs of calls
    method Action flow_left(int x) if (on && (!received_left));
        left <= x;
        received_left <= True;
    endmethod

    method int get_output if (done);
        return product
    endmethod

endmodule


endpackage 