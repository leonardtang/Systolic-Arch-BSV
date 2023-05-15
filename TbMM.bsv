import Vector::*;
import Randomizable::*;
import SystolicArray::*;

(* synthesize *)
module mkTbMM(Empty);
   Vector#(4, Vector#(4, Randomize#(Int#(10)))) randomizer1 <- replicateM(replicateM(mkGenericRandomizer));
   Vector#(4, Vector#(4, Randomize#(Int#(10)))) randomizer2 <- replicateM(replicateM(mkGenericRandomizer));

   Reg#(Bool) init <- mkReg(False);
   Reg#(Bool) start <- mkReg(True);
   Reg#(Bool) compute <- mkReg(False);

   Vector#(4, Vector#(4, Reg#(Int#(32)))) x1 <- replicateM(replicateM(mkReg(1)));
   Vector#(4, Vector#(4, Reg#(Int#(32)))) x2 <- replicateM(replicateM(mkReg(1)));
   Vector#(4, Vector#(4, Reg#(Int#(32)))) res <- replicateM(replicateM(mkReg(0)));

   SystolicArray arr <- mkSystolicArray;

   rule init_randomizer if (!init);
      for (Int#(32) i = 0; i < 4; i = i + 1) begin
         for (Int#(32) j = 0; j < 4; j = j + 1) begin
               randomizer1[i][j].cntrl.init;
         end
      end
      for (Int#(32) i = 0; i < 4; i = i + 1) begin
         for (Int#(32) j = 0; j < 4; j = j + 1) begin
               randomizer2[i][j].cntrl.init;
         end
      end
      init <= True;
      start <= False;
   endrule

   rule init_matrix if (!start);
      $display("Init");
      start <= True;
      for (Int#(32) i = 0; i < 4; i = i + 1) begin
         for (Int#(32) j = 0; j < 4; j = j + 1) begin
               Int#(10) tmp <- randomizer1[i][j].next;
               x1[i][j] <= zeroExtend(tmp);
         end
      end
      for (Int#(32) i = 0; i < 4; i = i + 1) begin
         for (Int#(32) j = 0; j < 4; j = j + 1) begin
               Int#(10) tmp <- randomizer2[i][j].next;
               x2[i][j] <= zeroExtend(tmp);
         end
      end

      compute <= True;

      Bit#(512) a = 0;
      Bit#(512) b = 0;
      Bit#(512) tmp = 0;

      for (Int#(32) i = 0; i < 4; i = i + 1) begin
         for (Int#(32) j = 0; j < 4; j = j + 1) begin
               tmp = {0, pack(x1[i][j])};
               a = a + (tmp << ((i * 4 + j) * 32));
               tmp = {0, pack(x2[i][j])};
               b = b + (tmp << ((i * 4 + j) * 32));
         end
      end

      arr.loadDataA(a);
      arr.loadDataB(b);
   endrule

   rule compute_matrix if (compute);
      $display("Compute");
      $display("X1");
      for (Int#(32) i = 0; i < 4; i = i + 1) begin
         for (Int#(32) j = 0; j < 4; j = j + 1) begin  
               $display("%d\t", x1[i][j]);
         end
      end
      $display("X2");
      for (Int#(32) i = 0; i < 4; i = i + 1) begin
         for (Int#(32) j = 0; j < 4; j = j + 1) begin  
               $display("%d\t", x2[i][j]);
         end
      end
      arr.init();
      compute <= False;
   endrule
endmodule 
