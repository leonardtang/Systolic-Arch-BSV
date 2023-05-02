/*
 * Generated by Bluespec Compiler, version 2023.01-6-g034050db (build 034050db)
 * 
 * On Mon May  1 22:12:10 EDT 2023
 * 
 */

/* Generation options: */
#ifndef __mkMainMem_h__
#define __mkMainMem_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"


/* Class declaration for the mkMainMem module */
class MOD_mkMainMem : public Module {
 
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
  MOD_BRAM<tUInt32,tUWide,tUInt8> INST_bram_memory;
  MOD_Reg<tUInt8> INST_bram_serverAdapter_cnt;
  MOD_Wire<tUInt8> INST_bram_serverAdapter_cnt_1;
  MOD_Wire<tUInt8> INST_bram_serverAdapter_cnt_2;
  MOD_Wire<tUInt8> INST_bram_serverAdapter_cnt_3;
  MOD_Reg<tUInt8> INST_bram_serverAdapter_outData_beforeDeq;
  MOD_Reg<tUInt8> INST_bram_serverAdapter_outData_beforeEnq;
  MOD_Wire<tUInt8> INST_bram_serverAdapter_outData_dequeueing;
  MOD_Wire<tUWide> INST_bram_serverAdapter_outData_enqw;
  MOD_Fifo<tUWide> INST_bram_serverAdapter_outData_ff;
  MOD_Reg<tUInt8> INST_bram_serverAdapter_s1;
  MOD_Wire<tUInt8> INST_bram_serverAdapter_s1_1;
  MOD_Wire<tUInt8> INST_bram_serverAdapter_writeWithResp;
  MOD_CReg<tUWide> INST_dl_d_0_rv;
  MOD_CReg<tUWide> INST_dl_d_10_rv;
  MOD_CReg<tUWide> INST_dl_d_11_rv;
  MOD_CReg<tUWide> INST_dl_d_12_rv;
  MOD_CReg<tUWide> INST_dl_d_13_rv;
  MOD_CReg<tUWide> INST_dl_d_14_rv;
  MOD_CReg<tUWide> INST_dl_d_15_rv;
  MOD_CReg<tUWide> INST_dl_d_16_rv;
  MOD_CReg<tUWide> INST_dl_d_17_rv;
  MOD_CReg<tUWide> INST_dl_d_18_rv;
  MOD_CReg<tUWide> INST_dl_d_19_rv;
  MOD_CReg<tUWide> INST_dl_d_1_rv;
  MOD_CReg<tUWide> INST_dl_d_20_rv;
  MOD_CReg<tUWide> INST_dl_d_21_rv;
  MOD_CReg<tUWide> INST_dl_d_22_rv;
  MOD_CReg<tUWide> INST_dl_d_23_rv;
  MOD_CReg<tUWide> INST_dl_d_24_rv;
  MOD_CReg<tUWide> INST_dl_d_25_rv;
  MOD_CReg<tUWide> INST_dl_d_26_rv;
  MOD_CReg<tUWide> INST_dl_d_27_rv;
  MOD_CReg<tUWide> INST_dl_d_28_rv;
  MOD_CReg<tUWide> INST_dl_d_29_rv;
  MOD_CReg<tUWide> INST_dl_d_2_rv;
  MOD_CReg<tUWide> INST_dl_d_30_rv;
  MOD_CReg<tUWide> INST_dl_d_31_rv;
  MOD_CReg<tUWide> INST_dl_d_32_rv;
  MOD_CReg<tUWide> INST_dl_d_33_rv;
  MOD_CReg<tUWide> INST_dl_d_34_rv;
  MOD_CReg<tUWide> INST_dl_d_35_rv;
  MOD_CReg<tUWide> INST_dl_d_36_rv;
  MOD_CReg<tUWide> INST_dl_d_37_rv;
  MOD_CReg<tUWide> INST_dl_d_38_rv;
  MOD_CReg<tUWide> INST_dl_d_39_rv;
  MOD_CReg<tUWide> INST_dl_d_3_rv;
  MOD_CReg<tUWide> INST_dl_d_4_rv;
  MOD_CReg<tUWide> INST_dl_d_5_rv;
  MOD_CReg<tUWide> INST_dl_d_6_rv;
  MOD_CReg<tUWide> INST_dl_d_7_rv;
  MOD_CReg<tUWide> INST_dl_d_8_rv;
  MOD_CReg<tUWide> INST_dl_d_9_rv;
 
 /* Constructor */
 public:
  MOD_mkMainMem(tSimStateHdl simHdl, char const *name, Module *parent);
 
 /* Symbol init methods */
 private:
  void init_symbols_0();
 
 /* Reset signal definitions */
 private:
  tUInt8 PORT_RST_N;
 
 /* Port definitions */
 public:
  tUInt8 PORT_EN_put;
  tUInt8 PORT_EN_get;
  tUWide PORT_put_req;
  tUWide PORT_get;
 
 /* Publicly accessible definitions */
 public:
  tUInt8 DEF_WILL_FIRE_get;
  tUInt8 DEF_WILL_FIRE_put;
  tUInt8 DEF_b__h853;
  tUWide DEF_dl_d_39_rv_port0__read____d377;
  tUWide DEF_dl_d_0_rv_port1__read____d366;
  tUInt8 DEF_bram_serverAdapter_s1___d35;
  tUInt8 DEF_bram_serverAdapter_cnt_3_whas____d13;
  tUInt8 DEF_bram_serverAdapter_cnt_2_whas____d11;
  tUInt8 DEF_bram_serverAdapter_cnt_1_whas____d10;
  tUInt8 DEF_bram_serverAdapter_outData_ff_i_notEmpty____d4;
  tUInt8 DEF_bram_serverAdapter_s1_5_BIT_0___d36;
 
 /* Local definitions */
 private:
  tUWide DEF_dl_d_39_rv_port1__read____d53;
  tUWide DEF_dl_d_38_rv_port1__read____d62;
  tUWide DEF_dl_d_38_rv_port0__read____d51;
  tUWide DEF_dl_d_37_rv_port1__read____d70;
  tUWide DEF_dl_d_37_rv_port0__read____d60;
  tUWide DEF_dl_d_36_rv_port1__read____d78;
  tUWide DEF_dl_d_36_rv_port0__read____d68;
  tUWide DEF_dl_d_35_rv_port1__read____d86;
  tUWide DEF_dl_d_35_rv_port0__read____d76;
  tUWide DEF_dl_d_34_rv_port1__read____d94;
  tUWide DEF_dl_d_34_rv_port0__read____d84;
  tUWide DEF_dl_d_33_rv_port1__read____d102;
  tUWide DEF_dl_d_33_rv_port0__read____d92;
  tUWide DEF_dl_d_32_rv_port1__read____d110;
  tUWide DEF_dl_d_32_rv_port0__read____d100;
  tUWide DEF_dl_d_31_rv_port1__read____d118;
  tUWide DEF_dl_d_31_rv_port0__read____d108;
  tUWide DEF_dl_d_30_rv_port1__read____d126;
  tUWide DEF_dl_d_30_rv_port0__read____d116;
  tUWide DEF_dl_d_29_rv_port1__read____d134;
  tUWide DEF_dl_d_29_rv_port0__read____d124;
  tUWide DEF_dl_d_28_rv_port1__read____d142;
  tUWide DEF_dl_d_28_rv_port0__read____d132;
  tUWide DEF_dl_d_27_rv_port1__read____d150;
  tUWide DEF_dl_d_27_rv_port0__read____d140;
  tUWide DEF_dl_d_26_rv_port1__read____d158;
  tUWide DEF_dl_d_26_rv_port0__read____d148;
  tUWide DEF_dl_d_25_rv_port1__read____d166;
  tUWide DEF_dl_d_25_rv_port0__read____d156;
  tUWide DEF_dl_d_24_rv_port1__read____d174;
  tUWide DEF_dl_d_24_rv_port0__read____d164;
  tUWide DEF_dl_d_23_rv_port1__read____d182;
  tUWide DEF_dl_d_23_rv_port0__read____d172;
  tUWide DEF_dl_d_22_rv_port1__read____d190;
  tUWide DEF_dl_d_22_rv_port0__read____d180;
  tUWide DEF_dl_d_21_rv_port1__read____d198;
  tUWide DEF_dl_d_21_rv_port0__read____d188;
  tUWide DEF_dl_d_20_rv_port1__read____d206;
  tUWide DEF_dl_d_20_rv_port0__read____d196;
  tUWide DEF_dl_d_19_rv_port1__read____d214;
  tUWide DEF_dl_d_19_rv_port0__read____d204;
  tUWide DEF_dl_d_18_rv_port1__read____d222;
  tUWide DEF_dl_d_18_rv_port0__read____d212;
  tUWide DEF_dl_d_17_rv_port1__read____d230;
  tUWide DEF_dl_d_17_rv_port0__read____d220;
  tUWide DEF_dl_d_16_rv_port1__read____d238;
  tUWide DEF_dl_d_16_rv_port0__read____d228;
  tUWide DEF_dl_d_15_rv_port1__read____d246;
  tUWide DEF_dl_d_15_rv_port0__read____d236;
  tUWide DEF_dl_d_14_rv_port1__read____d254;
  tUWide DEF_dl_d_14_rv_port0__read____d244;
  tUWide DEF_dl_d_13_rv_port1__read____d262;
  tUWide DEF_dl_d_13_rv_port0__read____d252;
  tUWide DEF_dl_d_12_rv_port1__read____d270;
  tUWide DEF_dl_d_12_rv_port0__read____d260;
  tUWide DEF_dl_d_11_rv_port1__read____d278;
  tUWide DEF_dl_d_11_rv_port0__read____d268;
  tUWide DEF_dl_d_10_rv_port1__read____d286;
  tUWide DEF_dl_d_10_rv_port0__read____d276;
  tUWide DEF_dl_d_9_rv_port1__read____d294;
  tUWide DEF_dl_d_9_rv_port0__read____d284;
  tUWide DEF_dl_d_8_rv_port1__read____d302;
  tUWide DEF_dl_d_8_rv_port0__read____d292;
  tUWide DEF_dl_d_7_rv_port1__read____d310;
  tUWide DEF_dl_d_7_rv_port0__read____d300;
  tUWide DEF_dl_d_6_rv_port1__read____d318;
  tUWide DEF_dl_d_6_rv_port0__read____d308;
  tUWide DEF_dl_d_5_rv_port1__read____d326;
  tUWide DEF_dl_d_5_rv_port0__read____d316;
  tUWide DEF_dl_d_4_rv_port1__read____d334;
  tUWide DEF_dl_d_4_rv_port0__read____d324;
  tUWide DEF_dl_d_3_rv_port1__read____d342;
  tUWide DEF_dl_d_3_rv_port0__read____d332;
  tUWide DEF_dl_d_2_rv_port1__read____d350;
  tUWide DEF_dl_d_2_rv_port0__read____d340;
  tUWide DEF_dl_d_1_rv_port1__read____d358;
  tUWide DEF_dl_d_1_rv_port0__read____d348;
  tUWide DEF_dl_d_0_rv_port0__read____d356;
  tUWide DEF_x_wget__h359;
  tUWide DEF_x_first__h244;
  tUWide DEF_v__h1428;
  tUWide DEF_x__h21731;
  tUWide DEF_x__h21284;
  tUWide DEF_x__h21026;
  tUWide DEF_x__h20768;
  tUWide DEF_x__h20510;
  tUWide DEF_x__h20252;
  tUWide DEF_x__h19994;
  tUWide DEF_x__h19736;
  tUWide DEF_x__h19478;
  tUWide DEF_x__h19220;
  tUWide DEF_x__h18962;
  tUWide DEF_x__h18704;
  tUWide DEF_x__h18446;
  tUWide DEF_x__h18188;
  tUWide DEF_x__h17930;
  tUWide DEF_x__h17672;
  tUWide DEF_x__h17414;
  tUWide DEF_x__h17156;
  tUWide DEF_x__h16898;
  tUWide DEF_x__h16640;
  tUWide DEF_x__h16382;
  tUWide DEF_x__h16124;
  tUWide DEF_x__h15866;
  tUWide DEF_x__h15608;
  tUWide DEF_x__h15350;
  tUWide DEF_x__h15092;
  tUWide DEF_x__h14834;
  tUWide DEF_x__h14576;
  tUWide DEF_x__h14318;
  tUWide DEF_x__h14060;
  tUWide DEF_x__h13802;
  tUWide DEF_x__h13544;
  tUWide DEF_x__h13286;
  tUWide DEF_x__h13028;
  tUWide DEF_x__h12770;
  tUWide DEF_x__h12512;
  tUWide DEF_x__h12254;
  tUWide DEF_x__h11996;
  tUWide DEF_x__h11738;
  tUWide DEF_x__h11480;
  tUWide DEF_x3__h21553;
  tUWide DEF_IF_bram_serverAdapter_outData_ff_i_notEmpty_TH_ETC___d371;
  tUWide DEF_x__h457;
  tUWide DEF__1_CONCAT_IF_bram_serverAdapter_outData_ff_i_no_ETC___d372;
  tUWide DEF__1_CONCAT_dl_d_0_rv_port0__read__56_BITS_511_TO_ETC___d363;
  tUWide DEF__1_CONCAT_dl_d_1_rv_port0__read__48_BITS_511_TO_ETC___d355;
  tUWide DEF__1_CONCAT_dl_d_2_rv_port0__read__40_BITS_511_TO_ETC___d347;
  tUWide DEF__1_CONCAT_dl_d_3_rv_port0__read__32_BITS_511_TO_ETC___d339;
  tUWide DEF__1_CONCAT_dl_d_4_rv_port0__read__24_BITS_511_TO_ETC___d331;
  tUWide DEF__1_CONCAT_dl_d_5_rv_port0__read__16_BITS_511_TO_ETC___d323;
  tUWide DEF__1_CONCAT_dl_d_6_rv_port0__read__08_BITS_511_TO_ETC___d315;
  tUWide DEF__1_CONCAT_dl_d_7_rv_port0__read__00_BITS_511_TO_ETC___d307;
  tUWide DEF__1_CONCAT_dl_d_8_rv_port0__read__92_BITS_511_TO_ETC___d299;
  tUWide DEF__1_CONCAT_dl_d_9_rv_port0__read__84_BITS_511_TO_ETC___d291;
  tUWide DEF__1_CONCAT_dl_d_10_rv_port0__read__76_BITS_511_T_ETC___d283;
  tUWide DEF__1_CONCAT_dl_d_11_rv_port0__read__68_BITS_511_T_ETC___d275;
  tUWide DEF__1_CONCAT_dl_d_12_rv_port0__read__60_BITS_511_T_ETC___d267;
  tUWide DEF__1_CONCAT_dl_d_13_rv_port0__read__52_BITS_511_T_ETC___d259;
  tUWide DEF__1_CONCAT_dl_d_14_rv_port0__read__44_BITS_511_T_ETC___d251;
  tUWide DEF__1_CONCAT_dl_d_15_rv_port0__read__36_BITS_511_T_ETC___d243;
  tUWide DEF__1_CONCAT_dl_d_16_rv_port0__read__28_BITS_511_T_ETC___d235;
  tUWide DEF__1_CONCAT_dl_d_17_rv_port0__read__20_BITS_511_T_ETC___d227;
  tUWide DEF__1_CONCAT_dl_d_18_rv_port0__read__12_BITS_511_T_ETC___d219;
  tUWide DEF__1_CONCAT_dl_d_19_rv_port0__read__04_BITS_511_T_ETC___d211;
  tUWide DEF__1_CONCAT_dl_d_20_rv_port0__read__96_BITS_511_T_ETC___d203;
  tUWide DEF__1_CONCAT_dl_d_21_rv_port0__read__88_BITS_511_T_ETC___d195;
  tUWide DEF__1_CONCAT_dl_d_22_rv_port0__read__80_BITS_511_T_ETC___d187;
  tUWide DEF__1_CONCAT_dl_d_23_rv_port0__read__72_BITS_511_T_ETC___d179;
  tUWide DEF__1_CONCAT_dl_d_24_rv_port0__read__64_BITS_511_T_ETC___d171;
  tUWide DEF__1_CONCAT_dl_d_25_rv_port0__read__56_BITS_511_T_ETC___d163;
  tUWide DEF__1_CONCAT_dl_d_26_rv_port0__read__48_BITS_511_T_ETC___d155;
  tUWide DEF__1_CONCAT_dl_d_27_rv_port0__read__40_BITS_511_T_ETC___d147;
  tUWide DEF__1_CONCAT_dl_d_28_rv_port0__read__32_BITS_511_T_ETC___d139;
  tUWide DEF__1_CONCAT_dl_d_29_rv_port0__read__24_BITS_511_T_ETC___d131;
  tUWide DEF__1_CONCAT_dl_d_30_rv_port0__read__16_BITS_511_T_ETC___d123;
  tUWide DEF__1_CONCAT_dl_d_31_rv_port0__read__08_BITS_511_T_ETC___d115;
  tUWide DEF__1_CONCAT_dl_d_32_rv_port0__read__00_BITS_511_T_ETC___d107;
  tUWide DEF__1_CONCAT_dl_d_33_rv_port0__read__2_BITS_511_TO_ETC___d99;
  tUWide DEF__1_CONCAT_dl_d_34_rv_port0__read__4_BITS_511_TO_ETC___d91;
  tUWide DEF__1_CONCAT_dl_d_35_rv_port0__read__6_BITS_511_TO_ETC___d83;
  tUWide DEF__1_CONCAT_dl_d_36_rv_port0__read__8_BITS_511_TO_ETC___d75;
  tUWide DEF__1_CONCAT_dl_d_38_rv_port0__read__1_BITS_511_TO_ETC___d59;
  tUWide DEF__1_CONCAT_dl_d_37_rv_port0__read__0_BITS_511_TO_ETC___d67;
  tUWide DEF__0_CONCAT_DONTCARE___d57;
 
 /* Rules */
 public:
  void RL_bram_serverAdapter_outData_enqueue();
  void RL_bram_serverAdapter_outData_dequeue();
  void RL_bram_serverAdapter_cnt_finalAdd();
  void RL_bram_serverAdapter_s1__dreg_update();
  void RL_bram_serverAdapter_stageReadResponseAlways();
  void RL_bram_serverAdapter_moveToOutFIFO();
  void RL_bram_serverAdapter_overRun();
  void RL_dl_try_move();
  void RL_dl_try_move_1();
  void RL_dl_try_move_2();
  void RL_dl_try_move_3();
  void RL_dl_try_move_4();
  void RL_dl_try_move_5();
  void RL_dl_try_move_6();
  void RL_dl_try_move_7();
  void RL_dl_try_move_8();
  void RL_dl_try_move_9();
  void RL_dl_try_move_10();
  void RL_dl_try_move_11();
  void RL_dl_try_move_12();
  void RL_dl_try_move_13();
  void RL_dl_try_move_14();
  void RL_dl_try_move_15();
  void RL_dl_try_move_16();
  void RL_dl_try_move_17();
  void RL_dl_try_move_18();
  void RL_dl_try_move_19();
  void RL_dl_try_move_20();
  void RL_dl_try_move_21();
  void RL_dl_try_move_22();
  void RL_dl_try_move_23();
  void RL_dl_try_move_24();
  void RL_dl_try_move_25();
  void RL_dl_try_move_26();
  void RL_dl_try_move_27();
  void RL_dl_try_move_28();
  void RL_dl_try_move_29();
  void RL_dl_try_move_30();
  void RL_dl_try_move_31();
  void RL_dl_try_move_32();
  void RL_dl_try_move_33();
  void RL_dl_try_move_34();
  void RL_dl_try_move_35();
  void RL_dl_try_move_36();
  void RL_dl_try_move_37();
  void RL_dl_try_move_38();
  void RL_deq();
 
 /* Methods */
 public:
  void METH_put(tUWide ARG_put_req);
  tUInt8 METH_RDY_put();
  tUWide METH_get();
  tUInt8 METH_RDY_get();
 
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
  void dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkMainMem &backing);
  void vcd_defs(tVCDDumpType dt, MOD_mkMainMem &backing);
  void vcd_prims(tVCDDumpType dt, MOD_mkMainMem &backing);
};

#endif /* ifndef __mkMainMem_h__ */
