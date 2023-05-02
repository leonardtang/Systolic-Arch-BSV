typedef Bit#(26) LineAddr;
typedef struct { Bit#(1) write; Bit#(4) byte_en; Bit#(32) addr; Bit#(32) data; } MainMemReq deriving (Eq, FShow, Bits, Bounded);
typedef Bit#(32) MainMemResp;

typedef Bit#(32) Word;
