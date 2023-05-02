import FIFOF::*;
import SpecialFIFOs::*;
import Vector::*;
interface DelayLine#(numeric type n, type t);
    method Action put(t a);
    method ActionValue#(t) get();
endinterface

module mkDL(DelayLine#(n,t)) provisos (Bits#(t, s));
    Vector#(n, FIFOF#(t)) d <- replicateM(mkPipelineFIFOF);

    for (Integer i=valueOf(n)-1; i >= 1; i = i - 1) begin // TODO typically n > 2

        rule try_move;
            if (d[i-1].notEmpty && d[i].notFull) begin
                let x = d[i-1].first();
                d[i-1].deq();
                d[i].enq(x);
            end
        endrule
    end

    method Action put(t a);
        d[0].enq(a);
    endmethod

    method ActionValue#(t) get();
        let r = d[valueOf(n) - 1].first();
        d[valueOf(n) - 1].deq();
        return r;
    endmethod
endmodule

module mkDelayLine(Empty);
    DelayLine#(20, Bit#(10)) dl <- mkDL;
    Reg#(Bit#(10)) cnt_f <- mkReg(0);
    Reg#(Bit#(10)) cnt_s <- mkReg(0);
    Reg#(Bit#(32)) ctime <- mkReg(0);

    rule tic;
        ctime <= ctime + 1;
        $display("TIC %d", ctime);
    endrule

    rule feed if (cnt_f < 10);
        cnt_f <= cnt_f + 1;
        dl.put(cnt_f);
    endrule

    rule stream;
        let x <- dl.get();
        $display("Stream %d", x);
        cnt_s <= cnt_s + 1;
        if (cnt_s == 9) $finish(0);
    endrule
endmodule
