/*
 * Generated by Bluespec Compiler, version 2023.01-6-g034050db (build 034050db)
 * 
 * On Mon May 15 22:20:18 EDT 2023
 * 
 */

/* Generation options: */
#ifndef __mkCache_h__
#define __mkCache_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"


/* Class declaration for the mkCache module */
class MOD_mkCache : public Module {
 
 /* Clock handles */
 private:
  tClock __clk_handle_0;
 
 /* Clock gate handles */
 public:
  tUInt8 *clk_gate[0];
 
 /* Instantiation parameters */
 public:
 
 /* Module state */
 public:
  MOD_BRAM<tUInt32,tUWide,tUInt64> INST_cache_memory;
  MOD_Reg<tUInt8> INST_cache_serverAdapterA_cnt;
  MOD_Wire<tUInt8> INST_cache_serverAdapterA_cnt_1;
  MOD_Wire<tUInt8> INST_cache_serverAdapterA_cnt_2;
  MOD_Wire<tUInt8> INST_cache_serverAdapterA_cnt_3;
  MOD_Reg<tUInt8> INST_cache_serverAdapterA_outData_beforeDeq;
  MOD_Reg<tUInt8> INST_cache_serverAdapterA_outData_beforeEnq;
  MOD_Wire<tUInt8> INST_cache_serverAdapterA_outData_dequeueing;
  MOD_Wire<tUWide> INST_cache_serverAdapterA_outData_enqw;
  MOD_Fifo<tUWide> INST_cache_serverAdapterA_outData_ff;
  MOD_Reg<tUInt8> INST_cache_serverAdapterA_s1;
  MOD_Wire<tUInt8> INST_cache_serverAdapterA_s1_1;
  MOD_Wire<tUInt8> INST_cache_serverAdapterA_writeWithResp;
  MOD_Reg<tUInt8> INST_cache_serverAdapterB_cnt;
  MOD_Wire<tUInt8> INST_cache_serverAdapterB_cnt_1;
  MOD_Wire<tUInt8> INST_cache_serverAdapterB_cnt_2;
  MOD_Wire<tUInt8> INST_cache_serverAdapterB_cnt_3;
  MOD_Reg<tUInt8> INST_cache_serverAdapterB_outData_beforeDeq;
  MOD_Reg<tUInt8> INST_cache_serverAdapterB_outData_beforeEnq;
  MOD_Wire<tUInt8> INST_cache_serverAdapterB_outData_dequeueing;
  MOD_Wire<tUWide> INST_cache_serverAdapterB_outData_enqw;
  MOD_Fifo<tUWide> INST_cache_serverAdapterB_outData_ff;
  MOD_Reg<tUInt8> INST_cache_serverAdapterB_s1;
  MOD_Wire<tUInt8> INST_cache_serverAdapterB_s1_1;
  MOD_Wire<tUInt8> INST_cache_serverAdapterB_writeWithResp;
  MOD_Reg<tUInt8> INST_dirtyArray_0;
  MOD_Reg<tUInt8> INST_dirtyArray_1;
  MOD_Reg<tUInt8> INST_dirtyArray_10;
  MOD_Reg<tUInt8> INST_dirtyArray_100;
  MOD_Reg<tUInt8> INST_dirtyArray_101;
  MOD_Reg<tUInt8> INST_dirtyArray_102;
  MOD_Reg<tUInt8> INST_dirtyArray_103;
  MOD_Reg<tUInt8> INST_dirtyArray_104;
  MOD_Reg<tUInt8> INST_dirtyArray_105;
  MOD_Reg<tUInt8> INST_dirtyArray_106;
  MOD_Reg<tUInt8> INST_dirtyArray_107;
  MOD_Reg<tUInt8> INST_dirtyArray_108;
  MOD_Reg<tUInt8> INST_dirtyArray_109;
  MOD_Reg<tUInt8> INST_dirtyArray_11;
  MOD_Reg<tUInt8> INST_dirtyArray_110;
  MOD_Reg<tUInt8> INST_dirtyArray_111;
  MOD_Reg<tUInt8> INST_dirtyArray_112;
  MOD_Reg<tUInt8> INST_dirtyArray_113;
  MOD_Reg<tUInt8> INST_dirtyArray_114;
  MOD_Reg<tUInt8> INST_dirtyArray_115;
  MOD_Reg<tUInt8> INST_dirtyArray_116;
  MOD_Reg<tUInt8> INST_dirtyArray_117;
  MOD_Reg<tUInt8> INST_dirtyArray_118;
  MOD_Reg<tUInt8> INST_dirtyArray_119;
  MOD_Reg<tUInt8> INST_dirtyArray_12;
  MOD_Reg<tUInt8> INST_dirtyArray_120;
  MOD_Reg<tUInt8> INST_dirtyArray_121;
  MOD_Reg<tUInt8> INST_dirtyArray_122;
  MOD_Reg<tUInt8> INST_dirtyArray_123;
  MOD_Reg<tUInt8> INST_dirtyArray_124;
  MOD_Reg<tUInt8> INST_dirtyArray_125;
  MOD_Reg<tUInt8> INST_dirtyArray_126;
  MOD_Reg<tUInt8> INST_dirtyArray_127;
  MOD_Reg<tUInt8> INST_dirtyArray_13;
  MOD_Reg<tUInt8> INST_dirtyArray_14;
  MOD_Reg<tUInt8> INST_dirtyArray_15;
  MOD_Reg<tUInt8> INST_dirtyArray_16;
  MOD_Reg<tUInt8> INST_dirtyArray_17;
  MOD_Reg<tUInt8> INST_dirtyArray_18;
  MOD_Reg<tUInt8> INST_dirtyArray_19;
  MOD_Reg<tUInt8> INST_dirtyArray_2;
  MOD_Reg<tUInt8> INST_dirtyArray_20;
  MOD_Reg<tUInt8> INST_dirtyArray_21;
  MOD_Reg<tUInt8> INST_dirtyArray_22;
  MOD_Reg<tUInt8> INST_dirtyArray_23;
  MOD_Reg<tUInt8> INST_dirtyArray_24;
  MOD_Reg<tUInt8> INST_dirtyArray_25;
  MOD_Reg<tUInt8> INST_dirtyArray_26;
  MOD_Reg<tUInt8> INST_dirtyArray_27;
  MOD_Reg<tUInt8> INST_dirtyArray_28;
  MOD_Reg<tUInt8> INST_dirtyArray_29;
  MOD_Reg<tUInt8> INST_dirtyArray_3;
  MOD_Reg<tUInt8> INST_dirtyArray_30;
  MOD_Reg<tUInt8> INST_dirtyArray_31;
  MOD_Reg<tUInt8> INST_dirtyArray_32;
  MOD_Reg<tUInt8> INST_dirtyArray_33;
  MOD_Reg<tUInt8> INST_dirtyArray_34;
  MOD_Reg<tUInt8> INST_dirtyArray_35;
  MOD_Reg<tUInt8> INST_dirtyArray_36;
  MOD_Reg<tUInt8> INST_dirtyArray_37;
  MOD_Reg<tUInt8> INST_dirtyArray_38;
  MOD_Reg<tUInt8> INST_dirtyArray_39;
  MOD_Reg<tUInt8> INST_dirtyArray_4;
  MOD_Reg<tUInt8> INST_dirtyArray_40;
  MOD_Reg<tUInt8> INST_dirtyArray_41;
  MOD_Reg<tUInt8> INST_dirtyArray_42;
  MOD_Reg<tUInt8> INST_dirtyArray_43;
  MOD_Reg<tUInt8> INST_dirtyArray_44;
  MOD_Reg<tUInt8> INST_dirtyArray_45;
  MOD_Reg<tUInt8> INST_dirtyArray_46;
  MOD_Reg<tUInt8> INST_dirtyArray_47;
  MOD_Reg<tUInt8> INST_dirtyArray_48;
  MOD_Reg<tUInt8> INST_dirtyArray_49;
  MOD_Reg<tUInt8> INST_dirtyArray_5;
  MOD_Reg<tUInt8> INST_dirtyArray_50;
  MOD_Reg<tUInt8> INST_dirtyArray_51;
  MOD_Reg<tUInt8> INST_dirtyArray_52;
  MOD_Reg<tUInt8> INST_dirtyArray_53;
  MOD_Reg<tUInt8> INST_dirtyArray_54;
  MOD_Reg<tUInt8> INST_dirtyArray_55;
  MOD_Reg<tUInt8> INST_dirtyArray_56;
  MOD_Reg<tUInt8> INST_dirtyArray_57;
  MOD_Reg<tUInt8> INST_dirtyArray_58;
  MOD_Reg<tUInt8> INST_dirtyArray_59;
  MOD_Reg<tUInt8> INST_dirtyArray_6;
  MOD_Reg<tUInt8> INST_dirtyArray_60;
  MOD_Reg<tUInt8> INST_dirtyArray_61;
  MOD_Reg<tUInt8> INST_dirtyArray_62;
  MOD_Reg<tUInt8> INST_dirtyArray_63;
  MOD_Reg<tUInt8> INST_dirtyArray_64;
  MOD_Reg<tUInt8> INST_dirtyArray_65;
  MOD_Reg<tUInt8> INST_dirtyArray_66;
  MOD_Reg<tUInt8> INST_dirtyArray_67;
  MOD_Reg<tUInt8> INST_dirtyArray_68;
  MOD_Reg<tUInt8> INST_dirtyArray_69;
  MOD_Reg<tUInt8> INST_dirtyArray_7;
  MOD_Reg<tUInt8> INST_dirtyArray_70;
  MOD_Reg<tUInt8> INST_dirtyArray_71;
  MOD_Reg<tUInt8> INST_dirtyArray_72;
  MOD_Reg<tUInt8> INST_dirtyArray_73;
  MOD_Reg<tUInt8> INST_dirtyArray_74;
  MOD_Reg<tUInt8> INST_dirtyArray_75;
  MOD_Reg<tUInt8> INST_dirtyArray_76;
  MOD_Reg<tUInt8> INST_dirtyArray_77;
  MOD_Reg<tUInt8> INST_dirtyArray_78;
  MOD_Reg<tUInt8> INST_dirtyArray_79;
  MOD_Reg<tUInt8> INST_dirtyArray_8;
  MOD_Reg<tUInt8> INST_dirtyArray_80;
  MOD_Reg<tUInt8> INST_dirtyArray_81;
  MOD_Reg<tUInt8> INST_dirtyArray_82;
  MOD_Reg<tUInt8> INST_dirtyArray_83;
  MOD_Reg<tUInt8> INST_dirtyArray_84;
  MOD_Reg<tUInt8> INST_dirtyArray_85;
  MOD_Reg<tUInt8> INST_dirtyArray_86;
  MOD_Reg<tUInt8> INST_dirtyArray_87;
  MOD_Reg<tUInt8> INST_dirtyArray_88;
  MOD_Reg<tUInt8> INST_dirtyArray_89;
  MOD_Reg<tUInt8> INST_dirtyArray_9;
  MOD_Reg<tUInt8> INST_dirtyArray_90;
  MOD_Reg<tUInt8> INST_dirtyArray_91;
  MOD_Reg<tUInt8> INST_dirtyArray_92;
  MOD_Reg<tUInt8> INST_dirtyArray_93;
  MOD_Reg<tUInt8> INST_dirtyArray_94;
  MOD_Reg<tUInt8> INST_dirtyArray_95;
  MOD_Reg<tUInt8> INST_dirtyArray_96;
  MOD_Reg<tUInt8> INST_dirtyArray_97;
  MOD_Reg<tUInt8> INST_dirtyArray_98;
  MOD_Reg<tUInt8> INST_dirtyArray_99;
  MOD_CReg<tUWide> INST_hitLineQ_rv;
  MOD_CReg<tUInt64> INST_hitQ_rv;
  MOD_Reg<tUWide> INST_hitReq;
  MOD_Wire<tUInt8> INST_lockL1_port_0;
  MOD_Wire<tUInt8> INST_lockL1_port_1;
  MOD_Reg<tUInt8> INST_lockL1_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_lockL1_readBeforeLaterWrites_1;
  MOD_Reg<tUInt8> INST_lockL1_register;
  MOD_Fifo<tUWide> INST_memReqQ;
  MOD_Fifo<tUWide> INST_memRespQ;
  MOD_Reg<tUWide> INST_missReq;
  MOD_Reg<tUInt8> INST_mshr;
  MOD_Fifo<tUWide> INST_stb;
  MOD_Reg<tUInt32> INST_stbBypass;
  MOD_Reg<tUInt32> INST_tagArray_0;
  MOD_Reg<tUInt32> INST_tagArray_1;
  MOD_Reg<tUInt32> INST_tagArray_10;
  MOD_Reg<tUInt32> INST_tagArray_100;
  MOD_Reg<tUInt32> INST_tagArray_101;
  MOD_Reg<tUInt32> INST_tagArray_102;
  MOD_Reg<tUInt32> INST_tagArray_103;
  MOD_Reg<tUInt32> INST_tagArray_104;
  MOD_Reg<tUInt32> INST_tagArray_105;
  MOD_Reg<tUInt32> INST_tagArray_106;
  MOD_Reg<tUInt32> INST_tagArray_107;
  MOD_Reg<tUInt32> INST_tagArray_108;
  MOD_Reg<tUInt32> INST_tagArray_109;
  MOD_Reg<tUInt32> INST_tagArray_11;
  MOD_Reg<tUInt32> INST_tagArray_110;
  MOD_Reg<tUInt32> INST_tagArray_111;
  MOD_Reg<tUInt32> INST_tagArray_112;
  MOD_Reg<tUInt32> INST_tagArray_113;
  MOD_Reg<tUInt32> INST_tagArray_114;
  MOD_Reg<tUInt32> INST_tagArray_115;
  MOD_Reg<tUInt32> INST_tagArray_116;
  MOD_Reg<tUInt32> INST_tagArray_117;
  MOD_Reg<tUInt32> INST_tagArray_118;
  MOD_Reg<tUInt32> INST_tagArray_119;
  MOD_Reg<tUInt32> INST_tagArray_12;
  MOD_Reg<tUInt32> INST_tagArray_120;
  MOD_Reg<tUInt32> INST_tagArray_121;
  MOD_Reg<tUInt32> INST_tagArray_122;
  MOD_Reg<tUInt32> INST_tagArray_123;
  MOD_Reg<tUInt32> INST_tagArray_124;
  MOD_Reg<tUInt32> INST_tagArray_125;
  MOD_Reg<tUInt32> INST_tagArray_126;
  MOD_Reg<tUInt32> INST_tagArray_127;
  MOD_Reg<tUInt32> INST_tagArray_13;
  MOD_Reg<tUInt32> INST_tagArray_14;
  MOD_Reg<tUInt32> INST_tagArray_15;
  MOD_Reg<tUInt32> INST_tagArray_16;
  MOD_Reg<tUInt32> INST_tagArray_17;
  MOD_Reg<tUInt32> INST_tagArray_18;
  MOD_Reg<tUInt32> INST_tagArray_19;
  MOD_Reg<tUInt32> INST_tagArray_2;
  MOD_Reg<tUInt32> INST_tagArray_20;
  MOD_Reg<tUInt32> INST_tagArray_21;
  MOD_Reg<tUInt32> INST_tagArray_22;
  MOD_Reg<tUInt32> INST_tagArray_23;
  MOD_Reg<tUInt32> INST_tagArray_24;
  MOD_Reg<tUInt32> INST_tagArray_25;
  MOD_Reg<tUInt32> INST_tagArray_26;
  MOD_Reg<tUInt32> INST_tagArray_27;
  MOD_Reg<tUInt32> INST_tagArray_28;
  MOD_Reg<tUInt32> INST_tagArray_29;
  MOD_Reg<tUInt32> INST_tagArray_3;
  MOD_Reg<tUInt32> INST_tagArray_30;
  MOD_Reg<tUInt32> INST_tagArray_31;
  MOD_Reg<tUInt32> INST_tagArray_32;
  MOD_Reg<tUInt32> INST_tagArray_33;
  MOD_Reg<tUInt32> INST_tagArray_34;
  MOD_Reg<tUInt32> INST_tagArray_35;
  MOD_Reg<tUInt32> INST_tagArray_36;
  MOD_Reg<tUInt32> INST_tagArray_37;
  MOD_Reg<tUInt32> INST_tagArray_38;
  MOD_Reg<tUInt32> INST_tagArray_39;
  MOD_Reg<tUInt32> INST_tagArray_4;
  MOD_Reg<tUInt32> INST_tagArray_40;
  MOD_Reg<tUInt32> INST_tagArray_41;
  MOD_Reg<tUInt32> INST_tagArray_42;
  MOD_Reg<tUInt32> INST_tagArray_43;
  MOD_Reg<tUInt32> INST_tagArray_44;
  MOD_Reg<tUInt32> INST_tagArray_45;
  MOD_Reg<tUInt32> INST_tagArray_46;
  MOD_Reg<tUInt32> INST_tagArray_47;
  MOD_Reg<tUInt32> INST_tagArray_48;
  MOD_Reg<tUInt32> INST_tagArray_49;
  MOD_Reg<tUInt32> INST_tagArray_5;
  MOD_Reg<tUInt32> INST_tagArray_50;
  MOD_Reg<tUInt32> INST_tagArray_51;
  MOD_Reg<tUInt32> INST_tagArray_52;
  MOD_Reg<tUInt32> INST_tagArray_53;
  MOD_Reg<tUInt32> INST_tagArray_54;
  MOD_Reg<tUInt32> INST_tagArray_55;
  MOD_Reg<tUInt32> INST_tagArray_56;
  MOD_Reg<tUInt32> INST_tagArray_57;
  MOD_Reg<tUInt32> INST_tagArray_58;
  MOD_Reg<tUInt32> INST_tagArray_59;
  MOD_Reg<tUInt32> INST_tagArray_6;
  MOD_Reg<tUInt32> INST_tagArray_60;
  MOD_Reg<tUInt32> INST_tagArray_61;
  MOD_Reg<tUInt32> INST_tagArray_62;
  MOD_Reg<tUInt32> INST_tagArray_63;
  MOD_Reg<tUInt32> INST_tagArray_64;
  MOD_Reg<tUInt32> INST_tagArray_65;
  MOD_Reg<tUInt32> INST_tagArray_66;
  MOD_Reg<tUInt32> INST_tagArray_67;
  MOD_Reg<tUInt32> INST_tagArray_68;
  MOD_Reg<tUInt32> INST_tagArray_69;
  MOD_Reg<tUInt32> INST_tagArray_7;
  MOD_Reg<tUInt32> INST_tagArray_70;
  MOD_Reg<tUInt32> INST_tagArray_71;
  MOD_Reg<tUInt32> INST_tagArray_72;
  MOD_Reg<tUInt32> INST_tagArray_73;
  MOD_Reg<tUInt32> INST_tagArray_74;
  MOD_Reg<tUInt32> INST_tagArray_75;
  MOD_Reg<tUInt32> INST_tagArray_76;
  MOD_Reg<tUInt32> INST_tagArray_77;
  MOD_Reg<tUInt32> INST_tagArray_78;
  MOD_Reg<tUInt32> INST_tagArray_79;
  MOD_Reg<tUInt32> INST_tagArray_8;
  MOD_Reg<tUInt32> INST_tagArray_80;
  MOD_Reg<tUInt32> INST_tagArray_81;
  MOD_Reg<tUInt32> INST_tagArray_82;
  MOD_Reg<tUInt32> INST_tagArray_83;
  MOD_Reg<tUInt32> INST_tagArray_84;
  MOD_Reg<tUInt32> INST_tagArray_85;
  MOD_Reg<tUInt32> INST_tagArray_86;
  MOD_Reg<tUInt32> INST_tagArray_87;
  MOD_Reg<tUInt32> INST_tagArray_88;
  MOD_Reg<tUInt32> INST_tagArray_89;
  MOD_Reg<tUInt32> INST_tagArray_9;
  MOD_Reg<tUInt32> INST_tagArray_90;
  MOD_Reg<tUInt32> INST_tagArray_91;
  MOD_Reg<tUInt32> INST_tagArray_92;
  MOD_Reg<tUInt32> INST_tagArray_93;
  MOD_Reg<tUInt32> INST_tagArray_94;
  MOD_Reg<tUInt32> INST_tagArray_95;
  MOD_Reg<tUInt32> INST_tagArray_96;
  MOD_Reg<tUInt32> INST_tagArray_97;
  MOD_Reg<tUInt32> INST_tagArray_98;
  MOD_Reg<tUInt32> INST_tagArray_99;
 
 /* Constructor */
 public:
  MOD_mkCache(tSimStateHdl simHdl, char const *name, Module *parent);
 
 /* Symbol init methods */
 private:
  void init_symbols_0();
 
 /* Reset signal definitions */
 private:
  tUInt8 PORT_RST_N;
 
 /* Port definitions */
 public:
  tUInt8 PORT_EN_putFromMem;
  tUInt8 PORT_EN_getToMem;
  tUInt8 PORT_EN_getCacheLine;
  tUInt8 PORT_EN_putCacheLine;
  tUInt8 PORT_EN_getToProc;
  tUInt8 PORT_EN_putFromProc;
  tUWide PORT_putFromMem_e;
  tUWide PORT_putCacheLine_e;
  tUWide PORT_putFromProc_e;
  tUWide PORT_getToMem;
  tUWide PORT_getCacheLine;
 
 /* Publicly accessible definitions */
 public:
  tUInt8 DEF_WILL_FIRE_putFromMem;
  tUInt8 DEF_WILL_FIRE_getToMem;
  tUInt8 DEF_WILL_FIRE_getCacheLine;
  tUInt8 DEF_WILL_FIRE_putCacheLine;
  tUInt8 DEF_WILL_FIRE_getToProc;
  tUInt8 DEF_WILL_FIRE_putFromProc;
  tUInt8 DEF_CAN_FIRE_putCacheLine;
  tUInt8 DEF_mshr_78_EQ_0___d868;
  tUInt8 DEF_CAN_FIRE_putFromProc;
  tUInt8 DEF_stb_notEmpty____d1174;
  tUInt8 DEF_cache_serverAdapterA_cnt_6_SLT_3___d393;
  tUInt8 DEF_stb_i_notEmpty____d854;
  tUInt8 DEF_mshr__h19808;
  tUWide DEF_hitLineQ_rv_port1__read____d1502;
  tUWide DEF_hitLineQ_rv_port0__read____d1160;
  tUWide DEF_stb_first____d855;
  tUWide DEF_missReq___d236;
  tUInt64 DEF_hitQ_rv_port1__read____d1494;
  tUInt32 DEF__read__h10240;
  tUInt32 DEF__read__h10209;
  tUInt32 DEF__read__h10178;
  tUInt32 DEF__read__h10147;
  tUInt32 DEF__read__h10116;
  tUInt32 DEF__read__h10085;
  tUInt32 DEF__read__h10054;
  tUInt32 DEF__read__h10023;
  tUInt32 DEF__read__h9992;
  tUInt32 DEF__read__h9961;
  tUInt32 DEF__read__h9930;
  tUInt32 DEF__read__h9899;
  tUInt32 DEF__read__h9868;
  tUInt32 DEF__read__h9837;
  tUInt32 DEF__read__h9806;
  tUInt32 DEF__read__h9775;
  tUInt32 DEF__read__h9744;
  tUInt32 DEF__read__h9713;
  tUInt32 DEF__read__h9682;
  tUInt32 DEF__read__h9651;
  tUInt32 DEF__read__h9620;
  tUInt32 DEF__read__h9589;
  tUInt32 DEF__read__h9558;
  tUInt32 DEF__read__h9527;
  tUInt32 DEF__read__h9496;
  tUInt32 DEF__read__h9465;
  tUInt32 DEF__read__h9434;
  tUInt32 DEF__read__h9403;
  tUInt32 DEF__read__h9372;
  tUInt32 DEF__read__h9341;
  tUInt32 DEF__read__h9310;
  tUInt32 DEF__read__h9279;
  tUInt32 DEF__read__h9248;
  tUInt32 DEF__read__h9217;
  tUInt32 DEF__read__h9186;
  tUInt32 DEF__read__h9155;
  tUInt32 DEF__read__h9124;
  tUInt32 DEF__read__h9093;
  tUInt32 DEF__read__h9062;
  tUInt32 DEF__read__h9031;
  tUInt32 DEF__read__h9000;
  tUInt32 DEF__read__h8969;
  tUInt32 DEF__read__h8938;
  tUInt32 DEF__read__h8907;
  tUInt32 DEF__read__h8876;
  tUInt32 DEF__read__h8845;
  tUInt32 DEF__read__h8814;
  tUInt32 DEF__read__h8783;
  tUInt32 DEF__read__h8752;
  tUInt32 DEF__read__h8721;
  tUInt32 DEF__read__h8690;
  tUInt32 DEF__read__h8659;
  tUInt32 DEF__read__h8628;
  tUInt32 DEF__read__h8597;
  tUInt32 DEF__read__h8566;
  tUInt32 DEF__read__h8535;
  tUInt32 DEF__read__h8504;
  tUInt32 DEF__read__h8473;
  tUInt32 DEF__read__h8442;
  tUInt32 DEF__read__h8411;
  tUInt32 DEF__read__h8380;
  tUInt32 DEF__read__h8349;
  tUInt32 DEF__read__h8318;
  tUInt32 DEF__read__h8287;
  tUInt32 DEF__read__h8256;
  tUInt32 DEF__read__h8225;
  tUInt32 DEF__read__h8194;
  tUInt32 DEF__read__h8163;
  tUInt32 DEF__read__h8132;
  tUInt32 DEF__read__h8101;
  tUInt32 DEF__read__h8070;
  tUInt32 DEF__read__h8039;
  tUInt32 DEF__read__h8008;
  tUInt32 DEF__read__h7977;
  tUInt32 DEF__read__h7946;
  tUInt32 DEF__read__h7915;
  tUInt32 DEF__read__h7884;
  tUInt32 DEF__read__h7853;
  tUInt32 DEF__read__h7822;
  tUInt32 DEF__read__h7791;
  tUInt32 DEF__read__h7760;
  tUInt32 DEF__read__h7729;
  tUInt32 DEF__read__h7698;
  tUInt32 DEF__read__h7667;
  tUInt32 DEF__read__h7636;
  tUInt32 DEF__read__h7605;
  tUInt32 DEF__read__h7574;
  tUInt32 DEF__read__h7543;
  tUInt32 DEF__read__h7512;
  tUInt32 DEF__read__h7481;
  tUInt32 DEF__read__h7450;
  tUInt32 DEF__read__h7419;
  tUInt32 DEF__read__h7388;
  tUInt32 DEF__read__h7357;
  tUInt32 DEF__read__h7326;
  tUInt32 DEF__read__h7295;
  tUInt32 DEF__read__h7264;
  tUInt32 DEF__read__h7233;
  tUInt32 DEF__read__h7202;
  tUInt32 DEF__read__h7171;
  tUInt32 DEF__read__h7140;
  tUInt32 DEF__read__h7109;
  tUInt32 DEF__read__h7078;
  tUInt32 DEF__read__h7047;
  tUInt32 DEF__read__h7016;
  tUInt32 DEF__read__h6985;
  tUInt32 DEF__read__h6954;
  tUInt32 DEF__read__h6923;
  tUInt32 DEF__read__h6892;
  tUInt32 DEF__read__h6861;
  tUInt32 DEF__read__h6830;
  tUInt32 DEF__read__h6799;
  tUInt32 DEF__read__h6768;
  tUInt32 DEF__read__h6737;
  tUInt32 DEF__read__h6706;
  tUInt32 DEF__read__h6675;
  tUInt32 DEF__read__h6644;
  tUInt32 DEF__read__h6613;
  tUInt32 DEF__read__h6582;
  tUInt32 DEF__read__h6551;
  tUInt32 DEF__read__h6520;
  tUInt32 DEF__read__h6489;
  tUInt32 DEF__read__h6458;
  tUInt32 DEF__read__h6427;
  tUInt32 DEF__read__h6396;
  tUInt32 DEF__read__h6365;
  tUInt32 DEF__read__h6334;
  tUInt32 DEF__read__h6303;
  tUInt8 DEF_b__h2260;
  tUInt8 DEF_b__h915;
  tUInt8 DEF_cache_serverAdapterB_s1___d84;
  tUInt8 DEF_cache_serverAdapterA_s1___d35;
  tUInt8 DEF_lockL1_register__h37359;
  tUInt8 DEF_lockL1_port_0_whas____d102;
  tUInt8 DEF_lockL1_port_0_wget____d103;
  tUInt8 DEF_dirtyArray_127__h28006;
  tUInt8 DEF_dirtyArray_126__h28004;
  tUInt8 DEF_dirtyArray_125__h28002;
  tUInt8 DEF_dirtyArray_124__h28000;
  tUInt8 DEF_dirtyArray_123__h27998;
  tUInt8 DEF_dirtyArray_122__h27996;
  tUInt8 DEF_dirtyArray_121__h27994;
  tUInt8 DEF_dirtyArray_120__h27992;
  tUInt8 DEF_dirtyArray_119__h27990;
  tUInt8 DEF_dirtyArray_118__h27988;
  tUInt8 DEF_dirtyArray_117__h27986;
  tUInt8 DEF_dirtyArray_116__h27984;
  tUInt8 DEF_dirtyArray_115__h27982;
  tUInt8 DEF_dirtyArray_114__h27980;
  tUInt8 DEF_dirtyArray_113__h27978;
  tUInt8 DEF_dirtyArray_112__h27976;
  tUInt8 DEF_dirtyArray_111__h27974;
  tUInt8 DEF_dirtyArray_110__h27972;
  tUInt8 DEF_dirtyArray_109__h27970;
  tUInt8 DEF_dirtyArray_108__h27968;
  tUInt8 DEF_dirtyArray_107__h27966;
  tUInt8 DEF_dirtyArray_106__h27964;
  tUInt8 DEF_dirtyArray_105__h27962;
  tUInt8 DEF_dirtyArray_104__h27960;
  tUInt8 DEF_dirtyArray_103__h27958;
  tUInt8 DEF_dirtyArray_102__h27956;
  tUInt8 DEF_dirtyArray_101__h27954;
  tUInt8 DEF_dirtyArray_100__h27952;
  tUInt8 DEF_dirtyArray_99__h27950;
  tUInt8 DEF_dirtyArray_98__h27948;
  tUInt8 DEF_dirtyArray_97__h27946;
  tUInt8 DEF_dirtyArray_96__h27944;
  tUInt8 DEF_dirtyArray_95__h27942;
  tUInt8 DEF_dirtyArray_94__h27940;
  tUInt8 DEF_dirtyArray_93__h27938;
  tUInt8 DEF_dirtyArray_92__h27936;
  tUInt8 DEF_dirtyArray_91__h27934;
  tUInt8 DEF_dirtyArray_90__h27932;
  tUInt8 DEF_dirtyArray_89__h27930;
  tUInt8 DEF_dirtyArray_88__h27928;
  tUInt8 DEF_dirtyArray_87__h27926;
  tUInt8 DEF_dirtyArray_86__h27924;
  tUInt8 DEF_dirtyArray_85__h27922;
  tUInt8 DEF_dirtyArray_84__h27920;
  tUInt8 DEF_dirtyArray_83__h27918;
  tUInt8 DEF_dirtyArray_82__h27916;
  tUInt8 DEF_dirtyArray_81__h27914;
  tUInt8 DEF_dirtyArray_80__h27912;
  tUInt8 DEF_dirtyArray_79__h27910;
  tUInt8 DEF_dirtyArray_78__h27908;
  tUInt8 DEF_dirtyArray_77__h27906;
  tUInt8 DEF_dirtyArray_76__h27904;
  tUInt8 DEF_dirtyArray_75__h27902;
  tUInt8 DEF_dirtyArray_74__h27900;
  tUInt8 DEF_dirtyArray_73__h27898;
  tUInt8 DEF_dirtyArray_72__h27896;
  tUInt8 DEF_dirtyArray_71__h27894;
  tUInt8 DEF_dirtyArray_70__h27892;
  tUInt8 DEF_dirtyArray_69__h27890;
  tUInt8 DEF_dirtyArray_68__h27888;
  tUInt8 DEF_dirtyArray_67__h27886;
  tUInt8 DEF_dirtyArray_66__h27884;
  tUInt8 DEF_dirtyArray_65__h27882;
  tUInt8 DEF_dirtyArray_64__h27880;
  tUInt8 DEF_dirtyArray_63__h27878;
  tUInt8 DEF_dirtyArray_62__h27876;
  tUInt8 DEF_dirtyArray_61__h27874;
  tUInt8 DEF_dirtyArray_60__h27872;
  tUInt8 DEF_dirtyArray_59__h27870;
  tUInt8 DEF_dirtyArray_58__h27868;
  tUInt8 DEF_dirtyArray_57__h27866;
  tUInt8 DEF_dirtyArray_56__h27864;
  tUInt8 DEF_dirtyArray_55__h27862;
  tUInt8 DEF_dirtyArray_54__h27860;
  tUInt8 DEF_dirtyArray_53__h27858;
  tUInt8 DEF_dirtyArray_52__h27856;
  tUInt8 DEF_dirtyArray_51__h27854;
  tUInt8 DEF_dirtyArray_50__h27852;
  tUInt8 DEF_dirtyArray_49__h27850;
  tUInt8 DEF_dirtyArray_48__h27848;
  tUInt8 DEF_dirtyArray_47__h27846;
  tUInt8 DEF_dirtyArray_46__h27844;
  tUInt8 DEF_dirtyArray_45__h27842;
  tUInt8 DEF_dirtyArray_44__h27840;
  tUInt8 DEF_dirtyArray_43__h27838;
  tUInt8 DEF_dirtyArray_42__h27836;
  tUInt8 DEF_dirtyArray_41__h27834;
  tUInt8 DEF_dirtyArray_40__h27832;
  tUInt8 DEF_dirtyArray_39__h27830;
  tUInt8 DEF_dirtyArray_38__h27828;
  tUInt8 DEF_dirtyArray_37__h27826;
  tUInt8 DEF_dirtyArray_36__h27824;
  tUInt8 DEF_dirtyArray_35__h27822;
  tUInt8 DEF_dirtyArray_34__h27820;
  tUInt8 DEF_dirtyArray_33__h27818;
  tUInt8 DEF_dirtyArray_32__h27816;
  tUInt8 DEF_dirtyArray_31__h27814;
  tUInt8 DEF_dirtyArray_30__h27812;
  tUInt8 DEF_dirtyArray_29__h27810;
  tUInt8 DEF_dirtyArray_28__h27808;
  tUInt8 DEF_dirtyArray_27__h27806;
  tUInt8 DEF_dirtyArray_26__h27804;
  tUInt8 DEF_dirtyArray_25__h27802;
  tUInt8 DEF_dirtyArray_24__h27800;
  tUInt8 DEF_dirtyArray_23__h27798;
  tUInt8 DEF_dirtyArray_22__h27796;
  tUInt8 DEF_dirtyArray_21__h27794;
  tUInt8 DEF_dirtyArray_20__h27792;
  tUInt8 DEF_dirtyArray_19__h27790;
  tUInt8 DEF_dirtyArray_18__h27788;
  tUInt8 DEF_dirtyArray_17__h27786;
  tUInt8 DEF_dirtyArray_16__h27784;
  tUInt8 DEF_dirtyArray_15__h27782;
  tUInt8 DEF_dirtyArray_14__h27780;
  tUInt8 DEF_dirtyArray_13__h27778;
  tUInt8 DEF_dirtyArray_12__h27776;
  tUInt8 DEF_dirtyArray_11__h27774;
  tUInt8 DEF_dirtyArray_10__h27772;
  tUInt8 DEF_dirtyArray_9__h27770;
  tUInt8 DEF_dirtyArray_8__h27768;
  tUInt8 DEF_dirtyArray_7__h27766;
  tUInt8 DEF_dirtyArray_6__h27764;
  tUInt8 DEF_dirtyArray_5__h27762;
  tUInt8 DEF_dirtyArray_4__h27760;
  tUInt8 DEF_dirtyArray_3__h27758;
  tUInt8 DEF_dirtyArray_2__h27756;
  tUInt8 DEF_dirtyArray_1__h27754;
  tUInt8 DEF_dirtyArray_0__h27752;
  tUInt8 DEF_cache_serverAdapterB_cnt_3_whas____d63;
  tUInt8 DEF_cache_serverAdapterB_cnt_2_whas____d61;
  tUInt8 DEF_cache_serverAdapterB_cnt_1_whas____d60;
  tUInt8 DEF_cache_serverAdapterB_outData_ff_i_notEmpty____d54;
  tUInt8 DEF_cache_serverAdapterA_cnt_3_whas____d13;
  tUInt8 DEF_cache_serverAdapterA_cnt_2_whas____d11;
  tUInt8 DEF_cache_serverAdapterA_cnt_1_whas____d10;
  tUInt8 DEF_cache_serverAdapterA_outData_ff_i_notEmpty____d4;
  tUInt32 DEF_x__h37393;
  tUInt8 DEF__read_byte_en__h19877;
  tUInt8 DEF_cache_serverAdapterB_s1_4_BIT_0___d85;
  tUInt8 DEF_cache_serverAdapterA_s1_5_BIT_0___d36;
  tUInt32 DEF_x__h40153;
  tUInt32 DEF__0_CONCAT_stb_first__55_BITS_42_TO_36_57___d858;
  tUInt32 DEF_tag__h19844;
  tUInt32 DEF_x__h19891;
  tUInt8 DEF_SEL_ARR_dirtyArray_0_41_dirtyArray_1_42_dirtyA_ETC___d862;
  tUInt8 DEF_SEL_ARR_dirtyArray_0_41_dirtyArray_1_42_dirtyA_ETC___d370;
  tUInt8 DEF_missReq_36_BITS_65_TO_62_94_EQ_0___d395;
  tUInt8 DEF_stb_first__55_BITS_61_TO_36_56_EQ_SEL_ARR_tagA_ETC___d860;
  tUInt8 DEF_SEL_ARR_tagArray_0_07_tagArray_1_08_tagArray_2_ETC___d861;
  tUInt8 DEF_SEL_ARR_tagArray_0_07_tagArray_1_08_tagArray_2_ETC___d240;
  tUInt8 DEF_NOT_stb_notEmpty__174___d1196;
  tUInt8 DEF_NOT_missReq_36_BITS_65_TO_62_94_EQ_0_95___d396;
 
 /* Local definitions */
 private:
  tUWide DEF_x_wget__h1769;
  tUWide DEF_x_first__h1654;
  tUWide DEF_x_wget__h421;
  tUWide DEF_x_first__h306;
  tUWide DEF_v__h2830;
  tUWide DEF_v__h1490;
  tUWide DEF_x3__h36918;
  tUWide DEF_hitReq___d843;
  tUWide DEF_x__h45871;
  tUInt32 DEF_x_first_data__h37403;
  tUInt32 DEF__read_data__h19879;
  tUInt32 DEF_addr__h28294;
  tUInt8 DEF_x_first_byte_en__h37401;
  tUWide DEF_v__h28026;
  tUWide DEF_IF_stb_notEmpty__174_AND_stb_first__55_BITS_61_ETC___d1210;
  tUWide DEF_IF_putFromProc_e_BITS_61_TO_36_169_EQ_SEL_ARR__ETC___d1209;
  tUWide DEF_x3__h45150;
  tUWide DEF_IF_cache_serverAdapterB_outData_ff_i_notEmpty__ETC___d1167;
  tUWide DEF_x__h1867;
  tUWide DEF_IF_stb_first__55_BITS_61_TO_36_56_EQ_SEL_ARR_t_ETC___d889;
  tUWide DEF_new_data__h40516;
  tUWide DEF_new_data__h36289;
  tUWide DEF_new_data__h36192;
  tUWide DEF_y_avValue_snd__h36280;
  tUWide DEF_new_data__h35992;
  tUWide DEF_y_avValue_snd__h36183;
  tUWide DEF_IF_missReq_36_BITS_65_TO_62_94_EQ_0_95_THEN_me_ETC___d565;
  tUWide DEF_x__h519;
  tUWide DEF_IF_stb_notEmpty__174_AND_stb_first__55_BITS_61_ETC___d1227;
  tUInt8 DEF__0_CONCAT_DONTCARE___d26;
  tUInt8 DEF_IF_lockL1_port_0_whas__02_THEN_lockL1_port_0_w_ETC___d105;
  tUInt8 DEF_lockL1_readBeforeLaterWrites_0_read__172_OR_lo_ETC___d1173;
  tUWide DEF_memRespQ_first__50_SL_512_MINUS_0_CONCAT_missR_ETC___d557;
  tUWide DEF_x__h36114;
  tUWide DEF_x__h36243;
  tUWide DEF_new_data__h40514;
  tUWide DEF_memRespQ_first__50_SRL_0_CONCAT_missReq_36_BIT_ETC___d562;
  tUWide DEF_new_data__h35959;
  tUInt64 DEF_byte_en__h35958;
  tUWide DEF__1_CONCAT_SEL_ARR_tagArray_0_07_tagArray_1_08_t_ETC___d385;
  tUWide DEF__0_CONCAT_missReq_36_BITS_61_TO_0_90_CONCAT_DON_ETC___d391;
  tUWide DEF__1_CONCAT_IF_cache_serverAdapterB_outData_ff_i__ETC___d1168;
  tUWide DEF__0_CONCAT_DONTCARE___d1501;
  tUWide DEF_getToMem__avValue1;
 
 /* Rules */
 public:
  void RL_cache_serverAdapterA_outData_enqueue();
  void RL_cache_serverAdapterA_outData_dequeue();
  void RL_cache_serverAdapterA_cnt_finalAdd();
  void RL_cache_serverAdapterA_s1__dreg_update();
  void RL_cache_serverAdapterA_stageReadResponseAlways();
  void RL_cache_serverAdapterA_moveToOutFIFO();
  void RL_cache_serverAdapterA_overRun();
  void RL_cache_serverAdapterB_outData_enqueue();
  void RL_cache_serverAdapterB_outData_dequeue();
  void RL_cache_serverAdapterB_cnt_finalAdd();
  void RL_cache_serverAdapterB_s1__dreg_update();
  void RL_cache_serverAdapterB_stageReadResponseAlways();
  void RL_cache_serverAdapterB_moveToOutFIFO();
  void RL_cache_serverAdapterB_overRun();
  void RL_lockL1_canonicalize();
  void RL_startMiss();
  void RL_sendFillReq();
  void RL_waitFillResp();
  void RL_read();
  void RL_mvStbToL1();
  void RL_clearL1Lock();
  void RL_stbRead();
  void RL_readLine();
 
 /* Methods */
 public:
  void METH_putFromProc(tUWide ARG_putFromProc_e);
  tUInt8 METH_RDY_putFromProc();
  tUInt32 METH_getToProc();
  tUInt8 METH_RDY_getToProc();
  void METH_putCacheLine(tUWide ARG_putCacheLine_e);
  tUInt8 METH_RDY_putCacheLine();
  tUWide METH_getCacheLine();
  tUInt8 METH_RDY_getCacheLine();
  tUWide METH_getToMem();
  tUInt8 METH_RDY_getToMem();
  void METH_putFromMem(tUWide ARG_putFromMem_e);
  tUInt8 METH_RDY_putFromMem();
 
 /* Reset routines */
 public:
  void reset_RST_N(tUInt8 ARG_rst_in);
 
 /* Static handles to reset routines */
 public:
 
 /* Pointers to reset fns in parent module for asserting output resets */
 private:
 
 /* Functions for the parent module to register its reset fns */
 public:
 
 /* Functions to set the elaborated clock id */
 public:
  void set_clk_0(char const *s);
 
 /* State dumping routine */
 public:
  void dump_state(unsigned int indent);
 
 /* VCD dumping routines */
 public:
  unsigned int dump_VCD_defs(unsigned int levels);
  void dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkCache &backing);
  void vcd_defs(tVCDDumpType dt, MOD_mkCache &backing);
  void vcd_prims(tVCDDumpType dt, MOD_mkCache &backing);
};

#endif /* ifndef __mkCache_h__ */
