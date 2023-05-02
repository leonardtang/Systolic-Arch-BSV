import FIFO::*;
import SpecialFIFOs::*;
import RegFile::*;
import RVUtil::*;
import Vector::*;
import KonataHelper::*;
import Printf::*;
import Ehr::*;

typedef struct { Bit#(4) byte_en; Bit#(32) addr; Bit#(32) data; } Mem deriving (Eq, FShow, Bits);

interface RVIfc;
    method ActionValue#(Mem) getIReq();
    method Action getIResp(Mem a);
    method ActionValue#(Mem) getDReq();
    method Action getDResp(Mem a);
    method ActionValue#(Mem) getMMIOReq();
    method Action getMMIOResp(Mem a);
endinterface
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

typedef struct { 
    Bit#(32) pc;
    Bit#(32) ppc;
    Bit#(1) epoch; 
    KonataId k_id; // <- This is a unique identifier per instructions, for logging purposes
} F2D deriving (Eq, FShow, Bits);

typedef struct { 
    DecodedInst dinst;
    Bit#(32) pc;
    Bit#(32) ppc;
    Bit#(1) epoch;
    Bit#(32) rv1; 
    Bit#(32) rv2; 
    KonataId k_id; // <- This is a unique identifier per instructions, for logging purposes
} D2E deriving (Eq, FShow, Bits);

typedef struct { 
    MemBusiness mem_business;
    Bit#(32) data;
    DecodedInst dinst;
    Bit#(1) nextEp;
    Bit#(32) nextPc;
    KonataId k_id; // <- This is a unique identifier per instructions, for logging purposes
} E2W deriving (Eq, FShow, Bits);

(* synthesize *)
module mkpipelined(RVIfc);
    // Interface with memory and devices
    FIFO#(Mem) toImem <- mkBypassFIFO;
    FIFO#(Mem) fromImem <- mkBypassFIFO;
    FIFO#(Mem) toDmem <- mkBypassFIFO;
    FIFO#(Mem) fromDmem <- mkBypassFIFO;
    FIFO#(Mem) toMMIO <- mkBypassFIFO;
    FIFO#(Mem) fromMMIO <- mkBypassFIFO;

    // Registers and queues
    Vector#(32, Ehr#(2, Bit#(32))) rf <- replicateM(mkEhr(0));
    Vector#(32, Ehr#(3, Bit#(32))) scoreboard <- replicateM(mkEhr(0));
    Ehr#(2, Bit#(1)) epoch <- mkEhr(0);
    Ehr#(2, Bit#(32)) pcF <- mkEhr(32'h0000000);
    FIFO#(F2D) f2d <- mkFIFO;
    FIFO#(D2E) d2e <- mkFIFO;
    FIFO#(E2W) e2w <- mkFIFO;

    Ehr#(3, Bit#(32)) counter <- mkEhr(0);
    Bool debug = False;

	// Code to support Konata visualization
    String dumpFile = "output.log" ;
    let lfh <- mkReg(InvalidFile);
	Reg#(KonataId) fresh_id <- mkReg(0);
	Reg#(KonataId) commit_id <- mkReg(0);

	FIFO#(KonataId) retired <- mkFIFO;
	FIFO#(KonataId) squashed <- mkFIFO;

    
    Reg#(Bool) starting <- mkReg(True);
	rule do_tic_logging if (counter[1] < 100);
        if (starting) begin
            let f <- $fopen(dumpFile, "w") ;
            lfh <= f;
            $fwrite(f, "Kanata\t0004\nC=\t1\n");
            starting <= False;
        end
		konataTic(lfh);
        counter[1] <= counter[1] + 1;
	endrule
		
    rule fetch if (!starting);
        Bit#(32) pc_fetched = pcF[1];
        // You should put the pc that you fetch in pc_fetched
        // Below is the code to support Konata's visualization
		let iid <- fetch1Konata(lfh, fresh_id, 0);
        labelKonataLeft(lfh, iid, $format("PC %x", pc_fetched));
        // TODO implement fetch
        let req = Mem {byte_en : 0,
			   addr : pc_fetched,
			   data : 0};
        toImem.enq(req);
        let ppcF = pc_fetched + 4;
        pcF[1] <= ppcF;
        f2d.enq(F2D{pc:pc_fetched, ppc:ppcF, epoch:epoch[1], k_id:iid});
        counter[0] <= counter[0] - 1;
        // This will likely end with something like:
        // f2d.enq(F2D{ ..... k_id: iid});
        // iid is the unique identifier used by konata, that we will pass around everywhere for each instruction
    endrule

    rule decode if (!starting && scoreboard[getInstFields(fromImem.first().data).rs1][2] == 0 && scoreboard[getInstFields(fromImem.first().data).rs2][2] == 0);
        // TODO
        let resp = fromImem.first();
		fromImem.deq();
        let x = f2d.first();
        f2d.deq();

        let current_id = x.k_id;
        decodeKonata(lfh, current_id);
        labelKonataLeft(lfh, current_id, $format("PC %x", x.pc));

        let instr = resp.data;
        let decodedInst = decodeInst(instr);
        decodeKonata(lfh, current_id);
        // labelKonataLeft(lfh, current_id, $format("Instr bits: %x", decodedInst.inst));
        if (debug) $display("[Decode] ", fshow(decodedInst));
        let rs1_idx = getInstFields(instr).rs1;
        let rs2_idx = getInstFields(instr).rs2;
        let rs1 = (rs1_idx == 0 ? 0 : rf[rs1_idx][1]);
        let rs2 = (rs2_idx == 0 ? 0 : rf[rs2_idx][1]);
        // labelKonataLeft(lfh, current_id, $format(" Potential r1: %x, Potential r2: %x" , rs1, rs2));
        d2e.enq(D2E{pc:x.pc, ppc:x.ppc, epoch:x.epoch, rv1:rs1, rv2:rs2, dinst:decodedInst, k_id:current_id});
        
        if (decodedInst.valid_rd) begin
            let rd_idx = getInstFields(decodedInst.inst).rd;
            if (rd_idx != 0) begin
                labelKonataLeft(lfh, current_id, $format(" Scoreboard Set: %x %x", rd_idx, scoreboard[rd_idx][2]));
                scoreboard[rd_idx][2] <= scoreboard[rd_idx][2] + 1;
            end
        end
        // To add a decode event in Konata you will likely do something like:
        //  let from_fetch = f2d.first();
   	    //	decodeKonata(lfh, from_fetch.k_id);
        //  labelKonataLeft(lfh,from_fetch.k_id, $format("Any information you would like to put in the left pane in Konata, attached to the current instruction"));
    endrule

    rule execute if (!starting);
        // TODO
        let x = d2e.first();
        d2e.deq();

        let current_id = x.k_id;
        let pc = x.pc;
        let dInst = x.dinst;
        let rv1 = x.rv1;
        let rv2 = x.rv2;

        if (x.epoch == epoch[1]) begin
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
                    labelKonataLeft(lfh, current_id, $format(" MMIO ", fshow(req)));
                    mmio = True;
                end else begin 
                    labelKonataLeft(lfh, current_id, $format(" MEM ", fshow(req)));
                    toDmem.enq(req);
                end
            end
            else if (isControlInst(dInst)) begin
                    labelKonataLeft(lfh, current_id, $format(" Ctrl instr "));
                    data = pc + 4;
            end else begin 
                labelKonataLeft(lfh, current_id, $format(" Standard instr "));
            end
            let controlResult = execControl32(dInst.inst, rv1, rv2, imm, pc);
            let nextPc = controlResult.nextPC;
            // labelKonataLeft(lfh, current_id, $format(" ALU output: %x" , data));
            let mem_business = MemBusiness{isUnsigned : unpack(isUnsigned), size : size, offset : offset, mmio: mmio};

            // labelKonataLeft(lfh, current_id, $format("nextPc %x ", nextPc));
            // check if prediction is correct
            let nextEp = epoch[1];
            if (nextPc != x.ppc) begin
                nextEp = epoch[1] + 1;
            end 
            e2w.enq(E2W{mem_business:mem_business, data:data, dinst:dInst, k_id:current_id, nextPc:nextPc, nextEp:nextEp});
        end
        else begin
            squashed.enq(current_id);
            if (dInst.valid_rd) begin
                let rd_idx = getInstFields(dInst.inst).rd;
                if (rd_idx != 0) begin
                    scoreboard[rd_idx][1] <= scoreboard[rd_idx][1] - 1;
                    labelKonataLeft(lfh, current_id, $format(" Squashed: %x %x", rd_idx, scoreboard[rd_idx][1]));
                end
            end 
		end
        // Similarly, to register an execute event for an instruction:
    	//	executeKonata(lfh, k_id);
    	// where k_id is the unique konata identifier that has been passed around that came from the fetch stage


    	// Execute is also the place where we advise you to kill mispredicted instructions
    	// (instead of Decode + Execute like in the class)
    	// When you kill (or squash) an instruction, you should register an event for Konata:
    	
        // squashed.enq(current_inst.k_id);

        // This will allow Konata to display those instructions in grey
    endrule

    rule writeback if (!starting);
        // TODO
        let x = e2w.first();
        e2w.deq();

        let current_id = x.k_id;
        let data = x.data;
        let dInst = x.dinst;
        let mem_business = x.mem_business;

        writebackKonata(lfh, current_id);
        retired.enq(current_id);
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
            labelKonataLeft(lfh, current_id, $format(" Test 1"));
			if (debug) $display("[Writeback] Illegal Inst, Drop and fault: ", fshow(dInst));
			pcF[0] <= 0;	// Fault
            let rd_idx = fields.rd;
	    end
		else if (dInst.valid_rd) begin
            let rd_idx = fields.rd;
            if (rd_idx != 0) begin 
                rf[rd_idx][0] <= data; 
                labelKonataLeft(lfh, current_id, $format(" Scoreboard: %x %x", rd_idx, scoreboard[rd_idx][0]));
                scoreboard[rd_idx][0] <= scoreboard[rd_idx][0] - 1;
            end
            if (x.nextEp != epoch[0]) begin
                pcF[0] <= x.nextPc;
            end
            epoch[0] <= x.nextEp;
        end
        // Similarly, to register an execute event for an instruction:
	   	//	writebackKonata(lfh,k_id);


	   	// In writeback is also the moment where an instruction retires (there are no more stages)
	   	// Konata requires us to register the event as well using the following: 
		// retired.enq(k_id);
	endrule
		

	// ADMINISTRATION:

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
