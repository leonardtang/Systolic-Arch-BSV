typedef Bit#(26) LineAddr;
typedef struct { Bit#(1) write; LineAddr addr; Bit#(512) data; } MainMemReq deriving (Eq, FShow, Bits, Bounded);
typedef Bit#(512) MainMemResp;
typedef struct { Bit#(4) byte_en; Bit#(30) addr; Bit#(32) data; } CacheReq deriving (Eq, FShow, Bits, Bounded);
typedef Bit#(32) CacheResp;

typedef Bit#(32) Word;
