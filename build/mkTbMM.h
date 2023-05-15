/*
 * Generated by Bluespec Compiler, version 2023.01-6-g034050db (build 034050db)
 * 
 * On Sun May 14 22:36:46 EDT 2023
 * 
 */

/* Generation options: */
#ifndef __mkTbMM_h__
#define __mkTbMM_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"
#include "mkSystolicArray.h"


/* Class declaration for the mkTbMM module */
class MOD_mkTbMM : public Module {
 
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
  MOD_mkSystolicArray INST_arr;
  MOD_Reg<tUInt8> INST_compute;
  MOD_Reg<tUInt8> INST_file_valid;
  MOD_Reg<tUInt8> INST_init;
  MOD_Reg<tUInt8> INST_load;
  MOD_Reg<tUInt32> INST_out_file;
  MOD_Wire<tUInt32> INST_randomizer1_0_0_ignore;
  MOD_Reg<tUInt8> INST_randomizer1_0_0_initialized;
  MOD_Wire<tUInt32> INST_randomizer1_0_0_zaz;
  MOD_Wire<tUInt32> INST_randomizer1_0_1_ignore;
  MOD_Reg<tUInt8> INST_randomizer1_0_1_initialized;
  MOD_Wire<tUInt32> INST_randomizer1_0_1_zaz;
  MOD_Wire<tUInt32> INST_randomizer1_0_2_ignore;
  MOD_Reg<tUInt8> INST_randomizer1_0_2_initialized;
  MOD_Wire<tUInt32> INST_randomizer1_0_2_zaz;
  MOD_Wire<tUInt32> INST_randomizer1_0_3_ignore;
  MOD_Reg<tUInt8> INST_randomizer1_0_3_initialized;
  MOD_Wire<tUInt32> INST_randomizer1_0_3_zaz;
  MOD_Wire<tUInt32> INST_randomizer1_1_0_ignore;
  MOD_Reg<tUInt8> INST_randomizer1_1_0_initialized;
  MOD_Wire<tUInt32> INST_randomizer1_1_0_zaz;
  MOD_Wire<tUInt32> INST_randomizer1_1_1_ignore;
  MOD_Reg<tUInt8> INST_randomizer1_1_1_initialized;
  MOD_Wire<tUInt32> INST_randomizer1_1_1_zaz;
  MOD_Wire<tUInt32> INST_randomizer1_1_2_ignore;
  MOD_Reg<tUInt8> INST_randomizer1_1_2_initialized;
  MOD_Wire<tUInt32> INST_randomizer1_1_2_zaz;
  MOD_Wire<tUInt32> INST_randomizer1_1_3_ignore;
  MOD_Reg<tUInt8> INST_randomizer1_1_3_initialized;
  MOD_Wire<tUInt32> INST_randomizer1_1_3_zaz;
  MOD_Wire<tUInt32> INST_randomizer1_2_0_ignore;
  MOD_Reg<tUInt8> INST_randomizer1_2_0_initialized;
  MOD_Wire<tUInt32> INST_randomizer1_2_0_zaz;
  MOD_Wire<tUInt32> INST_randomizer1_2_1_ignore;
  MOD_Reg<tUInt8> INST_randomizer1_2_1_initialized;
  MOD_Wire<tUInt32> INST_randomizer1_2_1_zaz;
  MOD_Wire<tUInt32> INST_randomizer1_2_2_ignore;
  MOD_Reg<tUInt8> INST_randomizer1_2_2_initialized;
  MOD_Wire<tUInt32> INST_randomizer1_2_2_zaz;
  MOD_Wire<tUInt32> INST_randomizer1_2_3_ignore;
  MOD_Reg<tUInt8> INST_randomizer1_2_3_initialized;
  MOD_Wire<tUInt32> INST_randomizer1_2_3_zaz;
  MOD_Wire<tUInt32> INST_randomizer1_3_0_ignore;
  MOD_Reg<tUInt8> INST_randomizer1_3_0_initialized;
  MOD_Wire<tUInt32> INST_randomizer1_3_0_zaz;
  MOD_Wire<tUInt32> INST_randomizer1_3_1_ignore;
  MOD_Reg<tUInt8> INST_randomizer1_3_1_initialized;
  MOD_Wire<tUInt32> INST_randomizer1_3_1_zaz;
  MOD_Wire<tUInt32> INST_randomizer1_3_2_ignore;
  MOD_Reg<tUInt8> INST_randomizer1_3_2_initialized;
  MOD_Wire<tUInt32> INST_randomizer1_3_2_zaz;
  MOD_Wire<tUInt32> INST_randomizer1_3_3_ignore;
  MOD_Reg<tUInt8> INST_randomizer1_3_3_initialized;
  MOD_Wire<tUInt32> INST_randomizer1_3_3_zaz;
  MOD_Wire<tUInt32> INST_randomizer2_0_0_ignore;
  MOD_Reg<tUInt8> INST_randomizer2_0_0_initialized;
  MOD_Wire<tUInt32> INST_randomizer2_0_0_zaz;
  MOD_Wire<tUInt32> INST_randomizer2_0_1_ignore;
  MOD_Reg<tUInt8> INST_randomizer2_0_1_initialized;
  MOD_Wire<tUInt32> INST_randomizer2_0_1_zaz;
  MOD_Wire<tUInt32> INST_randomizer2_0_2_ignore;
  MOD_Reg<tUInt8> INST_randomizer2_0_2_initialized;
  MOD_Wire<tUInt32> INST_randomizer2_0_2_zaz;
  MOD_Wire<tUInt32> INST_randomizer2_0_3_ignore;
  MOD_Reg<tUInt8> INST_randomizer2_0_3_initialized;
  MOD_Wire<tUInt32> INST_randomizer2_0_3_zaz;
  MOD_Wire<tUInt32> INST_randomizer2_1_0_ignore;
  MOD_Reg<tUInt8> INST_randomizer2_1_0_initialized;
  MOD_Wire<tUInt32> INST_randomizer2_1_0_zaz;
  MOD_Wire<tUInt32> INST_randomizer2_1_1_ignore;
  MOD_Reg<tUInt8> INST_randomizer2_1_1_initialized;
  MOD_Wire<tUInt32> INST_randomizer2_1_1_zaz;
  MOD_Wire<tUInt32> INST_randomizer2_1_2_ignore;
  MOD_Reg<tUInt8> INST_randomizer2_1_2_initialized;
  MOD_Wire<tUInt32> INST_randomizer2_1_2_zaz;
  MOD_Wire<tUInt32> INST_randomizer2_1_3_ignore;
  MOD_Reg<tUInt8> INST_randomizer2_1_3_initialized;
  MOD_Wire<tUInt32> INST_randomizer2_1_3_zaz;
  MOD_Wire<tUInt32> INST_randomizer2_2_0_ignore;
  MOD_Reg<tUInt8> INST_randomizer2_2_0_initialized;
  MOD_Wire<tUInt32> INST_randomizer2_2_0_zaz;
  MOD_Wire<tUInt32> INST_randomizer2_2_1_ignore;
  MOD_Reg<tUInt8> INST_randomizer2_2_1_initialized;
  MOD_Wire<tUInt32> INST_randomizer2_2_1_zaz;
  MOD_Wire<tUInt32> INST_randomizer2_2_2_ignore;
  MOD_Reg<tUInt8> INST_randomizer2_2_2_initialized;
  MOD_Wire<tUInt32> INST_randomizer2_2_2_zaz;
  MOD_Wire<tUInt32> INST_randomizer2_2_3_ignore;
  MOD_Reg<tUInt8> INST_randomizer2_2_3_initialized;
  MOD_Wire<tUInt32> INST_randomizer2_2_3_zaz;
  MOD_Wire<tUInt32> INST_randomizer2_3_0_ignore;
  MOD_Reg<tUInt8> INST_randomizer2_3_0_initialized;
  MOD_Wire<tUInt32> INST_randomizer2_3_0_zaz;
  MOD_Wire<tUInt32> INST_randomizer2_3_1_ignore;
  MOD_Reg<tUInt8> INST_randomizer2_3_1_initialized;
  MOD_Wire<tUInt32> INST_randomizer2_3_1_zaz;
  MOD_Wire<tUInt32> INST_randomizer2_3_2_ignore;
  MOD_Reg<tUInt8> INST_randomizer2_3_2_initialized;
  MOD_Wire<tUInt32> INST_randomizer2_3_2_zaz;
  MOD_Wire<tUInt32> INST_randomizer2_3_3_ignore;
  MOD_Reg<tUInt8> INST_randomizer2_3_3_initialized;
  MOD_Wire<tUInt32> INST_randomizer2_3_3_zaz;
  MOD_Reg<tUInt32> INST_res_0_0;
  MOD_Reg<tUInt32> INST_res_0_1;
  MOD_Reg<tUInt32> INST_res_0_2;
  MOD_Reg<tUInt32> INST_res_0_3;
  MOD_Reg<tUInt32> INST_res_1_0;
  MOD_Reg<tUInt32> INST_res_1_1;
  MOD_Reg<tUInt32> INST_res_1_2;
  MOD_Reg<tUInt32> INST_res_1_3;
  MOD_Reg<tUInt32> INST_res_2_0;
  MOD_Reg<tUInt32> INST_res_2_1;
  MOD_Reg<tUInt32> INST_res_2_2;
  MOD_Reg<tUInt32> INST_res_2_3;
  MOD_Reg<tUInt32> INST_res_3_0;
  MOD_Reg<tUInt32> INST_res_3_1;
  MOD_Reg<tUInt32> INST_res_3_2;
  MOD_Reg<tUInt32> INST_res_3_3;
  MOD_Reg<tUInt8> INST_start;
  MOD_Reg<tUInt32> INST_x1_0_0;
  MOD_Reg<tUInt32> INST_x1_0_1;
  MOD_Reg<tUInt32> INST_x1_0_2;
  MOD_Reg<tUInt32> INST_x1_0_3;
  MOD_Reg<tUInt32> INST_x1_1_0;
  MOD_Reg<tUInt32> INST_x1_1_1;
  MOD_Reg<tUInt32> INST_x1_1_2;
  MOD_Reg<tUInt32> INST_x1_1_3;
  MOD_Reg<tUInt32> INST_x1_2_0;
  MOD_Reg<tUInt32> INST_x1_2_1;
  MOD_Reg<tUInt32> INST_x1_2_2;
  MOD_Reg<tUInt32> INST_x1_2_3;
  MOD_Reg<tUInt32> INST_x1_3_0;
  MOD_Reg<tUInt32> INST_x1_3_1;
  MOD_Reg<tUInt32> INST_x1_3_2;
  MOD_Reg<tUInt32> INST_x1_3_3;
  MOD_Reg<tUInt32> INST_x2_0_0;
  MOD_Reg<tUInt32> INST_x2_0_1;
  MOD_Reg<tUInt32> INST_x2_0_2;
  MOD_Reg<tUInt32> INST_x2_0_3;
  MOD_Reg<tUInt32> INST_x2_1_0;
  MOD_Reg<tUInt32> INST_x2_1_1;
  MOD_Reg<tUInt32> INST_x2_1_2;
  MOD_Reg<tUInt32> INST_x2_1_3;
  MOD_Reg<tUInt32> INST_x2_2_0;
  MOD_Reg<tUInt32> INST_x2_2_1;
  MOD_Reg<tUInt32> INST_x2_2_2;
  MOD_Reg<tUInt32> INST_x2_2_3;
  MOD_Reg<tUInt32> INST_x2_3_0;
  MOD_Reg<tUInt32> INST_x2_3_1;
  MOD_Reg<tUInt32> INST_x2_3_2;
  MOD_Reg<tUInt32> INST_x2_3_3;
 
 /* Constructor */
 public:
  MOD_mkTbMM(tSimStateHdl simHdl, char const *name, Module *parent);
 
 /* Symbol init methods */
 private:
  void init_symbols_0();
 
 /* Reset signal definitions */
 private:
  tUInt8 PORT_RST_N;
 
 /* Port definitions */
 public:
 
 /* Publicly accessible definitions */
 public:
 
 /* Local definitions */
 private:
  tUInt32 DEF_v__h12015;
  tUInt32 DEF_v__h11663;
  tUInt32 DEF_v__h11311;
  tUInt32 DEF_v__h10959;
  tUInt32 DEF_v__h10584;
  tUInt32 DEF_v__h10232;
  tUInt32 DEF_v__h9880;
  tUInt32 DEF_v__h9528;
  tUInt32 DEF_v__h9153;
  tUInt32 DEF_v__h8801;
  tUInt32 DEF_v__h8449;
  tUInt32 DEF_v__h8097;
  tUInt32 DEF_v__h7722;
  tUInt32 DEF_v__h7367;
  tUInt32 DEF_v__h7012;
  tUInt32 DEF_v__h6657;
  tUInt32 DEF_v__h5964;
  tUInt32 DEF_v__h5612;
  tUInt32 DEF_v__h5260;
  tUInt32 DEF_v__h4908;
  tUInt32 DEF_v__h4533;
  tUInt32 DEF_v__h4181;
  tUInt32 DEF_v__h3829;
  tUInt32 DEF_v__h3477;
  tUInt32 DEF_v__h3102;
  tUInt32 DEF_v__h2750;
  tUInt32 DEF_v__h2398;
  tUInt32 DEF_v__h2046;
  tUInt32 DEF_v__h1671;
  tUInt32 DEF_v__h1316;
  tUInt32 DEF_v__h961;
  tUInt32 DEF_v__h565;
  tUInt32 DEF_TASK_fopen___d259;
  tUInt32 DEF_b__h28533;
  tUInt32 DEF_b__h29868;
  tUInt32 DEF_b__h29788;
  tUInt32 DEF_b__h29708;
  tUInt32 DEF_b__h29628;
  tUInt32 DEF_b__h29548;
  tUInt32 DEF_b__h29468;
  tUInt32 DEF_b__h29388;
  tUInt32 DEF_b__h29308;
  tUInt32 DEF_b__h29228;
  tUInt32 DEF_b__h29148;
  tUInt32 DEF_b__h29068;
  tUInt32 DEF_b__h28988;
  tUInt32 DEF_b__h28908;
  tUInt32 DEF_b__h28828;
  tUInt32 DEF_b__h28748;
  tUInt32 DEF_b__h28668;
  tUInt32 DEF_b__h28450;
  tUInt32 DEF_b__h28367;
  tUInt32 DEF_b__h28284;
  tUInt32 DEF_b__h28201;
  tUInt32 DEF_b__h28118;
  tUInt32 DEF_b__h28035;
  tUInt32 DEF_b__h27952;
  tUInt32 DEF_b__h27869;
  tUInt32 DEF_b__h27786;
  tUInt32 DEF_b__h27703;
  tUInt32 DEF_b__h27620;
  tUInt32 DEF_b__h27537;
  tUInt32 DEF_b__h27454;
  tUInt32 DEF_b__h27371;
  tUInt32 DEF_b__h27288;
  tUInt32 DEF_x_wget__h11958;
  tUInt32 DEF_x_wget__h11606;
  tUInt32 DEF_x_wget__h11254;
  tUInt32 DEF_x_wget__h10902;
  tUInt32 DEF_x_wget__h10527;
  tUInt32 DEF_x_wget__h10175;
  tUInt32 DEF_x_wget__h9823;
  tUInt32 DEF_x_wget__h9471;
  tUInt32 DEF_x_wget__h9096;
  tUInt32 DEF_x_wget__h8744;
  tUInt32 DEF_x_wget__h8392;
  tUInt32 DEF_x_wget__h8040;
  tUInt32 DEF_x_wget__h7665;
  tUInt32 DEF_x_wget__h7310;
  tUInt32 DEF_x_wget__h6955;
  tUInt32 DEF_x_wget__h6600;
  tUInt32 DEF_x_wget__h5907;
  tUInt32 DEF_x_wget__h5555;
  tUInt32 DEF_x_wget__h5203;
  tUInt32 DEF_x_wget__h4851;
  tUInt32 DEF_x_wget__h4476;
  tUInt32 DEF_x_wget__h4124;
  tUInt32 DEF_x_wget__h3772;
  tUInt32 DEF_x_wget__h3420;
  tUInt32 DEF_x_wget__h3045;
  tUInt32 DEF_x_wget__h2693;
  tUInt32 DEF_x_wget__h2341;
  tUInt32 DEF_x_wget__h1989;
  tUInt32 DEF_x_wget__h1614;
  tUInt32 DEF_x_wget__h1259;
  tUInt32 DEF_x_wget__h904;
  tUInt32 DEF_x_wget__h508;
  tUInt32 DEF_value__h12091;
  tUInt32 DEF_value__h11739;
  tUInt32 DEF_value__h11387;
  tUInt32 DEF_value__h11035;
  tUInt32 DEF_value__h10660;
  tUInt32 DEF_value__h10308;
  tUInt32 DEF_value__h9956;
  tUInt32 DEF_value__h9604;
  tUInt32 DEF_value__h9229;
  tUInt32 DEF_value__h8877;
  tUInt32 DEF_value__h8525;
  tUInt32 DEF_value__h8173;
  tUInt32 DEF_value__h7798;
  tUInt32 DEF_value__h7443;
  tUInt32 DEF_value__h7088;
  tUInt32 DEF_value__h6733;
  tUInt32 DEF_value__h6040;
  tUInt32 DEF_value__h5688;
  tUInt32 DEF_value__h5336;
  tUInt32 DEF_value__h4984;
  tUInt32 DEF_value__h4609;
  tUInt32 DEF_value__h4257;
  tUInt32 DEF_value__h3905;
  tUInt32 DEF_value__h3553;
  tUInt32 DEF_value__h3178;
  tUInt32 DEF_value__h2826;
  tUInt32 DEF_value__h2474;
  tUInt32 DEF_value__h2122;
  tUInt32 DEF_value__h1747;
  tUInt32 DEF_value__h1392;
  tUInt32 DEF_value__h642;
  tUInt32 DEF_value__h1037;
  tUWide DEF_data__h28594;
  tUWide DEF__0_CONCAT_x2_0_0_88_89_PLUS_0_CONCAT_x2_0_1_90__ETC___d431;
  tUWide DEF_x2_3_3_32_CONCAT_0___d433;
  tUWide DEF__0_CONCAT_x2_0_0_88_89_PLUS_0_CONCAT_x2_0_1_90__ETC___d428;
  tUWide DEF__0_CONCAT_x2_3_2_29_CONCAT_0___d430;
  tUWide DEF__0_CONCAT_x2_0_0_88_89_PLUS_0_CONCAT_x2_0_1_90__ETC___d425;
  tUWide DEF__0_CONCAT_x2_3_1_26_CONCAT_0___d427;
  tUWide DEF__0_CONCAT_x2_0_0_88_89_PLUS_0_CONCAT_x2_0_1_90__ETC___d422;
  tUWide DEF__0_CONCAT_x2_3_0_23_CONCAT_0___d424;
  tUWide DEF__0_CONCAT_x2_0_0_88_89_PLUS_0_CONCAT_x2_0_1_90__ETC___d419;
  tUWide DEF__0_CONCAT_x2_2_3_20_CONCAT_0___d421;
  tUWide DEF__0_CONCAT_x2_0_0_88_89_PLUS_0_CONCAT_x2_0_1_90__ETC___d416;
  tUWide DEF__0_CONCAT_x2_2_2_17_CONCAT_0___d418;
  tUWide DEF__0_CONCAT_x2_0_0_88_89_PLUS_0_CONCAT_x2_0_1_90__ETC___d413;
  tUWide DEF__0_CONCAT_x2_2_1_14_CONCAT_0___d415;
  tUWide DEF__0_CONCAT_x2_0_0_88_89_PLUS_0_CONCAT_x2_0_1_90__ETC___d410;
  tUWide DEF__0_CONCAT_x2_2_0_11_CONCAT_0___d412;
  tUWide DEF__0_CONCAT_x2_0_0_88_89_PLUS_0_CONCAT_x2_0_1_90__ETC___d407;
  tUWide DEF__0_CONCAT_x2_1_3_08_CONCAT_0___d409;
  tUWide DEF__0_CONCAT_x2_0_0_88_89_PLUS_0_CONCAT_x2_0_1_90__ETC___d404;
  tUWide DEF__0_CONCAT_x2_1_2_05_CONCAT_0___d406;
  tUWide DEF__0_CONCAT_x2_0_0_88_89_PLUS_0_CONCAT_x2_0_1_90__ETC___d401;
  tUWide DEF__0_CONCAT_x2_1_1_02_CONCAT_0___d403;
  tUWide DEF__0_CONCAT_x2_0_0_88_89_PLUS_0_CONCAT_x2_0_1_90__ETC___d398;
  tUWide DEF__0_CONCAT_x2_1_0_99_CONCAT_0___d400;
  tUWide DEF__0_CONCAT_x2_0_0_88_89_PLUS_0_CONCAT_x2_0_1_90__ETC___d395;
  tUWide DEF__0_CONCAT_x2_0_3_96_CONCAT_0___d397;
  tUWide DEF__0_CONCAT_x2_0_0_88_89_PLUS_0_CONCAT_x2_0_1_90__ETC___d392;
  tUWide DEF__0_CONCAT_x2_0_2_93_CONCAT_0___d394;
  tUWide DEF__0_CONCAT_x2_0_0_88___d389;
  tUWide DEF__0_CONCAT_x2_0_1_90_CONCAT_0___d391;
  tUWide DEF_data__h26739;
  tUWide DEF__0_CONCAT_x1_0_0_41_42_PLUS_0_CONCAT_x1_0_1_43__ETC___d384;
  tUWide DEF_x1_3_3_85_CONCAT_0___d386;
  tUWide DEF__0_CONCAT_x1_0_0_41_42_PLUS_0_CONCAT_x1_0_1_43__ETC___d381;
  tUWide DEF__0_CONCAT_x1_3_2_82_CONCAT_0___d383;
  tUWide DEF__0_CONCAT_x1_0_0_41_42_PLUS_0_CONCAT_x1_0_1_43__ETC___d378;
  tUWide DEF__0_CONCAT_x1_3_1_79_CONCAT_0___d380;
  tUWide DEF__0_CONCAT_x1_0_0_41_42_PLUS_0_CONCAT_x1_0_1_43__ETC___d375;
  tUWide DEF__0_CONCAT_x1_3_0_76_CONCAT_0___d377;
  tUWide DEF__0_CONCAT_x1_0_0_41_42_PLUS_0_CONCAT_x1_0_1_43__ETC___d372;
  tUWide DEF__0_CONCAT_x1_2_3_73_CONCAT_0___d374;
  tUWide DEF__0_CONCAT_x1_0_0_41_42_PLUS_0_CONCAT_x1_0_1_43__ETC___d369;
  tUWide DEF__0_CONCAT_x1_2_2_70_CONCAT_0___d371;
  tUWide DEF__0_CONCAT_x1_0_0_41_42_PLUS_0_CONCAT_x1_0_1_43__ETC___d366;
  tUWide DEF__0_CONCAT_x1_2_1_67_CONCAT_0___d368;
  tUWide DEF__0_CONCAT_x1_0_0_41_42_PLUS_0_CONCAT_x1_0_1_43__ETC___d363;
  tUWide DEF__0_CONCAT_x1_2_0_64_CONCAT_0___d365;
  tUWide DEF__0_CONCAT_x1_0_0_41_42_PLUS_0_CONCAT_x1_0_1_43__ETC___d360;
  tUWide DEF__0_CONCAT_x1_1_3_61_CONCAT_0___d362;
  tUWide DEF__0_CONCAT_x1_0_0_41_42_PLUS_0_CONCAT_x1_0_1_43__ETC___d357;
  tUWide DEF__0_CONCAT_x1_1_2_58_CONCAT_0___d359;
  tUWide DEF__0_CONCAT_x1_0_0_41_42_PLUS_0_CONCAT_x1_0_1_43__ETC___d354;
  tUWide DEF__0_CONCAT_x1_1_1_55_CONCAT_0___d356;
  tUWide DEF__0_CONCAT_x1_0_0_41_42_PLUS_0_CONCAT_x1_0_1_43__ETC___d351;
  tUWide DEF__0_CONCAT_x1_1_0_52_CONCAT_0___d353;
  tUWide DEF__0_CONCAT_x1_0_0_41_42_PLUS_0_CONCAT_x1_0_1_43__ETC___d348;
  tUWide DEF__0_CONCAT_x1_0_3_49_CONCAT_0___d350;
  tUWide DEF__0_CONCAT_x1_0_0_41_42_PLUS_0_CONCAT_x1_0_1_43__ETC___d345;
  tUWide DEF__0_CONCAT_x1_0_2_46_CONCAT_0___d347;
  tUWide DEF__0_CONCAT_x1_0_0_41___d342;
  tUWide DEF__0_CONCAT_x1_0_1_43_CONCAT_0___d344;
  tUInt32 DEF_v__h12088;
  tUInt32 DEF_v__h11736;
  tUInt32 DEF_v__h11384;
  tUInt32 DEF_v__h11032;
  tUInt32 DEF_v__h10657;
  tUInt32 DEF_v__h10305;
  tUInt32 DEF_v__h9953;
  tUInt32 DEF_v__h9601;
  tUInt32 DEF_v__h9226;
  tUInt32 DEF_v__h8874;
  tUInt32 DEF_v__h8522;
  tUInt32 DEF_v__h8170;
  tUInt32 DEF_v__h7795;
  tUInt32 DEF_v__h7440;
  tUInt32 DEF_v__h7085;
  tUInt32 DEF_v__h6730;
  tUInt32 DEF_v__h6037;
  tUInt32 DEF_v__h5685;
  tUInt32 DEF_v__h5333;
  tUInt32 DEF_v__h4981;
  tUInt32 DEF_v__h4606;
  tUInt32 DEF_v__h4254;
  tUInt32 DEF_v__h3902;
  tUInt32 DEF_v__h3550;
  tUInt32 DEF_v__h3175;
  tUInt32 DEF_v__h2823;
  tUInt32 DEF_v__h2471;
  tUInt32 DEF_v__h2119;
  tUInt32 DEF_v__h1744;
  tUInt32 DEF_v__h1389;
  tUInt32 DEF_v__h639;
  tUInt32 DEF_v__h1034;
 
 /* Rules */
 public:
  void RL_randomizer1_0_0_every();
  void RL_randomizer1_0_0_every_1();
  void RL_randomizer1_0_1_every();
  void RL_randomizer1_0_1_every_1();
  void RL_randomizer1_0_2_every();
  void RL_randomizer1_0_2_every_1();
  void RL_randomizer1_0_3_every();
  void RL_randomizer1_0_3_every_1();
  void RL_randomizer1_1_0_every();
  void RL_randomizer1_1_0_every_1();
  void RL_randomizer1_1_1_every();
  void RL_randomizer1_1_1_every_1();
  void RL_randomizer1_1_2_every();
  void RL_randomizer1_1_2_every_1();
  void RL_randomizer1_1_3_every();
  void RL_randomizer1_1_3_every_1();
  void RL_randomizer1_2_0_every();
  void RL_randomizer1_2_0_every_1();
  void RL_randomizer1_2_1_every();
  void RL_randomizer1_2_1_every_1();
  void RL_randomizer1_2_2_every();
  void RL_randomizer1_2_2_every_1();
  void RL_randomizer1_2_3_every();
  void RL_randomizer1_2_3_every_1();
  void RL_randomizer1_3_0_every();
  void RL_randomizer1_3_0_every_1();
  void RL_randomizer1_3_1_every();
  void RL_randomizer1_3_1_every_1();
  void RL_randomizer1_3_2_every();
  void RL_randomizer1_3_2_every_1();
  void RL_randomizer1_3_3_every();
  void RL_randomizer1_3_3_every_1();
  void RL_randomizer2_0_0_every();
  void RL_randomizer2_0_0_every_1();
  void RL_randomizer2_0_1_every();
  void RL_randomizer2_0_1_every_1();
  void RL_randomizer2_0_2_every();
  void RL_randomizer2_0_2_every_1();
  void RL_randomizer2_0_3_every();
  void RL_randomizer2_0_3_every_1();
  void RL_randomizer2_1_0_every();
  void RL_randomizer2_1_0_every_1();
  void RL_randomizer2_1_1_every();
  void RL_randomizer2_1_1_every_1();
  void RL_randomizer2_1_2_every();
  void RL_randomizer2_1_2_every_1();
  void RL_randomizer2_1_3_every();
  void RL_randomizer2_1_3_every_1();
  void RL_randomizer2_2_0_every();
  void RL_randomizer2_2_0_every_1();
  void RL_randomizer2_2_1_every();
  void RL_randomizer2_2_1_every_1();
  void RL_randomizer2_2_2_every();
  void RL_randomizer2_2_2_every_1();
  void RL_randomizer2_2_3_every();
  void RL_randomizer2_2_3_every_1();
  void RL_randomizer2_3_0_every();
  void RL_randomizer2_3_0_every_1();
  void RL_randomizer2_3_1_every();
  void RL_randomizer2_3_1_every_1();
  void RL_randomizer2_3_2_every();
  void RL_randomizer2_3_2_every_1();
  void RL_randomizer2_3_3_every();
  void RL_randomizer2_3_3_every_1();
  void RL_set_outfile();
  void RL_init_randomizer();
  void RL_init_matrix();
  void RL_load_matrix();
  void RL_compute_matrix();
 
 /* Methods */
 public:
 
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
  void dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkTbMM &backing);
  void vcd_defs(tVCDDumpType dt, MOD_mkTbMM &backing);
  void vcd_prims(tVCDDumpType dt, MOD_mkTbMM &backing);
  void vcd_submodules(tVCDDumpType dt, unsigned int levels, MOD_mkTbMM &backing);
};

#endif /* ifndef __mkTbMM_h__ */
