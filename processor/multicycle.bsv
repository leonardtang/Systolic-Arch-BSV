import FIFO::*;
import SpecialFIFOs::*;
import RegFile::*;
import RVUtil::*;
import Vector::*;
import KonataHelper::*;
import Printf::*;

typedef struct { Bit#(4) byte_en; Bit#(32) addr; Bit#(32) data; } Mem deriving (Eq, FShow, Bits);

interface RVIfc;
    method ActionValue#(Mem) getIReq();
    method Action getIResp(Mem a);
    method ActionValue#(Mem) getDReq();
    method Action getDResp(Mem a);

    method ActionValue#(Mem) getMMIOReq();
    method Action getMMIOResp(Mem a);
endinterface

typedef enum {
	Fetch, Decode, Execute, Writeback
} StateProc deriving (Eq, FShow, Bits);

typedef struct { Bool isUnsigned; Bit#(2) size; Bit#(2) offset; Bool mmio; } MemBusiness deriving (Eq, FShow, Bits);

function Bool isMMIO(Bit#(32) addr);
    Bool x = case (addr) 
        32'hf000fff0: True;
        32'hf000fff4: True;
        32'hf000fff8: True;
        default: False;
    endcase;
    return x;
endfunction

module mkmulticycle(RVIfc);
    // Queues to the memories
    FIFO#(Mem) toImem <- mkBypassFIFO;
    FIFO#(Mem) fromImem <- mkBypassFIFO;
    FIFO#(Mem) toDmem <- mkBypassFIFO;
    FIFO#(Mem) fromDmem <- mkBypassFIFO;
    FIFO#(Mem) toMMIO <- mkBypassFIFO;
    FIFO#(Mem) fromMMIO <- mkBypassFIFO;

    Reg#(Bit#(32)) pc <- mkReg(32'h0000000);
    Vector#(32, Reg#(Bit#(32))) rf <- replicateM(mkReg(0));

	Reg#(StateProc) state <- mkReg(Fetch);
	Reg#(Bit#(32)) rv1 <- mkReg(0);
	Reg#(Bit#(32)) rv2 <- mkReg(0);
	Reg#(Bit#(32)) rvd <- mkReg(0);
	Reg#(DecodedInst) dInst <- mkReg(unpack(0));
	Reg#(MemBusiness) mem_business <- mkReg(?);

	// Konata Logging
    String dumpFile = "output.log" ;
    let lfh <- mkReg(InvalidFile);
	Reg#(KonataId) current_id <- mkReg(0);
	Reg#(KonataId) fresh_id <- mkReg(0);
	Reg#(KonataId) commit_id <- mkReg(0);
	FIFO#(KonataId) retired <- mkFIFO;
	FIFO#(KonataId) squashed <- mkFIFO;

    Bool debug = False;
    Reg#(Bool) starting <- mkReg(True);

	rule do_tic_logging;
        if (starting) begin
            let f <- $fopen( dumpFile, "w" ) ;
            lfh <= f;
            $fwrite(f, "Kanata\t0004\nC=\t1\n");
            starting <= False;
        end
		konataTic(lfh);
	endrule

    rule fetch if (state == Fetch && !starting);
	    if(debug) $display("Fetch %x", pc);
		let iid <- fetch1Konata(lfh, fresh_id, 0);
        labelKonataLeft(lfh, iid, $format("PC : %x",pc));
		current_id <= iid;
        let req = Mem {byte_en : 0,
			   addr : pc,
			   data : 0};
        state <= Decode;
        toImem.enq(req);
    endrule

    rule decode if (state == Decode && !starting);
        let resp = fromImem.first();
		fromImem.deq();
        let instr = resp.data;
        let decodedInst = decodeInst(instr);
		decodeKonata(lfh, current_id);
        labelKonataLeft(lfh,current_id, $format("Instr bits: %x",decodedInst.inst));
		dInst <= decodedInst;
		if (debug) $display("[Decode] ", fshow(decodedInst));
        let rs1_idx = getInstFields(instr).rs1;
        let rs2_idx = getInstFields(instr).rs2;
		let rs1 = (rs1_idx ==0 ? 0 : rf[rs1_idx]);
		let rs2 = (rs2_idx == 0 ? 0 : rf[rs2_idx]);
        labelKonataLeft(lfh,current_id, $format(" Potential r1: %x, Potential r2: %x" , rs1, rs2));
		rv1 <= rs1;
		rv2 <= rs2;
        state <= Execute;
    endrule

    rule execute if (state == Execute && !starting);
		if (debug) $display("[Execute] ", fshow(dInst));
		executeKonata(lfh, current_id);
		let imm = getImmediate(dInst);
		Bool mmio = False;
		let data = execALU32(dInst.inst, rv1, rv2, imm, pc);
		let isUnsigned = 0;
		let funct3 = getInstFields(dInst.inst).funct3;
		let size = funct3[1:0];
		let addr = rv1 + imm;
		Bit#(2) offset = addr[1:0];
		if (isMemoryInst(dInst)) begin
			// Technical details for load byte/halfword/word
		    let shift_amount = {offset, 3'b0};
		    let byte_en = 0;
		    case (size) matches
			2'b00: byte_en = 4'b0001 << offset;
			2'b01: byte_en = 4'b0011 << offset;
			2'b10: byte_en = 4'b1111 << offset;
		    endcase
		    data = rv2 << shift_amount;
		    addr = {addr[31:2], 2'b0};
		    isUnsigned = funct3[2];
		    let type_mem = (dInst.inst[5] == 1) ? byte_en : 0;
		    let req = Mem {byte_en : type_mem,
				       addr : addr,
				       data : data};
		    if (isMMIO(addr)) begin 
		        if (debug) $display("[Execute] MMIO", fshow(req));
    		    toMMIO.enq(req);
                labelKonataLeft(lfh,current_id, $format(" MMIO ", fshow(req)));
    		    mmio = True;
		    end else begin 
                labelKonataLeft(lfh,current_id, $format(" MEM ", fshow(req)));
    		    toDmem.enq(req);
		    end
		end
		else if (isControlInst(dInst)) begin
                labelKonataLeft(lfh,current_id, $format(" Ctrl instr "));
                data = pc + 4;
		end else begin 
            labelKonataLeft(lfh,current_id, $format(" Standard instr "));
		end
		let controlResult = execControl32(dInst.inst, rv1, rv2, imm, pc);
		let nextPc = controlResult.nextPC;
		labelKonataLeft(lfh,current_id, $format("nextPc %x ", nextPc));
		pc <= nextPc;
		rvd <= data;

        labelKonataLeft(lfh,current_id, $format(" ALU output: %x" , data));
		mem_business <= MemBusiness { isUnsigned : unpack(isUnsigned), size : size, offset : offset, mmio: mmio};
		state <= Writeback;
    endrule

    rule writeback if (state == Writeback && !starting);
		writebackKonata(lfh,current_id);
        retired.enq(current_id);
		state <= Fetch;
        let data = rvd;
        let fields = getInstFields(dInst.inst);
        if (isMemoryInst(dInst)) begin // (* // write_val *)
            let resp = ?;
		    if (mem_business.mmio) begin 
                resp = fromMMIO.first();
		        fromMMIO.deq();
		    end else begin 
                resp = fromDmem.first();
		        fromDmem.deq();
		    end
            let mem_data = resp.data;
            mem_data = mem_data >> {mem_business.offset ,3'b0};
            case ({pack(mem_business.isUnsigned), mem_business.size}) matches
	     	3'b000 : data = signExtend(mem_data[7:0]);
	     	3'b001 : data = signExtend(mem_data[15:0]);
	     	3'b100 : data = zeroExtend(mem_data[7:0]);
	     	3'b101 : data = zeroExtend(mem_data[15:0]);
	     	3'b010 : data = mem_data;
             endcase
		end
		if(debug) $display("[Writeback]", fshow(dInst));
        if (!dInst.legal) begin
			if (debug) $display("[Writeback] Illegal Inst, Drop and fault: ", fshow(dInst));
			pc <= 0;	// Fault
	    end
		if (dInst.valid_rd) begin
            let rd_idx = fields.rd;
            if (rd_idx != 0) begin rf[rd_idx] <=data; end
		end
    endrule

    rule administrative_konata_commit;
        retired.deq();
        let f = retired.first();
		commitKonata(lfh, f, commit_id);
    endrule

    rule administrative_konata_flush;
        squashed.deq();
        let f = squashed.first();
		squashKonata(lfh, f);
    endrule

    method ActionValue#(Mem) getIReq();
		toImem.deq();
		return toImem.first();
    endmethod
    method Action getIResp(Mem a);
    	fromImem.enq(a);
    endmethod
    method ActionValue#(Mem) getDReq();
		toDmem.deq();
		return toDmem.first();
    endmethod
    method Action getDResp(Mem a);
		fromDmem.enq(a);
    endmethod
    method ActionValue#(Mem) getMMIOReq();
		toMMIO.deq();
		return toMMIO.first();
    endmethod
    method Action getMMIOResp(Mem a);
		fromMMIO.enq(a);
    endmethod
endmodule
