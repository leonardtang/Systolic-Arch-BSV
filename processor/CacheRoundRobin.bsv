import BRAM::*;
import FIFO::*;
import FIFOF::*;
import SpecialFIFOs::*;
import MemTypes::*;
import Vector::*;
import Ehr::*;

interface Cache;
    method Action putFromProcData(CacheReq e);
    method Action putFromProcInst(CacheReq e);
    method ActionValue#(CacheResp) getToProcData();
    method ActionValue#(CacheResp) getToProcInst();
    method ActionValue#(MainMemReq) getToMem();
    method Action putFromMem(MainMemResp e);
endinterface

typedef enum {Ready, Read, StartMiss, SendFillReq, WaitFillResp, Stb}
ReqStatus deriving (Bits, Eq);

typedef enum {Inst, Data} 
ReqType deriving (Bits, Eq);

module mkCache(Cache);
  // TODO Write a Cache
  BRAM_Configure cfg = defaultValue;
  cfg.loadFormat = tagged Hex "mem.vmh";
  BRAM2PortBE#(Int#(26), Bit#(512), 64) cache <- mkBRAM2ServerBE(cfg);
  Vector#(128, Reg#(LineAddr)) tagArray <- replicateM(mkReg(-1));
  Vector#(128, Reg#(Bool)) dirtyArray <- replicateM(mkReg(False));

  FIFO#(CacheResp) hitInstQ <- mkBypassFIFO;
  FIFO#(CacheResp) hitDataQ <- mkBypassFIFO;

  Reg#(CacheReq) hitReq <- mkRegU;
  Reg#(CacheReq) missReq <- mkRegU;
  Reg#(ReqStatus) mshr <- mkReg(Ready);

  FIFOF#(CacheReq) instQ <- mkBypassFIFOF;
  FIFOF#(CacheReq) dataQ <- mkBypassFIFOF;
  
  FIFO#(MainMemReq) memReqQ <- mkFIFO;
  FIFO#(MainMemResp) memRespQ <- mkFIFO;

  Reg#(ReqType) reqType <- mkReg(Inst);
  Reg#(ReqType) stbType <- mkReg(Inst);

  FIFOF#(CacheReq) stb <- mkSizedFIFOF(1);
  Ehr#(2, Bool) lockL1 <- mkEhr(False);

  Reg#(Bit#(32)) stbBypass <- mkReg(0);

  rule startMiss if (mshr == StartMiss);
    LineAddr addr = truncate(missReq.addr >> 4);
    Int#(26) idx = unpack(addr % 128);
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
    memReqQ.enq(MainMemReq{ write:0, addr:truncate(missReq.addr >> 4), data:? });
    mshr <= WaitFillResp;
  endrule

  rule waitFillResp if (mshr == WaitFillResp);
    LineAddr addr = truncate(missReq.addr >> 4);
    Int#(26) idx = unpack(addr % 128);
    let offset = missReq.addr % 16;
    let data = memRespQ.first();
    memRespQ.deq();
    // $display("Tag3 %x %x", missReq.addr, missReq.data);
    // $display("The memory is %x", data);

    tagArray[idx] <= addr;
    // $display("Chaning Tag %x %x", idx, tag);
    if (missReq.byte_en != 0) begin
      dirtyArray[idx] <= True;
      Bit#(64) byte_en = { 0, missReq.byte_en };
      Bit#(512) new_data = { 0, missReq.data };
      byte_en = byte_en << (4 * offset);
      new_data = new_data << (32 * offset);
      // $display("Write %x %x", byte_en, new_data);
      cache.portA.request.put(BRAMRequestBE{writeen: byte_en, // False for read
                              responseOnWrite: True,
                              address: idx,
                              datain: new_data});
      hitReq <= missReq;
      mshr <= Read;
    end else begin
      dirtyArray[idx] <= False;
      Word word = data[32 * (offset + 1) - 1:32 * offset];
      if (reqType == Inst) begin
        hitDataQ.enq(word);
      end else if (reqType == Data) begin
        hitInstQ.enq(word);
      end
      cache.portA.request.put(BRAMRequestBE{writeen: 1, // False for read
                              responseOnWrite: False,
                              address: idx,
                              datain: data});
      mshr <= Ready;
    end

  endrule

  rule read if (mshr == Read);
    let offset = hitReq.addr % 16;
    MainMemResp data = 0;
    data <- cache.portA.response.get();
    // $display("The cache answered %x", data);
    Word word = data[32 * (offset + 1) - 1:32 * offset];
    // $display(511 - 32 * offset, 512 - 32 * (offset + 1), offset);
    $display("Cache %x %x", data, word);
    if (reqType == Inst) begin
      hitDataQ.enq(word);
    end else if (reqType == Data) begin
      hitInstQ.enq(word);
    end
    mshr <= Ready;
  endrule

  // rule print;
  //   $display(mshr);
  // endrule
  rule mvStbToL1 (mshr == Ready && !lockL1[1]);
    let x = stb.first();
    stb.deq();
    reqType <= stbType;
    // $display("Store Buffer ", fshow(x));

    let addr = truncate(x.addr >> 4);
    let offset = x.addr % 16;
    let data = x.data;
    Int#(26) idx = unpack(addr % 128);

    if (addr == tagArray[idx]) begin
      dirtyArray[idx] <= True;
      Bit#(64) byte_en = { 0, missReq.byte_en };
      Bit#(512) new_data = { 0, missReq.data };
      byte_en = byte_en << (4 * offset);
      new_data = new_data << (32 * offset);
      cache.portA.request.put(BRAMRequestBE{writeen: byte_en, // False for read
                              responseOnWrite: True,
                              address: idx,
                              datain: new_data});
      hitReq <= x;
      mshr <= Read;
    end else begin
      if (tagArray[idx] != -1 && dirtyArray[idx]) begin
        cache.portA.request.put(BRAMRequestBE{writeen: 0, // False for read
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

  rule stbRead if (mshr == Stb);
    if (reqType == Inst) begin
      hitDataQ.enq(stbBypass);
    end else if (reqType == Data) begin
      hitInstQ.enq(stbBypass);
    end
    mshr <= Ready;
  endrule

  rule putFromProc if (mshr == Ready);
    CacheReq e = CacheReq{};
    if (reqType == Data && dataQ.notEmpty) begin
      e = dataQ.first();
      dataQ.deq();
      reqType <= Inst;
    end else begin
      e = instQ.first();
      instQ.deq();
      reqType <= Data;
    end 

    // $display("Cache ", fshow(e));
    LineAddr addr = truncate(e.addr >> 4);
    let offset = e.addr % 16;
    let data = e.data;
    Int#(26) idx = unpack(addr % 128);
    // $display("Recieved Hit %x %x %x %x %x", idx, tagArray[idx], write, addr, data);

    if (e.byte_en != 0) begin
      stb.enq(e);
      stbType <= reqType;
    end else begin
      lockL1[0] <= True;
      Bool sbHit = False;
      CacheReq x = ?;
      if (stb.notEmpty) begin 
          x = stb.first();
          sbHit = (truncate((x.addr >> 4)) == addr);
      end
      if (sbHit) begin
        if (x.byte_en == '1) begin
          stbBypass <= x.data;
          mshr <= Stb;
        end else if (addr == tagArray[idx]) begin
          dirtyArray[idx] <= True;
          Bit#(64) byte_en = { 0, missReq.byte_en };
          Bit#(512) new_data = { 0, missReq.data };
          byte_en = byte_en << (4 * offset);
          new_data = new_data << (32 * offset);
          cache.portA.request.put(BRAMRequestBE{writeen: byte_en, // False for read
                                  responseOnWrite: True,
                                  address: idx,
                                  datain: new_data});
          hitReq <= e;
          mshr <= Read;
        end else begin
          if (tagArray[idx] != -1 && dirtyArray[idx]) begin
            cache.portA.request.put(BRAMRequestBE{writeen: 0, // False for read
                                    responseOnWrite: False,
                                    address: idx,
                                    datain: ?});
          end
          missReq <= x;
          // $display("Tag0 %x %x %x", write, addr, data);
          mshr <= StartMiss;
        end
      end else if (addr == tagArray[idx]) begin
        cache.portA.request.put(BRAMRequestBE{writeen: 0, // False for read
                                responseOnWrite: False,
                                address: idx,
                                datain: ?});
        hitReq <= e;
        mshr <= Read;
      end else begin
        if (tagArray[idx] != -1 && dirtyArray[idx]) begin
          cache.portA.request.put(BRAMRequestBE{writeen: 0, // False for read
                                  responseOnWrite: False,
                                  address: idx,
                                  datain: ?});
        end
        missReq <= e;
        // $display("Tag0 %x %x %x", write, addr, data);
        mshr <= StartMiss;
      end
    end
  endrule

  method Action putFromProcInst(CacheReq e);
    instQ.enq(e);
  endmethod

  method Action putFromProcData(CacheReq e);
    dataQ.enq(e);
  endmethod

  method ActionValue#(CacheResp) getToProcInst();
    let data = hitInstQ.first();
    hitInstQ.deq();
    return data;
  endmethod

  method ActionValue#(CacheResp) getToProcData();
    let data = hitDataQ.first();
    hitDataQ.deq();
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
