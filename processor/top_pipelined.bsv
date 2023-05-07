import RVUtil::*;
import BRAM::*;
import pipelined::*;
import FIFO::*;
import Cache::*;
import MainMem::*;
import MemTypes::*;
typedef Bit#(32) Word;

module mktop_pipelined(Empty);
    // Instantiate the dual ported memory
    BRAM_Configure cfg = defaultValue();
    cfg.loadFormat = tagged Hex "mem.vmh";
    BRAM2PortBE#(Bit#(30), Word, 4) bram <- mkBRAM2ServerBE(cfg);

    RVIfc rv_core <- mkpipelined;
    Reg#(Mem) ireq <- mkRegU;
    Reg#(Mem) dreq <- mkRegU;
    FIFO#(Mem) mmioreq <- mkFIFO;
    let debug = True;
    Reg#(Bit#(32)) cycle_count <- mkReg(0);
    Cache cache <- mkCache;
    Cache icache <- mkCache;
    MainMem mainMem <- mkMainMem();
    MainMem mainIMem <- mkMainMem();

    rule tic;
	    cycle_count <= cycle_count + 1;
    endrule

    rule connectCacheDram;
        let lineReq <- cache.getToMem();
        mainMem.put(lineReq);
    endrule

    rule connectDramCache;
        let resp <- mainMem.get;
        cache.putFromMem(resp);
    endrule

    rule connectICacheDram;
        let lineReq <- icache.getToMem();
        mainIMem.put(lineReq);
    endrule

    rule connectIDramCache;
        let resp <- mainIMem.get;
        icache.putFromMem(resp);
    endrule

    rule requestI;
        let req <- rv_core.getIReq;
        if (debug) $display("Get IReq", fshow(req));
        ireq <= req;
        let newreq = CacheReq{ byte_en:req.byte_en, addr:truncate(req.addr >> 2), data:req.data};
        icache.putFromProc(newreq);
    endrule

    rule responseI;
        let x <- icache.getToProc();
        let req = ireq;
        if (debug) $display("Get IResp ", fshow(req), fshow(x));
        req.data = x;
        rv_core.getIResp(req);
    endrule

    rule requestD;
        let req <- rv_core.getDReq;
        dreq <= req;
        if (debug) $display("Get DReq", fshow(req));
        let newreq = CacheReq{ byte_en:req.byte_en, addr:truncate(req.addr >> 2), data:req.data};
        cache.putFromProc(newreq);
    endrule

    rule responseD;
        let x <- cache.getToProc();
        let req = dreq;
        if (debug) $display("Get DResp ", fshow(req), fshow(x));
        req.data = x;
        rv_core.getDResp(req);
    endrule
  
    rule requestMMIO;
        let req <- rv_core.getMMIOReq;
        if (debug) $display("Get MMIOReq", fshow(req));
        if (req.byte_en == 'hf) begin
            if (req.addr == 'hf000_fff4) begin
                // Write integer to STDERR
                        $fwrite(stderr, "%0d", req.data);
                        $fflush(stderr);
            end
        end
        if (req.addr ==  'hf000_fff0) begin
                // Writing to STDERR
                $fwrite(stderr, "%c", req.data[7:0]);
                $fflush(stderr);
        end else
            if (req.addr == 'hf000_fff8) begin
            // Exiting Simulation
                if (req.data == 0) begin
                        $fdisplay(stderr, "  [0;32mPASS[0m");
                end
                else
                    begin
                        $fdisplay(stderr, "  [0;31mFAIL[0m (%0d)", req.data);
                    end
                $fflush(stderr);
                $finish;
            end

        mmioreq.enq(req);
    endrule

    rule responseMMIO;
        let req = mmioreq.first();
        mmioreq.deq();
        if (debug) $display("Put MMIOResp", fshow(req));
        rv_core.getMMIOResp(req);
    endrule
    
endmodule
