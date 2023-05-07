/*
 * Generated by Bluespec Compiler, version 2023.01-6-g034050db (build 034050db)
 * 
 * On Sat May  6 16:10:35 EDT 2023
 * 
 */

/* Generation options: */
#ifndef __mkpipelined_h__
#define __mkpipelined_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"


/* Class declaration for the mkpipelined module */
class MOD_mkpipelined : public Module {
 
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
  MOD_Reg<tUInt64> INST_commit_id;
  MOD_Wire<tUInt32> INST_counter_port_0;
  MOD_Wire<tUInt32> INST_counter_port_1;
  MOD_Wire<tUInt32> INST_counter_port_2;
  MOD_Reg<tUInt8> INST_counter_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_counter_readBeforeLaterWrites_1;
  MOD_Reg<tUInt8> INST_counter_readBeforeLaterWrites_2;
  MOD_Reg<tUInt32> INST_counter_register;
  MOD_Fifo<tUWide> INST_d2e;
  MOD_Fifo<tUWide> INST_e2w;
  MOD_Wire<tUInt8> INST_epoch_port_0;
  MOD_Wire<tUInt8> INST_epoch_port_1;
  MOD_Reg<tUInt8> INST_epoch_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_epoch_readBeforeLaterWrites_1;
  MOD_Reg<tUInt8> INST_epoch_register;
  MOD_Fifo<tUWide> INST_f2d;
  MOD_Reg<tUInt64> INST_fresh_id;
  MOD_CReg<tUWide> INST_fromDmem_rv;
  MOD_CReg<tUWide> INST_fromImem_rv;
  MOD_CReg<tUWide> INST_fromMMIO_rv;
  MOD_Reg<tUInt32> INST_lfh;
  MOD_Wire<tUInt32> INST_pcF_port_0;
  MOD_Wire<tUInt32> INST_pcF_port_1;
  MOD_Reg<tUInt8> INST_pcF_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_pcF_readBeforeLaterWrites_1;
  MOD_Reg<tUInt32> INST_pcF_register;
  MOD_Fifo<tUInt64> INST_retired;
  MOD_Wire<tUInt32> INST_rf_0_port_0;
  MOD_Wire<tUInt32> INST_rf_0_port_1;
  MOD_Reg<tUInt8> INST_rf_0_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_rf_0_readBeforeLaterWrites_1;
  MOD_Reg<tUInt32> INST_rf_0_register;
  MOD_Wire<tUInt32> INST_rf_10_port_0;
  MOD_Wire<tUInt32> INST_rf_10_port_1;
  MOD_Reg<tUInt8> INST_rf_10_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_rf_10_readBeforeLaterWrites_1;
  MOD_Reg<tUInt32> INST_rf_10_register;
  MOD_Wire<tUInt32> INST_rf_11_port_0;
  MOD_Wire<tUInt32> INST_rf_11_port_1;
  MOD_Reg<tUInt8> INST_rf_11_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_rf_11_readBeforeLaterWrites_1;
  MOD_Reg<tUInt32> INST_rf_11_register;
  MOD_Wire<tUInt32> INST_rf_12_port_0;
  MOD_Wire<tUInt32> INST_rf_12_port_1;
  MOD_Reg<tUInt8> INST_rf_12_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_rf_12_readBeforeLaterWrites_1;
  MOD_Reg<tUInt32> INST_rf_12_register;
  MOD_Wire<tUInt32> INST_rf_13_port_0;
  MOD_Wire<tUInt32> INST_rf_13_port_1;
  MOD_Reg<tUInt8> INST_rf_13_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_rf_13_readBeforeLaterWrites_1;
  MOD_Reg<tUInt32> INST_rf_13_register;
  MOD_Wire<tUInt32> INST_rf_14_port_0;
  MOD_Wire<tUInt32> INST_rf_14_port_1;
  MOD_Reg<tUInt8> INST_rf_14_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_rf_14_readBeforeLaterWrites_1;
  MOD_Reg<tUInt32> INST_rf_14_register;
  MOD_Wire<tUInt32> INST_rf_15_port_0;
  MOD_Wire<tUInt32> INST_rf_15_port_1;
  MOD_Reg<tUInt8> INST_rf_15_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_rf_15_readBeforeLaterWrites_1;
  MOD_Reg<tUInt32> INST_rf_15_register;
  MOD_Wire<tUInt32> INST_rf_16_port_0;
  MOD_Wire<tUInt32> INST_rf_16_port_1;
  MOD_Reg<tUInt8> INST_rf_16_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_rf_16_readBeforeLaterWrites_1;
  MOD_Reg<tUInt32> INST_rf_16_register;
  MOD_Wire<tUInt32> INST_rf_17_port_0;
  MOD_Wire<tUInt32> INST_rf_17_port_1;
  MOD_Reg<tUInt8> INST_rf_17_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_rf_17_readBeforeLaterWrites_1;
  MOD_Reg<tUInt32> INST_rf_17_register;
  MOD_Wire<tUInt32> INST_rf_18_port_0;
  MOD_Wire<tUInt32> INST_rf_18_port_1;
  MOD_Reg<tUInt8> INST_rf_18_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_rf_18_readBeforeLaterWrites_1;
  MOD_Reg<tUInt32> INST_rf_18_register;
  MOD_Wire<tUInt32> INST_rf_19_port_0;
  MOD_Wire<tUInt32> INST_rf_19_port_1;
  MOD_Reg<tUInt8> INST_rf_19_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_rf_19_readBeforeLaterWrites_1;
  MOD_Reg<tUInt32> INST_rf_19_register;
  MOD_Wire<tUInt32> INST_rf_1_port_0;
  MOD_Wire<tUInt32> INST_rf_1_port_1;
  MOD_Reg<tUInt8> INST_rf_1_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_rf_1_readBeforeLaterWrites_1;
  MOD_Reg<tUInt32> INST_rf_1_register;
  MOD_Wire<tUInt32> INST_rf_20_port_0;
  MOD_Wire<tUInt32> INST_rf_20_port_1;
  MOD_Reg<tUInt8> INST_rf_20_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_rf_20_readBeforeLaterWrites_1;
  MOD_Reg<tUInt32> INST_rf_20_register;
  MOD_Wire<tUInt32> INST_rf_21_port_0;
  MOD_Wire<tUInt32> INST_rf_21_port_1;
  MOD_Reg<tUInt8> INST_rf_21_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_rf_21_readBeforeLaterWrites_1;
  MOD_Reg<tUInt32> INST_rf_21_register;
  MOD_Wire<tUInt32> INST_rf_22_port_0;
  MOD_Wire<tUInt32> INST_rf_22_port_1;
  MOD_Reg<tUInt8> INST_rf_22_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_rf_22_readBeforeLaterWrites_1;
  MOD_Reg<tUInt32> INST_rf_22_register;
  MOD_Wire<tUInt32> INST_rf_23_port_0;
  MOD_Wire<tUInt32> INST_rf_23_port_1;
  MOD_Reg<tUInt8> INST_rf_23_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_rf_23_readBeforeLaterWrites_1;
  MOD_Reg<tUInt32> INST_rf_23_register;
  MOD_Wire<tUInt32> INST_rf_24_port_0;
  MOD_Wire<tUInt32> INST_rf_24_port_1;
  MOD_Reg<tUInt8> INST_rf_24_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_rf_24_readBeforeLaterWrites_1;
  MOD_Reg<tUInt32> INST_rf_24_register;
  MOD_Wire<tUInt32> INST_rf_25_port_0;
  MOD_Wire<tUInt32> INST_rf_25_port_1;
  MOD_Reg<tUInt8> INST_rf_25_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_rf_25_readBeforeLaterWrites_1;
  MOD_Reg<tUInt32> INST_rf_25_register;
  MOD_Wire<tUInt32> INST_rf_26_port_0;
  MOD_Wire<tUInt32> INST_rf_26_port_1;
  MOD_Reg<tUInt8> INST_rf_26_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_rf_26_readBeforeLaterWrites_1;
  MOD_Reg<tUInt32> INST_rf_26_register;
  MOD_Wire<tUInt32> INST_rf_27_port_0;
  MOD_Wire<tUInt32> INST_rf_27_port_1;
  MOD_Reg<tUInt8> INST_rf_27_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_rf_27_readBeforeLaterWrites_1;
  MOD_Reg<tUInt32> INST_rf_27_register;
  MOD_Wire<tUInt32> INST_rf_28_port_0;
  MOD_Wire<tUInt32> INST_rf_28_port_1;
  MOD_Reg<tUInt8> INST_rf_28_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_rf_28_readBeforeLaterWrites_1;
  MOD_Reg<tUInt32> INST_rf_28_register;
  MOD_Wire<tUInt32> INST_rf_29_port_0;
  MOD_Wire<tUInt32> INST_rf_29_port_1;
  MOD_Reg<tUInt8> INST_rf_29_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_rf_29_readBeforeLaterWrites_1;
  MOD_Reg<tUInt32> INST_rf_29_register;
  MOD_Wire<tUInt32> INST_rf_2_port_0;
  MOD_Wire<tUInt32> INST_rf_2_port_1;
  MOD_Reg<tUInt8> INST_rf_2_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_rf_2_readBeforeLaterWrites_1;
  MOD_Reg<tUInt32> INST_rf_2_register;
  MOD_Wire<tUInt32> INST_rf_30_port_0;
  MOD_Wire<tUInt32> INST_rf_30_port_1;
  MOD_Reg<tUInt8> INST_rf_30_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_rf_30_readBeforeLaterWrites_1;
  MOD_Reg<tUInt32> INST_rf_30_register;
  MOD_Wire<tUInt32> INST_rf_31_port_0;
  MOD_Wire<tUInt32> INST_rf_31_port_1;
  MOD_Reg<tUInt8> INST_rf_31_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_rf_31_readBeforeLaterWrites_1;
  MOD_Reg<tUInt32> INST_rf_31_register;
  MOD_Wire<tUInt32> INST_rf_3_port_0;
  MOD_Wire<tUInt32> INST_rf_3_port_1;
  MOD_Reg<tUInt8> INST_rf_3_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_rf_3_readBeforeLaterWrites_1;
  MOD_Reg<tUInt32> INST_rf_3_register;
  MOD_Wire<tUInt32> INST_rf_4_port_0;
  MOD_Wire<tUInt32> INST_rf_4_port_1;
  MOD_Reg<tUInt8> INST_rf_4_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_rf_4_readBeforeLaterWrites_1;
  MOD_Reg<tUInt32> INST_rf_4_register;
  MOD_Wire<tUInt32> INST_rf_5_port_0;
  MOD_Wire<tUInt32> INST_rf_5_port_1;
  MOD_Reg<tUInt8> INST_rf_5_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_rf_5_readBeforeLaterWrites_1;
  MOD_Reg<tUInt32> INST_rf_5_register;
  MOD_Wire<tUInt32> INST_rf_6_port_0;
  MOD_Wire<tUInt32> INST_rf_6_port_1;
  MOD_Reg<tUInt8> INST_rf_6_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_rf_6_readBeforeLaterWrites_1;
  MOD_Reg<tUInt32> INST_rf_6_register;
  MOD_Wire<tUInt32> INST_rf_7_port_0;
  MOD_Wire<tUInt32> INST_rf_7_port_1;
  MOD_Reg<tUInt8> INST_rf_7_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_rf_7_readBeforeLaterWrites_1;
  MOD_Reg<tUInt32> INST_rf_7_register;
  MOD_Wire<tUInt32> INST_rf_8_port_0;
  MOD_Wire<tUInt32> INST_rf_8_port_1;
  MOD_Reg<tUInt8> INST_rf_8_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_rf_8_readBeforeLaterWrites_1;
  MOD_Reg<tUInt32> INST_rf_8_register;
  MOD_Wire<tUInt32> INST_rf_9_port_0;
  MOD_Wire<tUInt32> INST_rf_9_port_1;
  MOD_Reg<tUInt8> INST_rf_9_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_rf_9_readBeforeLaterWrites_1;
  MOD_Reg<tUInt32> INST_rf_9_register;
  MOD_Wire<tUInt32> INST_scoreboard_0_port_0;
  MOD_Wire<tUInt32> INST_scoreboard_0_port_1;
  MOD_Wire<tUInt32> INST_scoreboard_0_port_2;
  MOD_Reg<tUInt8> INST_scoreboard_0_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_scoreboard_0_readBeforeLaterWrites_1;
  MOD_Reg<tUInt8> INST_scoreboard_0_readBeforeLaterWrites_2;
  MOD_Reg<tUInt32> INST_scoreboard_0_register;
  MOD_Wire<tUInt32> INST_scoreboard_10_port_0;
  MOD_Wire<tUInt32> INST_scoreboard_10_port_1;
  MOD_Wire<tUInt32> INST_scoreboard_10_port_2;
  MOD_Reg<tUInt8> INST_scoreboard_10_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_scoreboard_10_readBeforeLaterWrites_1;
  MOD_Reg<tUInt8> INST_scoreboard_10_readBeforeLaterWrites_2;
  MOD_Reg<tUInt32> INST_scoreboard_10_register;
  MOD_Wire<tUInt32> INST_scoreboard_11_port_0;
  MOD_Wire<tUInt32> INST_scoreboard_11_port_1;
  MOD_Wire<tUInt32> INST_scoreboard_11_port_2;
  MOD_Reg<tUInt8> INST_scoreboard_11_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_scoreboard_11_readBeforeLaterWrites_1;
  MOD_Reg<tUInt8> INST_scoreboard_11_readBeforeLaterWrites_2;
  MOD_Reg<tUInt32> INST_scoreboard_11_register;
  MOD_Wire<tUInt32> INST_scoreboard_12_port_0;
  MOD_Wire<tUInt32> INST_scoreboard_12_port_1;
  MOD_Wire<tUInt32> INST_scoreboard_12_port_2;
  MOD_Reg<tUInt8> INST_scoreboard_12_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_scoreboard_12_readBeforeLaterWrites_1;
  MOD_Reg<tUInt8> INST_scoreboard_12_readBeforeLaterWrites_2;
  MOD_Reg<tUInt32> INST_scoreboard_12_register;
  MOD_Wire<tUInt32> INST_scoreboard_13_port_0;
  MOD_Wire<tUInt32> INST_scoreboard_13_port_1;
  MOD_Wire<tUInt32> INST_scoreboard_13_port_2;
  MOD_Reg<tUInt8> INST_scoreboard_13_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_scoreboard_13_readBeforeLaterWrites_1;
  MOD_Reg<tUInt8> INST_scoreboard_13_readBeforeLaterWrites_2;
  MOD_Reg<tUInt32> INST_scoreboard_13_register;
  MOD_Wire<tUInt32> INST_scoreboard_14_port_0;
  MOD_Wire<tUInt32> INST_scoreboard_14_port_1;
  MOD_Wire<tUInt32> INST_scoreboard_14_port_2;
  MOD_Reg<tUInt8> INST_scoreboard_14_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_scoreboard_14_readBeforeLaterWrites_1;
  MOD_Reg<tUInt8> INST_scoreboard_14_readBeforeLaterWrites_2;
  MOD_Reg<tUInt32> INST_scoreboard_14_register;
  MOD_Wire<tUInt32> INST_scoreboard_15_port_0;
  MOD_Wire<tUInt32> INST_scoreboard_15_port_1;
  MOD_Wire<tUInt32> INST_scoreboard_15_port_2;
  MOD_Reg<tUInt8> INST_scoreboard_15_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_scoreboard_15_readBeforeLaterWrites_1;
  MOD_Reg<tUInt8> INST_scoreboard_15_readBeforeLaterWrites_2;
  MOD_Reg<tUInt32> INST_scoreboard_15_register;
  MOD_Wire<tUInt32> INST_scoreboard_16_port_0;
  MOD_Wire<tUInt32> INST_scoreboard_16_port_1;
  MOD_Wire<tUInt32> INST_scoreboard_16_port_2;
  MOD_Reg<tUInt8> INST_scoreboard_16_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_scoreboard_16_readBeforeLaterWrites_1;
  MOD_Reg<tUInt8> INST_scoreboard_16_readBeforeLaterWrites_2;
  MOD_Reg<tUInt32> INST_scoreboard_16_register;
  MOD_Wire<tUInt32> INST_scoreboard_17_port_0;
  MOD_Wire<tUInt32> INST_scoreboard_17_port_1;
  MOD_Wire<tUInt32> INST_scoreboard_17_port_2;
  MOD_Reg<tUInt8> INST_scoreboard_17_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_scoreboard_17_readBeforeLaterWrites_1;
  MOD_Reg<tUInt8> INST_scoreboard_17_readBeforeLaterWrites_2;
  MOD_Reg<tUInt32> INST_scoreboard_17_register;
  MOD_Wire<tUInt32> INST_scoreboard_18_port_0;
  MOD_Wire<tUInt32> INST_scoreboard_18_port_1;
  MOD_Wire<tUInt32> INST_scoreboard_18_port_2;
  MOD_Reg<tUInt8> INST_scoreboard_18_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_scoreboard_18_readBeforeLaterWrites_1;
  MOD_Reg<tUInt8> INST_scoreboard_18_readBeforeLaterWrites_2;
  MOD_Reg<tUInt32> INST_scoreboard_18_register;
  MOD_Wire<tUInt32> INST_scoreboard_19_port_0;
  MOD_Wire<tUInt32> INST_scoreboard_19_port_1;
  MOD_Wire<tUInt32> INST_scoreboard_19_port_2;
  MOD_Reg<tUInt8> INST_scoreboard_19_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_scoreboard_19_readBeforeLaterWrites_1;
  MOD_Reg<tUInt8> INST_scoreboard_19_readBeforeLaterWrites_2;
  MOD_Reg<tUInt32> INST_scoreboard_19_register;
  MOD_Wire<tUInt32> INST_scoreboard_1_port_0;
  MOD_Wire<tUInt32> INST_scoreboard_1_port_1;
  MOD_Wire<tUInt32> INST_scoreboard_1_port_2;
  MOD_Reg<tUInt8> INST_scoreboard_1_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_scoreboard_1_readBeforeLaterWrites_1;
  MOD_Reg<tUInt8> INST_scoreboard_1_readBeforeLaterWrites_2;
  MOD_Reg<tUInt32> INST_scoreboard_1_register;
  MOD_Wire<tUInt32> INST_scoreboard_20_port_0;
  MOD_Wire<tUInt32> INST_scoreboard_20_port_1;
  MOD_Wire<tUInt32> INST_scoreboard_20_port_2;
  MOD_Reg<tUInt8> INST_scoreboard_20_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_scoreboard_20_readBeforeLaterWrites_1;
  MOD_Reg<tUInt8> INST_scoreboard_20_readBeforeLaterWrites_2;
  MOD_Reg<tUInt32> INST_scoreboard_20_register;
  MOD_Wire<tUInt32> INST_scoreboard_21_port_0;
  MOD_Wire<tUInt32> INST_scoreboard_21_port_1;
  MOD_Wire<tUInt32> INST_scoreboard_21_port_2;
  MOD_Reg<tUInt8> INST_scoreboard_21_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_scoreboard_21_readBeforeLaterWrites_1;
  MOD_Reg<tUInt8> INST_scoreboard_21_readBeforeLaterWrites_2;
  MOD_Reg<tUInt32> INST_scoreboard_21_register;
  MOD_Wire<tUInt32> INST_scoreboard_22_port_0;
  MOD_Wire<tUInt32> INST_scoreboard_22_port_1;
  MOD_Wire<tUInt32> INST_scoreboard_22_port_2;
  MOD_Reg<tUInt8> INST_scoreboard_22_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_scoreboard_22_readBeforeLaterWrites_1;
  MOD_Reg<tUInt8> INST_scoreboard_22_readBeforeLaterWrites_2;
  MOD_Reg<tUInt32> INST_scoreboard_22_register;
  MOD_Wire<tUInt32> INST_scoreboard_23_port_0;
  MOD_Wire<tUInt32> INST_scoreboard_23_port_1;
  MOD_Wire<tUInt32> INST_scoreboard_23_port_2;
  MOD_Reg<tUInt8> INST_scoreboard_23_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_scoreboard_23_readBeforeLaterWrites_1;
  MOD_Reg<tUInt8> INST_scoreboard_23_readBeforeLaterWrites_2;
  MOD_Reg<tUInt32> INST_scoreboard_23_register;
  MOD_Wire<tUInt32> INST_scoreboard_24_port_0;
  MOD_Wire<tUInt32> INST_scoreboard_24_port_1;
  MOD_Wire<tUInt32> INST_scoreboard_24_port_2;
  MOD_Reg<tUInt8> INST_scoreboard_24_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_scoreboard_24_readBeforeLaterWrites_1;
  MOD_Reg<tUInt8> INST_scoreboard_24_readBeforeLaterWrites_2;
  MOD_Reg<tUInt32> INST_scoreboard_24_register;
  MOD_Wire<tUInt32> INST_scoreboard_25_port_0;
  MOD_Wire<tUInt32> INST_scoreboard_25_port_1;
  MOD_Wire<tUInt32> INST_scoreboard_25_port_2;
  MOD_Reg<tUInt8> INST_scoreboard_25_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_scoreboard_25_readBeforeLaterWrites_1;
  MOD_Reg<tUInt8> INST_scoreboard_25_readBeforeLaterWrites_2;
  MOD_Reg<tUInt32> INST_scoreboard_25_register;
  MOD_Wire<tUInt32> INST_scoreboard_26_port_0;
  MOD_Wire<tUInt32> INST_scoreboard_26_port_1;
  MOD_Wire<tUInt32> INST_scoreboard_26_port_2;
  MOD_Reg<tUInt8> INST_scoreboard_26_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_scoreboard_26_readBeforeLaterWrites_1;
  MOD_Reg<tUInt8> INST_scoreboard_26_readBeforeLaterWrites_2;
  MOD_Reg<tUInt32> INST_scoreboard_26_register;
  MOD_Wire<tUInt32> INST_scoreboard_27_port_0;
  MOD_Wire<tUInt32> INST_scoreboard_27_port_1;
  MOD_Wire<tUInt32> INST_scoreboard_27_port_2;
  MOD_Reg<tUInt8> INST_scoreboard_27_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_scoreboard_27_readBeforeLaterWrites_1;
  MOD_Reg<tUInt8> INST_scoreboard_27_readBeforeLaterWrites_2;
  MOD_Reg<tUInt32> INST_scoreboard_27_register;
  MOD_Wire<tUInt32> INST_scoreboard_28_port_0;
  MOD_Wire<tUInt32> INST_scoreboard_28_port_1;
  MOD_Wire<tUInt32> INST_scoreboard_28_port_2;
  MOD_Reg<tUInt8> INST_scoreboard_28_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_scoreboard_28_readBeforeLaterWrites_1;
  MOD_Reg<tUInt8> INST_scoreboard_28_readBeforeLaterWrites_2;
  MOD_Reg<tUInt32> INST_scoreboard_28_register;
  MOD_Wire<tUInt32> INST_scoreboard_29_port_0;
  MOD_Wire<tUInt32> INST_scoreboard_29_port_1;
  MOD_Wire<tUInt32> INST_scoreboard_29_port_2;
  MOD_Reg<tUInt8> INST_scoreboard_29_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_scoreboard_29_readBeforeLaterWrites_1;
  MOD_Reg<tUInt8> INST_scoreboard_29_readBeforeLaterWrites_2;
  MOD_Reg<tUInt32> INST_scoreboard_29_register;
  MOD_Wire<tUInt32> INST_scoreboard_2_port_0;
  MOD_Wire<tUInt32> INST_scoreboard_2_port_1;
  MOD_Wire<tUInt32> INST_scoreboard_2_port_2;
  MOD_Reg<tUInt8> INST_scoreboard_2_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_scoreboard_2_readBeforeLaterWrites_1;
  MOD_Reg<tUInt8> INST_scoreboard_2_readBeforeLaterWrites_2;
  MOD_Reg<tUInt32> INST_scoreboard_2_register;
  MOD_Wire<tUInt32> INST_scoreboard_30_port_0;
  MOD_Wire<tUInt32> INST_scoreboard_30_port_1;
  MOD_Wire<tUInt32> INST_scoreboard_30_port_2;
  MOD_Reg<tUInt8> INST_scoreboard_30_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_scoreboard_30_readBeforeLaterWrites_1;
  MOD_Reg<tUInt8> INST_scoreboard_30_readBeforeLaterWrites_2;
  MOD_Reg<tUInt32> INST_scoreboard_30_register;
  MOD_Wire<tUInt32> INST_scoreboard_31_port_0;
  MOD_Wire<tUInt32> INST_scoreboard_31_port_1;
  MOD_Wire<tUInt32> INST_scoreboard_31_port_2;
  MOD_Reg<tUInt8> INST_scoreboard_31_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_scoreboard_31_readBeforeLaterWrites_1;
  MOD_Reg<tUInt8> INST_scoreboard_31_readBeforeLaterWrites_2;
  MOD_Reg<tUInt32> INST_scoreboard_31_register;
  MOD_Wire<tUInt32> INST_scoreboard_3_port_0;
  MOD_Wire<tUInt32> INST_scoreboard_3_port_1;
  MOD_Wire<tUInt32> INST_scoreboard_3_port_2;
  MOD_Reg<tUInt8> INST_scoreboard_3_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_scoreboard_3_readBeforeLaterWrites_1;
  MOD_Reg<tUInt8> INST_scoreboard_3_readBeforeLaterWrites_2;
  MOD_Reg<tUInt32> INST_scoreboard_3_register;
  MOD_Wire<tUInt32> INST_scoreboard_4_port_0;
  MOD_Wire<tUInt32> INST_scoreboard_4_port_1;
  MOD_Wire<tUInt32> INST_scoreboard_4_port_2;
  MOD_Reg<tUInt8> INST_scoreboard_4_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_scoreboard_4_readBeforeLaterWrites_1;
  MOD_Reg<tUInt8> INST_scoreboard_4_readBeforeLaterWrites_2;
  MOD_Reg<tUInt32> INST_scoreboard_4_register;
  MOD_Wire<tUInt32> INST_scoreboard_5_port_0;
  MOD_Wire<tUInt32> INST_scoreboard_5_port_1;
  MOD_Wire<tUInt32> INST_scoreboard_5_port_2;
  MOD_Reg<tUInt8> INST_scoreboard_5_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_scoreboard_5_readBeforeLaterWrites_1;
  MOD_Reg<tUInt8> INST_scoreboard_5_readBeforeLaterWrites_2;
  MOD_Reg<tUInt32> INST_scoreboard_5_register;
  MOD_Wire<tUInt32> INST_scoreboard_6_port_0;
  MOD_Wire<tUInt32> INST_scoreboard_6_port_1;
  MOD_Wire<tUInt32> INST_scoreboard_6_port_2;
  MOD_Reg<tUInt8> INST_scoreboard_6_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_scoreboard_6_readBeforeLaterWrites_1;
  MOD_Reg<tUInt8> INST_scoreboard_6_readBeforeLaterWrites_2;
  MOD_Reg<tUInt32> INST_scoreboard_6_register;
  MOD_Wire<tUInt32> INST_scoreboard_7_port_0;
  MOD_Wire<tUInt32> INST_scoreboard_7_port_1;
  MOD_Wire<tUInt32> INST_scoreboard_7_port_2;
  MOD_Reg<tUInt8> INST_scoreboard_7_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_scoreboard_7_readBeforeLaterWrites_1;
  MOD_Reg<tUInt8> INST_scoreboard_7_readBeforeLaterWrites_2;
  MOD_Reg<tUInt32> INST_scoreboard_7_register;
  MOD_Wire<tUInt32> INST_scoreboard_8_port_0;
  MOD_Wire<tUInt32> INST_scoreboard_8_port_1;
  MOD_Wire<tUInt32> INST_scoreboard_8_port_2;
  MOD_Reg<tUInt8> INST_scoreboard_8_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_scoreboard_8_readBeforeLaterWrites_1;
  MOD_Reg<tUInt8> INST_scoreboard_8_readBeforeLaterWrites_2;
  MOD_Reg<tUInt32> INST_scoreboard_8_register;
  MOD_Wire<tUInt32> INST_scoreboard_9_port_0;
  MOD_Wire<tUInt32> INST_scoreboard_9_port_1;
  MOD_Wire<tUInt32> INST_scoreboard_9_port_2;
  MOD_Reg<tUInt8> INST_scoreboard_9_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_scoreboard_9_readBeforeLaterWrites_1;
  MOD_Reg<tUInt8> INST_scoreboard_9_readBeforeLaterWrites_2;
  MOD_Reg<tUInt32> INST_scoreboard_9_register;
  MOD_Fifo<tUInt64> INST_squashed;
  MOD_Reg<tUInt8> INST_starting;
  MOD_CReg<tUWide> INST_toDmem_rv;
  MOD_CReg<tUWide> INST_toImem_rv;
  MOD_CReg<tUWide> INST_toMMIO_rv;
 
 /* Constructor */
 public:
  MOD_mkpipelined(tSimStateHdl simHdl, char const *name, Module *parent);
 
 /* Symbol init methods */
 private:
  void init_symbols_0();
 
 /* Reset signal definitions */
 private:
  tUInt8 PORT_RST_N;
 
 /* Port definitions */
 public:
  tUWide PORT_getIResp_a;
  tUWide PORT_getDResp_a;
  tUWide PORT_getMMIOResp_a;
  tUWide PORT_getIReq;
  tUWide PORT_getDReq;
  tUWide PORT_getMMIOReq;
 
 /* Publicly accessible definitions */
 public:
  tUWide DEF_toMMIO_rv_port1__read____d1828;
  tUWide DEF_toDmem_rv_port1__read____d1824;
  tUWide DEF_toImem_rv_port1__read____d1820;
  tUInt8 DEF_e2w_first__374_BIT_120___d1388;
  tUInt8 DEF_e2w_first__374_BIT_117___d1390;
  tUInt8 DEF_rf_31_readBeforeLaterWrites_0_read____d1501;
  tUInt8 DEF_rd_idx__h82324;
  tUInt8 DEF_rf_30_readBeforeLaterWrites_0_read____d1498;
  tUInt8 DEF_rf_29_readBeforeLaterWrites_0_read____d1495;
  tUInt8 DEF_rf_28_readBeforeLaterWrites_0_read____d1492;
  tUInt8 DEF_rf_27_readBeforeLaterWrites_0_read____d1489;
  tUInt8 DEF_rf_26_readBeforeLaterWrites_0_read____d1486;
  tUInt8 DEF_rf_25_readBeforeLaterWrites_0_read____d1483;
  tUInt8 DEF_rf_24_readBeforeLaterWrites_0_read____d1480;
  tUInt8 DEF_rf_23_readBeforeLaterWrites_0_read____d1477;
  tUInt8 DEF_rf_22_readBeforeLaterWrites_0_read____d1474;
  tUInt8 DEF_rf_21_readBeforeLaterWrites_0_read____d1471;
  tUInt8 DEF_rf_20_readBeforeLaterWrites_0_read____d1468;
  tUInt8 DEF_rf_19_readBeforeLaterWrites_0_read____d1465;
  tUInt8 DEF_rf_18_readBeforeLaterWrites_0_read____d1462;
  tUInt8 DEF_rf_17_readBeforeLaterWrites_0_read____d1459;
  tUInt8 DEF_rf_16_readBeforeLaterWrites_0_read____d1456;
  tUInt8 DEF_rf_15_readBeforeLaterWrites_0_read____d1453;
  tUInt8 DEF_rf_14_readBeforeLaterWrites_0_read____d1450;
  tUInt8 DEF_rf_13_readBeforeLaterWrites_0_read____d1447;
  tUInt8 DEF_rf_12_readBeforeLaterWrites_0_read____d1444;
  tUInt8 DEF_rf_11_readBeforeLaterWrites_0_read____d1441;
  tUInt8 DEF_rf_10_readBeforeLaterWrites_0_read____d1438;
  tUInt8 DEF_rf_9_readBeforeLaterWrites_0_read____d1435;
  tUInt8 DEF_rf_8_readBeforeLaterWrites_0_read____d1432;
  tUInt8 DEF_rf_7_readBeforeLaterWrites_0_read____d1429;
  tUInt8 DEF_rf_6_readBeforeLaterWrites_0_read____d1426;
  tUInt8 DEF_rf_5_readBeforeLaterWrites_0_read____d1423;
  tUInt8 DEF_rf_4_readBeforeLaterWrites_0_read____d1420;
  tUInt8 DEF_rf_3_readBeforeLaterWrites_0_read____d1417;
  tUInt8 DEF_rf_1_readBeforeLaterWrites_0_read____d1411;
  tUInt8 DEF_rf_2_readBeforeLaterWrites_0_read____d1414;
  tUInt8 DEF_NOT_e2w_first__374_BIT_120_388___d1389;
  tUInt8 DEF_d2e_first__84_BIT_112_85_EQ_IF_epoch_readBefor_ETC___d988;
  tUInt8 DEF_d2e_first__84_BITS_188_TO_184___d1006;
  tUInt8 DEF_x__h45562;
  tUInt8 DEF_x__h54483;
  tUWide DEF_d2e_first____d984;
  tUWide DEF_e2w_first____d1374;
  tUWide DEF_fromMMIO_rv_port1__read____d1382;
  tUWide DEF_fromMMIO_rv_port0__read____d1830;
  tUWide DEF_toMMIO_rv_port0__read____d1042;
  tUWide DEF_fromDmem_rv_port1__read____d1384;
  tUWide DEF_fromDmem_rv_port0__read____d1826;
  tUWide DEF_toDmem_rv_port0__read____d1045;
  tUWide DEF_fromImem_rv_port1__read____d602;
  tUWide DEF_fromImem_rv_port0__read____d1822;
  tUWide DEF_toImem_rv_port0__read____d579;
  tUInt32 DEF_currentVal__h45459;
  tUInt32 DEF_x_wget__h42531;
  tUInt32 DEF_currentVal__h88253;
  tUInt32 DEF_x_wget__h40180;
  tUInt32 DEF_x_wget__h40134;
  tUInt32 DEF_currentVal__h88247;
  tUInt32 DEF_x_wget__h39509;
  tUInt32 DEF_x_wget__h39463;
  tUInt32 DEF_currentVal__h88241;
  tUInt32 DEF_x_wget__h38838;
  tUInt32 DEF_x_wget__h38792;
  tUInt32 DEF_currentVal__h88235;
  tUInt32 DEF_x_wget__h38167;
  tUInt32 DEF_x_wget__h38121;
  tUInt32 DEF_currentVal__h88229;
  tUInt32 DEF_x_wget__h37496;
  tUInt32 DEF_x_wget__h37450;
  tUInt32 DEF_currentVal__h88223;
  tUInt32 DEF_x_wget__h36825;
  tUInt32 DEF_x_wget__h36779;
  tUInt32 DEF_currentVal__h88217;
  tUInt32 DEF_x_wget__h36154;
  tUInt32 DEF_x_wget__h36108;
  tUInt32 DEF_currentVal__h88211;
  tUInt32 DEF_x_wget__h35483;
  tUInt32 DEF_x_wget__h35437;
  tUInt32 DEF_currentVal__h88205;
  tUInt32 DEF_x_wget__h34812;
  tUInt32 DEF_x_wget__h34766;
  tUInt32 DEF_currentVal__h88199;
  tUInt32 DEF_x_wget__h34141;
  tUInt32 DEF_x_wget__h34095;
  tUInt32 DEF_currentVal__h88193;
  tUInt32 DEF_x_wget__h33470;
  tUInt32 DEF_x_wget__h33424;
  tUInt32 DEF_currentVal__h88187;
  tUInt32 DEF_x_wget__h32799;
  tUInt32 DEF_x_wget__h32753;
  tUInt32 DEF_currentVal__h88181;
  tUInt32 DEF_x_wget__h32128;
  tUInt32 DEF_x_wget__h32082;
  tUInt32 DEF_currentVal__h88175;
  tUInt32 DEF_x_wget__h31457;
  tUInt32 DEF_x_wget__h31411;
  tUInt32 DEF_currentVal__h88169;
  tUInt32 DEF_x_wget__h30786;
  tUInt32 DEF_x_wget__h30740;
  tUInt32 DEF_currentVal__h88163;
  tUInt32 DEF_x_wget__h30115;
  tUInt32 DEF_x_wget__h30069;
  tUInt32 DEF_currentVal__h88157;
  tUInt32 DEF_x_wget__h29444;
  tUInt32 DEF_x_wget__h29398;
  tUInt32 DEF_currentVal__h88151;
  tUInt32 DEF_x_wget__h28773;
  tUInt32 DEF_x_wget__h28727;
  tUInt32 DEF_currentVal__h88145;
  tUInt32 DEF_x_wget__h28102;
  tUInt32 DEF_x_wget__h28056;
  tUInt32 DEF_currentVal__h88139;
  tUInt32 DEF_x_wget__h27431;
  tUInt32 DEF_x_wget__h27385;
  tUInt32 DEF_currentVal__h88133;
  tUInt32 DEF_x_wget__h26760;
  tUInt32 DEF_x_wget__h26714;
  tUInt32 DEF_currentVal__h88127;
  tUInt32 DEF_x_wget__h26089;
  tUInt32 DEF_x_wget__h26043;
  tUInt32 DEF_currentVal__h88121;
  tUInt32 DEF_x_wget__h25418;
  tUInt32 DEF_x_wget__h25372;
  tUInt32 DEF_currentVal__h88115;
  tUInt32 DEF_x_wget__h24747;
  tUInt32 DEF_x_wget__h24701;
  tUInt32 DEF_currentVal__h88109;
  tUInt32 DEF_x_wget__h24076;
  tUInt32 DEF_x_wget__h24030;
  tUInt32 DEF_currentVal__h88103;
  tUInt32 DEF_x_wget__h23405;
  tUInt32 DEF_x_wget__h23359;
  tUInt32 DEF_currentVal__h88097;
  tUInt32 DEF_x_wget__h22734;
  tUInt32 DEF_x_wget__h22688;
  tUInt32 DEF_currentVal__h88091;
  tUInt32 DEF_x_wget__h22063;
  tUInt32 DEF_x_wget__h22017;
  tUInt32 DEF_currentVal__h88085;
  tUInt32 DEF_x_wget__h21392;
  tUInt32 DEF_x_wget__h21346;
  tUInt32 DEF_currentVal__h88079;
  tUInt32 DEF_x_wget__h20721;
  tUInt32 DEF_x_wget__h20675;
  tUInt32 DEF_currentVal__h88073;
  tUInt32 DEF_x_wget__h20050;
  tUInt32 DEF_x_wget__h20004;
  tUInt32 DEF_currentVal__h88067;
  tUInt32 DEF_x_wget__h19376;
  tUInt32 DEF_x_wget__h19327;
  tUInt8 DEF_currentVal__h93686;
  tUInt8 DEF_x_wget__h41014;
  tUInt8 DEF_rf_0_readBeforeLaterWrites_0_read____d1394;
  tUInt8 DEF_starting__h43765;
  tUInt32 DEF_rv1__h70073;
  tUInt32 DEF_d2e_first__84_BITS_111_TO_80_95_PLUS_IF_d2e_fi_ETC___d1035;
  tUInt32 DEF_d2e_first__84_BITS_111_TO_80_95_PLUS_IF_d2e_fi_ETC___d1036;
  tUInt32 DEF_x__h70454;
  tUInt8 DEF_e2w_first__374_BITS_158_TO_156___d1397;
  tUInt8 DEF_d2e_first__84_BIT_212___d996;
  tUInt8 DEF_d2e_first__84_BIT_208___d1011;
  tUInt8 DEF_d2e_first__84_BIT_183___d990;
  tUInt8 DEF_x__h70077;
  tUInt8 DEF_e2w_first__374_BIT_153___d1380;
  tUInt8 DEF_e2w_first__374_BIT_87___d1375;
  tUInt32 DEF_n__read__h48102;
  tUInt32 DEF_n__read__h48104;
  tUInt32 DEF_n__read__h48106;
  tUInt32 DEF_n__read__h48108;
  tUInt32 DEF_n__read__h48110;
  tUInt32 DEF_n__read__h48112;
  tUInt32 DEF_n__read__h48114;
  tUInt32 DEF_n__read__h48116;
  tUInt32 DEF_n__read__h48118;
  tUInt32 DEF_n__read__h48120;
  tUInt32 DEF_n__read__h48122;
  tUInt32 DEF_n__read__h48124;
  tUInt32 DEF_n__read__h48126;
  tUInt32 DEF_n__read__h48128;
  tUInt32 DEF_n__read__h48130;
  tUInt32 DEF_n__read__h48132;
  tUInt32 DEF_n__read__h48134;
  tUInt32 DEF_n__read__h48136;
  tUInt32 DEF_n__read__h48138;
  tUInt32 DEF_n__read__h48140;
  tUInt32 DEF_n__read__h48142;
  tUInt32 DEF_n__read__h48144;
  tUInt32 DEF_n__read__h48146;
  tUInt32 DEF_n__read__h48148;
  tUInt32 DEF_n__read__h48150;
  tUInt32 DEF_n__read__h48152;
  tUInt32 DEF_n__read__h48154;
  tUInt32 DEF_n__read__h48156;
  tUInt32 DEF_n__read__h48158;
  tUInt32 DEF_n__read__h48160;
  tUInt32 DEF_n__read__h48162;
  tUInt32 DEF_n__read__h48164;
  tUInt32 DEF_def__h40670;
  tUInt32 DEF_def__h39999;
  tUInt32 DEF_def__h39328;
  tUInt32 DEF_def__h38657;
  tUInt32 DEF_def__h37986;
  tUInt32 DEF_def__h37315;
  tUInt32 DEF_def__h36644;
  tUInt32 DEF_def__h35973;
  tUInt32 DEF_def__h35302;
  tUInt32 DEF_def__h34631;
  tUInt32 DEF_def__h33960;
  tUInt32 DEF_def__h33289;
  tUInt32 DEF_def__h32618;
  tUInt32 DEF_def__h31947;
  tUInt32 DEF_def__h31276;
  tUInt32 DEF_def__h30605;
  tUInt32 DEF_def__h29934;
  tUInt32 DEF_def__h29263;
  tUInt32 DEF_def__h28592;
  tUInt32 DEF_def__h27921;
  tUInt32 DEF_def__h27250;
  tUInt32 DEF_def__h26579;
  tUInt32 DEF_def__h25908;
  tUInt32 DEF_def__h25237;
  tUInt32 DEF_def__h24566;
  tUInt32 DEF_def__h23895;
  tUInt32 DEF_def__h23224;
  tUInt32 DEF_def__h22553;
  tUInt32 DEF_def__h21882;
  tUInt32 DEF_def__h21211;
  tUInt32 DEF_def__h20540;
  tUInt32 DEF_def__h19869;
  tUInt32 DEF_imm__h70256;
  tUInt32 DEF_def__h40552;
  tUInt32 DEF_def__h39881;
  tUInt32 DEF_def__h39210;
  tUInt32 DEF_def__h38539;
  tUInt32 DEF_def__h37868;
  tUInt32 DEF_def__h37197;
  tUInt32 DEF_def__h36526;
  tUInt32 DEF_def__h35855;
  tUInt32 DEF_def__h35184;
  tUInt32 DEF_def__h34513;
  tUInt32 DEF_def__h33842;
  tUInt32 DEF_def__h33171;
  tUInt32 DEF_def__h32500;
  tUInt32 DEF_def__h31829;
  tUInt32 DEF_def__h31158;
  tUInt32 DEF_def__h30487;
  tUInt32 DEF_def__h29816;
  tUInt32 DEF_def__h29145;
  tUInt32 DEF_def__h28474;
  tUInt32 DEF_def__h27803;
  tUInt32 DEF_def__h27132;
  tUInt32 DEF_def__h26461;
  tUInt32 DEF_def__h25790;
  tUInt32 DEF_def__h25119;
  tUInt32 DEF_def__h24448;
  tUInt32 DEF_def__h23777;
  tUInt32 DEF_def__h23106;
  tUInt32 DEF_def__h22435;
  tUInt32 DEF_def__h21764;
  tUInt32 DEF_def__h21093;
  tUInt32 DEF_def__h20422;
  tUInt32 DEF_def__h19751;
  tUInt32 DEF_n__read__h43557;
  tUInt32 DEF_def__h43073;
  tUInt8 DEF_IF_d2e_first__84_BIT_212_96_THEN_d2e_first__84_ETC___d998;
  tUInt8 DEF_x_epoch__h45176;
  tUInt8 DEF_def__h41324;
  tUInt8 DEF_e2w_first__374_BITS_92_TO_88_392_EQ_0___d1393;
  tUInt8 DEF_e2w_first__374_BITS_85_TO_84_376_EQ_0b0___d1377;
  tUInt8 DEF_d2e_first__84_BITS_181_TO_180_91_EQ_0b0___d992;
  tUInt8 DEF_NOT_e2w_first__374_BIT_117_390___d1391;
  tUInt8 DEF_d2e_first__84_BIT_183_90_OR_NOT_d2e_first__84__ETC___d994;
  tUInt32 DEF_x__h70735;
  tUInt32 DEF_x__h70572;
  tUInt32 DEF_x__h70502;
 
 /* Local definitions */
 private:
  tUInt32 DEF_TASK_fopen___d575;
  tUInt32 DEF_signed_0___d588;
  tUWide DEF_f2d_first____d683;
  tUInt32 DEF_currentVal__h93587;
  tUInt32 DEF_x_wget__h41619;
  tUInt32 DEF_currentVal__h82799;
  tUInt32 DEF_x_wget__h17727;
  tUInt32 DEF_currentVal__h82794;
  tUInt32 DEF_x_wget__h17230;
  tUInt32 DEF_currentVal__h82789;
  tUInt32 DEF_x_wget__h16733;
  tUInt32 DEF_currentVal__h82784;
  tUInt32 DEF_x_wget__h16236;
  tUInt32 DEF_currentVal__h82779;
  tUInt32 DEF_x_wget__h15739;
  tUInt32 DEF_currentVal__h82774;
  tUInt32 DEF_x_wget__h15242;
  tUInt32 DEF_currentVal__h82769;
  tUInt32 DEF_x_wget__h14745;
  tUInt32 DEF_currentVal__h82764;
  tUInt32 DEF_x_wget__h14248;
  tUInt32 DEF_currentVal__h82759;
  tUInt32 DEF_x_wget__h13751;
  tUInt32 DEF_currentVal__h82754;
  tUInt32 DEF_x_wget__h13254;
  tUInt32 DEF_currentVal__h82749;
  tUInt32 DEF_x_wget__h12757;
  tUInt32 DEF_currentVal__h82744;
  tUInt32 DEF_x_wget__h12260;
  tUInt32 DEF_currentVal__h82739;
  tUInt32 DEF_x_wget__h11763;
  tUInt32 DEF_currentVal__h82734;
  tUInt32 DEF_x_wget__h11266;
  tUInt32 DEF_currentVal__h82729;
  tUInt32 DEF_x_wget__h10769;
  tUInt32 DEF_currentVal__h82724;
  tUInt32 DEF_x_wget__h10272;
  tUInt32 DEF_currentVal__h82719;
  tUInt32 DEF_x_wget__h9775;
  tUInt32 DEF_currentVal__h82714;
  tUInt32 DEF_x_wget__h9278;
  tUInt32 DEF_currentVal__h82709;
  tUInt32 DEF_x_wget__h8781;
  tUInt32 DEF_currentVal__h82704;
  tUInt32 DEF_x_wget__h8284;
  tUInt32 DEF_currentVal__h82699;
  tUInt32 DEF_x_wget__h7787;
  tUInt32 DEF_currentVal__h82694;
  tUInt32 DEF_x_wget__h7290;
  tUInt32 DEF_currentVal__h82689;
  tUInt32 DEF_x_wget__h6793;
  tUInt32 DEF_currentVal__h82684;
  tUInt32 DEF_x_wget__h6296;
  tUInt32 DEF_currentVal__h82679;
  tUInt32 DEF_x_wget__h5799;
  tUInt32 DEF_currentVal__h82674;
  tUInt32 DEF_x_wget__h5302;
  tUInt32 DEF_currentVal__h82669;
  tUInt32 DEF_x_wget__h4805;
  tUInt32 DEF_currentVal__h82664;
  tUInt32 DEF_x_wget__h4308;
  tUInt32 DEF_currentVal__h82659;
  tUInt32 DEF_x_wget__h3811;
  tUInt32 DEF_currentVal__h82654;
  tUInt32 DEF_x_wget__h3314;
  tUInt32 DEF_currentVal__h82649;
  tUInt32 DEF_x_wget__h2817;
  tUInt32 DEF_currentVal__h82644;
  tUInt32 DEF_lfh___d576;
  tUWide DEF_f2d_first__83_BITS_112_TO_48___d811;
  tUInt32 DEF_def__h18032;
  tUInt32 DEF_def__h17535;
  tUInt32 DEF_def__h17038;
  tUInt32 DEF_def__h16541;
  tUInt32 DEF_def__h16044;
  tUInt32 DEF_def__h15547;
  tUInt32 DEF_def__h15050;
  tUInt32 DEF_def__h14553;
  tUInt32 DEF_def__h14056;
  tUInt32 DEF_def__h13559;
  tUInt32 DEF_def__h13062;
  tUInt32 DEF_def__h12565;
  tUInt32 DEF_def__h12068;
  tUInt32 DEF_def__h11571;
  tUInt32 DEF_def__h11074;
  tUInt32 DEF_def__h10577;
  tUInt32 DEF_def__h10080;
  tUInt32 DEF_def__h9583;
  tUInt32 DEF_def__h9086;
  tUInt32 DEF_def__h8589;
  tUInt32 DEF_def__h8092;
  tUInt32 DEF_def__h7595;
  tUInt32 DEF_def__h7098;
  tUInt32 DEF_def__h6601;
  tUInt32 DEF_def__h6104;
  tUInt32 DEF_def__h5607;
  tUInt32 DEF_def__h5110;
  tUInt32 DEF_def__h4613;
  tUInt32 DEF_def__h4116;
  tUInt32 DEF_def__h3619;
  tUInt32 DEF_def__h3122;
  tUInt32 DEF_def__h41927;
  tUWide DEF_IF_fromImem_rv_port1__read__02_BITS_6_TO_0_86__ETC___d883;
  tUWide DEF_IF_fromImem_rv_port1__read__02_BITS_19_TO_15_7_ETC___d882;
  tUWide DEF_NOT_d2e_first__84_BIT_183_90_056_AND_d2e_first_ETC___d1170;
  tUWide DEF_d2e_first__84_BITS_216_TO_177_142_CONCAT_IF_IF_ETC___d1169;
  tUWide DEF_IF_d2e_first__84_BITS_183_TO_181_086_EQ_0b110__ETC___d1168;
  tUWide DEF_IF_pcF_port_0_whas__54_THEN_pcF_port_0_wget__5_ETC___d595;
  tUWide DEF__16_CONCAT_IF_pcF_port_0_whas__54_THEN_pcF_port_ETC___d591;
  tUWide DEF__1_CONCAT_IF_d2e_first__84_BIT_182_060_THEN_IF__ETC___d1078;
  tUWide DEF__1_CONCAT_getMMIOResp_a___d1829;
  tUWide DEF__1_CONCAT_getDResp_a___d1825;
  tUWide DEF__1_CONCAT_getIResp_a___d1821;
  tUWide DEF__0_CONCAT_DONTCARE___d682;
 
 /* Rules */
 public:
  void RL_rf_0_canonicalize();
  void RL_rf_1_canonicalize();
  void RL_rf_2_canonicalize();
  void RL_rf_3_canonicalize();
  void RL_rf_4_canonicalize();
  void RL_rf_5_canonicalize();
  void RL_rf_6_canonicalize();
  void RL_rf_7_canonicalize();
  void RL_rf_8_canonicalize();
  void RL_rf_9_canonicalize();
  void RL_rf_10_canonicalize();
  void RL_rf_11_canonicalize();
  void RL_rf_12_canonicalize();
  void RL_rf_13_canonicalize();
  void RL_rf_14_canonicalize();
  void RL_rf_15_canonicalize();
  void RL_rf_16_canonicalize();
  void RL_rf_17_canonicalize();
  void RL_rf_18_canonicalize();
  void RL_rf_19_canonicalize();
  void RL_rf_20_canonicalize();
  void RL_rf_21_canonicalize();
  void RL_rf_22_canonicalize();
  void RL_rf_23_canonicalize();
  void RL_rf_24_canonicalize();
  void RL_rf_25_canonicalize();
  void RL_rf_26_canonicalize();
  void RL_rf_27_canonicalize();
  void RL_rf_28_canonicalize();
  void RL_rf_29_canonicalize();
  void RL_rf_30_canonicalize();
  void RL_rf_31_canonicalize();
  void RL_scoreboard_0_canonicalize();
  void RL_scoreboard_1_canonicalize();
  void RL_scoreboard_2_canonicalize();
  void RL_scoreboard_3_canonicalize();
  void RL_scoreboard_4_canonicalize();
  void RL_scoreboard_5_canonicalize();
  void RL_scoreboard_6_canonicalize();
  void RL_scoreboard_7_canonicalize();
  void RL_scoreboard_8_canonicalize();
  void RL_scoreboard_9_canonicalize();
  void RL_scoreboard_10_canonicalize();
  void RL_scoreboard_11_canonicalize();
  void RL_scoreboard_12_canonicalize();
  void RL_scoreboard_13_canonicalize();
  void RL_scoreboard_14_canonicalize();
  void RL_scoreboard_15_canonicalize();
  void RL_scoreboard_16_canonicalize();
  void RL_scoreboard_17_canonicalize();
  void RL_scoreboard_18_canonicalize();
  void RL_scoreboard_19_canonicalize();
  void RL_scoreboard_20_canonicalize();
  void RL_scoreboard_21_canonicalize();
  void RL_scoreboard_22_canonicalize();
  void RL_scoreboard_23_canonicalize();
  void RL_scoreboard_24_canonicalize();
  void RL_scoreboard_25_canonicalize();
  void RL_scoreboard_26_canonicalize();
  void RL_scoreboard_27_canonicalize();
  void RL_scoreboard_28_canonicalize();
  void RL_scoreboard_29_canonicalize();
  void RL_scoreboard_30_canonicalize();
  void RL_scoreboard_31_canonicalize();
  void RL_epoch_canonicalize();
  void RL_pcF_canonicalize();
  void RL_counter_canonicalize();
  void RL_do_tic_logging();
  void RL_fetch();
  void RL_decode();
  void RL_execute();
  void RL_writeback();
  void RL_administrative_konata_commit();
  void RL_administrative_konata_flush();
 
 /* Methods */
 public:
  tUWide METH_getIReq();
  tUInt8 METH_RDY_getIReq();
  void METH_getIResp(tUWide ARG_getIResp_a);
  tUInt8 METH_RDY_getIResp();
  tUWide METH_getDReq();
  tUInt8 METH_RDY_getDReq();
  void METH_getDResp(tUWide ARG_getDResp_a);
  tUInt8 METH_RDY_getDResp();
  tUWide METH_getMMIOReq();
  tUInt8 METH_RDY_getMMIOReq();
  void METH_getMMIOResp(tUWide ARG_getMMIOResp_a);
  tUInt8 METH_RDY_getMMIOResp();
 
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
  void dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkpipelined &backing);
  void vcd_defs(tVCDDumpType dt, MOD_mkpipelined &backing);
  void vcd_prims(tVCDDumpType dt, MOD_mkpipelined &backing);
};

#endif /* ifndef __mkpipelined_h__ */
