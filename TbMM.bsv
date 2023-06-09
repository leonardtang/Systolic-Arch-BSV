import Vector::*;
import Randomizable::*;
import SystolicArray::*;

(* synthesize *)
module mkTbMM(Empty);
   Vector#(4, Vector#(4, Randomize#(Int#(10)))) randomizer1 <- replicateM(replicateM(mkGenericRandomizer));
   Vector#(4, Vector#(4, Randomize#(Int#(10)))) randomizer2 <- replicateM(replicateM(mkGenericRandomizer));

   Reg#(Bool) init <- mkReg(False);
   Reg#(Bool) start <- mkReg(True);
   Reg#(Bool) load <- mkReg(False);
   Reg#(Bool) compute <- mkReg(False);

   Vector#(4, Vector#(4, Reg#(Int#(32)))) x1 <- replicateM(replicateM(mkReg(1)));
   Vector#(4, Vector#(4, Reg#(Int#(32)))) x2 <- replicateM(replicateM(mkReg(1)));
   Vector#(4, Vector#(4, Reg#(Int#(32)))) res <- replicateM(replicateM(mkReg(0)));

   SystolicArray arr <- mkSystolicArray;

   let out_file <- mkReg(InvalidFile);
   Reg#(Bool) file_valid <- mkReg(False);

   rule set_outfile(file_valid == False);
        $display("set_outfile");
        String file = "matrix.txt";
        File f <- $fopen(file);
        if (f == InvalidFile) begin
            $display("Invalid file %s", file);
            $finish(0);
        end

        f = f | stdout_mcd;
        file_valid <= True;
        out_file <= f;
    endrule

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

      load <= True;
   endrule

   rule load_matrix if (load);
      Bit#(512) a = 0;
      Bit#(512) b = 0;
      Bit#(512) tmp = 0;

      for (Int#(32) i = 0; i < 4; i = i + 1) begin
         for (Int#(32) j = 0; j < 4; j = j + 1) begin
               tmp = zeroExtend(pack(x1[i][j]));
               // $display("%x", tmp);
               a = a + (tmp << ((i * 4 + j) * 32));
               tmp = {0, pack(x2[i][j])};
               b = b + (tmp << ((i * 4 + j) * 32));
         end
      end

      arr.loadDataA(a);
      arr.loadDataB(b);

      load <= False;
      compute <= True;
   endrule

   rule compute_matrix if (compute);
      $display("Compute");
      $fwrite(out_file, "X1\n");
      for (Int#(32) i = 0; i < 4; i = i + 1) begin
         for (Int#(32) j = 0; j < 4; j = j + 1) begin  
               $fwrite(out_file, "%d\n", x1[i][j]);
         end
      end
      $fwrite(out_file, "X2\n");
      for (Int#(32) i = 0; i < 4; i = i + 1) begin
         for (Int#(32) j = 0; j < 4; j = j + 1) begin  
               $fwrite(out_file, "%d\n", x2[i][j]);
         end
      end
      arr.init();
      compute <= False;
   endrule
endmodule 
