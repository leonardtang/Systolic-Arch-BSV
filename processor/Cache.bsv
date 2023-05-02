import BRAM::*;
import FIFO::*;
import SpecialFIFOs::*;
import MemTypes::*;
import Vector::*;
import Ehr::*;

interface Cache;
    method Action putFromProc(MainMemReq e);
    method ActionValue#(MainMemResp) getToProc();
    method ActionValue#(MainMemReq) getToMem();
    method Action putFromMem(MainMemResp e);
endinterface

typedef enum {Ready, Read, StartMiss, SendFillReq, WaitFillResp}
ReqStatus deriving (Bits, Eq);

module mkCache(Cache);
  // TODO Write a Cache
  BRAM_Configure cfg = defaultValue;
  BRAM2Port#(Int#(26), Bit#(512)) cache <- mkBRAM2Server(cfg);
  Vector#(128, Reg#(LineAddr)) tagArray <- replicateM(mkReg(-1));
  Vector#(128, Reg#(Bool)) dirtyArray <- replicateM(mkReg(False));

  FIFO#(MainMemResp) hitQ <- mkBypassFIFO;
  Reg#(MainMemReq) missReq <- mkRegU;
  Reg#(ReqStatus) mshr <- mkReg(Ready);
  
  FIFO#(MainMemReq) memReqQ <- mkFIFO;
  FIFO#(MainMemResp) memRespQ <- mkFIFO;

  FIFO#(MainMemReq) stb <- mkSizedFIFO(1);
  Ehr#(2, Bool) lockL1 <- mkEhr(False);

  rule startMiss if (mshr == StartMiss);
    Int#(26) idx = unpack(missReq.addr % 128);
    let tag = tagArray[idx];
    let dirty = dirtyArray[idx];
    // $display("Tag1 %x %x", missReq.addr, missReq.data);

    if (tag != -1 && dirty) begin
      Bit#(512) data = 0;
      data <- cache.portA.response.get();
      // $display("Writing %x %x %x", dirty, tag, data);
      memReqQ.enq(MainMemReq{ write:1, addr:tag, data:data });
    end 
    mshr <= SendFillReq;
  endrule

  rule sendFillReq if (mshr == SendFillReq);
    // $display("Tag2 %x %x", missReq.addr, missReq.data);
    memReqQ.enq(MainMemReq{ write:0, addr:missReq.addr, data:? });
    mshr <= WaitFillResp;
  endrule

  rule waitFillResp if (mshr == WaitFillResp);
    let tag = missReq.addr;
    Int#(26) idx = unpack(tag % 128);
    let data = memRespQ.first();
    memRespQ.deq();
    // $display("Tag3 %x %x", missReq.addr, missReq.data);
    // $display("The memory is %x", data);

    tagArray[idx] <= tag;
    // $display("Chaning Tag %x %x", idx, tag);
    if (missReq.write == 1) begin
      dirtyArray[idx] <= True;
      cache.portA.request.put(BRAMRequest{write: True, // False for read
                              responseOnWrite: False,
                              address: idx,
                              datain: missReq.data});
    end else begin
      dirtyArray[idx] <= False;
      hitQ.enq(data);
      cache.portA.request.put(BRAMRequest{write: True, // False for read
                              responseOnWrite: False,
                              address: idx,
                              datain: data});
    end

    mshr <= Ready;
  endrule

  rule read if (mshr == Read);
    MainMemResp data = 0;
    data <- cache.portA.response.get();
    // $display("The cache answered %x", data);
    hitQ.enq(data);
    mshr <= Ready;
  endrule

  // rule print;
  //   $display(mshr);
  // endrule
  rule mvStbToL1 (mshr == Ready && !lockL1[1]);
    let x = stb.first();
    stb.deq();

    let addr = x.addr;
    let data = x.data;
    Int#(26) idx = unpack(addr % 128);

    if (addr == tagArray[idx]) begin
      dirtyArray[idx] <= True;
      cache.portA.request.put(BRAMRequest{write: True, // False for read
                              responseOnWrite: False,
                              address: idx,
                              datain: data});
    end else begin
      if (tagArray[idx] != -1 && dirtyArray[idx]) begin
        cache.portA.request.put(BRAMRequest{write: False, // False for read
                                responseOnWrite: False,
                                address: idx,
                                datain: ?});
      end
      missReq <= x;
      // $display("Tag0 %x %x %x", write, addr, data);
      mshr <= StartMiss;
    end
  endrule

  rule clearL1Lock; lockL1[1] <= False; endrule

  method Action putFromProc(MainMemReq e) if (mshr == Ready);
    let write = e.write;
    let addr = e.addr;
    let data = e.data;
    Int#(26) idx = unpack(addr % 128);
    // $display("Recieved Hit %x %x %x %x %x", idx, tagArray[idx], write, addr, data);

    if (write == 1) begin
      stb.enq(e);
    end else begin
      lockL1[0] <= True;
      let x = stb.first();
      if (x.addr == addr) begin
        hitQ.enq(x.data);
      end else if (addr == tagArray[idx]) begin
        cache.portA.request.put(BRAMRequest{write: False, // False for read
                                responseOnWrite: False,
                                address: idx,
                                datain: ?});
        mshr <= Read;
      end else begin
        if (tagArray[idx] != -1 && dirtyArray[idx]) begin
        cache.portA.request.put(BRAMRequest{write: False, // False for read
                                responseOnWrite: False,
                                address: idx,
                                datain: ?});
        end
        missReq <= e;
        // $display("Tag0 %x %x %x", write, addr, data);
        mshr <= StartMiss;
      end
    end
  endmethod

  method ActionValue#(MainMemResp) getToProc();
    let data = hitQ.first();
    hitQ.deq();

    return data;
  endmethod

  method ActionValue#(MainMemReq) getToMem();
    let e = memReqQ.first();
    memReqQ.deq();
    return e;
  endmethod

  method Action putFromMem(MainMemResp e);
    memRespQ.enq(e);
  endmethod


endmodule
