/*
 * Generated by Bluespec Compiler, version 2023.01-6-g034050db (build 034050db)
 * 
 * On Mon May 15 22:18:31 EDT 2023
 * 
 */
#include "bluesim_primitives.h"
#include "model_mktop_bsv.h"

#include <cstdlib>
#include <time.h>
#include "bluesim_kernel_api.h"
#include "bs_vcd.h"
#include "bs_reset.h"


/* Constructor */
MODEL_mktop_bsv::MODEL_mktop_bsv()
{
  mktop_bsv_instance = NULL;
}

/* Function for creating a new model */
void * new_MODEL_mktop_bsv()
{
  MODEL_mktop_bsv *model = new MODEL_mktop_bsv();
  return (void *)(model);
}

/* Schedule functions */

static void schedule_posedge_CLK(tSimStateHdl simHdl, void *instance_ptr)
       {
	 MOD_mktop_bsv &INST_top = *((MOD_mktop_bsv *)(instance_ptr));
	 tUInt8 DEF_INST_top_DEF_NOT_rv_core_starting_00___d108;
	 tUInt8 DEF_INST_top_DEF_NOT_rv_core_toMMIO_rv_port0__read__41_BIT_68_42___d343;
	 tUInt8 DEF_INST_top_DEF_IF_rv_core_rv1_94_PLUS_IF_rv_core_dInst_88_BIT_ETC___d347;
	 tUInt8 DEF_INST_top_DEF_IF_rv_core_mem_business_56_BIT_0_57_THEN_rv_co_ETC___d462;
	 tUInt8 DEF_INST_top_DEF_IF_rv_core_mem_business_56_BITS_5_TO_3_67_EQ_0_ETC___d478;
	 tUInt8 DEF_INST_top_DEF_bram_serverAdapterA_s1_5_BIT_1___d40;
	 tUInt8 DEF_INST_top_DEF_bram_serverAdapterB_s1_4_BIT_1___d89;
	 tUInt8 DEF_INST_top_DEF_bram_serverAdapterA_outData_ff_i_notFull____d38;
	 tUInt8 DEF_INST_top_DEF_bram_serverAdapterA_outData_beforeDeq_read____d45;
	 tUInt8 DEF_INST_top_DEF_bram_serverAdapterA_outData_enqw_whas____d1;
	 tUInt8 DEF_INST_top_DEF_bram_serverAdapterA_outData_dequeueing_whas____d2;
	 tUInt8 DEF_INST_top_DEF_bram_serverAdapterB_outData_ff_i_notFull____d87;
	 tUInt8 DEF_INST_top_DEF_bram_serverAdapterB_outData_beforeDeq_read____d94;
	 tUInt8 DEF_INST_top_DEF_bram_serverAdapterB_outData_enqw_whas____d51;
	 tUInt8 DEF_INST_top_DEF_bram_serverAdapterB_outData_dequeueing_whas____d52;
	 tUInt8 DEF_INST_top_DEF_rv_core_state__h7371;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_bram_serverAdapterA_outData_enqueue;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_bram_serverAdapterA_outData_enqueue;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_bram_serverAdapterA_outData_dequeue;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_bram_serverAdapterA_outData_dequeue;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_bram_serverAdapterA_cnt_finalAdd;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_bram_serverAdapterA_cnt_finalAdd;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_bram_serverAdapterA_s1__dreg_update;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_bram_serverAdapterA_s1__dreg_update;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_bram_serverAdapterA_stageReadResponseAlways;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_bram_serverAdapterA_stageReadResponseAlways;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_bram_serverAdapterA_moveToOutFIFO;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_bram_serverAdapterA_moveToOutFIFO;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_bram_serverAdapterA_overRun;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_bram_serverAdapterA_overRun;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_bram_serverAdapterB_outData_enqueue;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_bram_serverAdapterB_outData_enqueue;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_bram_serverAdapterB_outData_dequeue;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_bram_serverAdapterB_outData_dequeue;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_bram_serverAdapterB_cnt_finalAdd;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_bram_serverAdapterB_cnt_finalAdd;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_bram_serverAdapterB_s1__dreg_update;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_bram_serverAdapterB_s1__dreg_update;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_bram_serverAdapterB_stageReadResponseAlways;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_bram_serverAdapterB_stageReadResponseAlways;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_bram_serverAdapterB_moveToOutFIFO;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_bram_serverAdapterB_moveToOutFIFO;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_bram_serverAdapterB_overRun;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_bram_serverAdapterB_overRun;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_rv_core_do_tic_logging;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_rv_core_do_tic_logging;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_rv_core_fetch;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_rv_core_fetch;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_rv_core_decode;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_rv_core_decode;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_rv_core_execute;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_rv_core_execute;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_rv_core_writeback;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_rv_core_writeback;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_rv_core_administrative_konata_commit;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_rv_core_administrative_konata_commit;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_rv_core_administrative_konata_flush;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_rv_core_administrative_konata_flush;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_tic;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_tic;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_requestI;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_requestI;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_responseI;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_responseI;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_requestD;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_requestD;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_responseD;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_responseD;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_requestMMIO;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_requestMMIO;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_responseMMIO;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_responseMMIO;
	 INST_top.DEF_bram_serverAdapterA_s1___d35 = INST_top.INST_bram_serverAdapterA_s1.METH_read();
	 DEF_INST_top_DEF_bram_serverAdapterA_outData_ff_i_notFull____d38 = INST_top.INST_bram_serverAdapterA_outData_ff.METH_i_notFull();
	 DEF_INST_top_DEF_bram_serverAdapterA_s1_5_BIT_1___d40 = (tUInt8)((INST_top.DEF_bram_serverAdapterA_s1___d35) >> 1u);
	 INST_top.DEF_bram_serverAdapterA_s1_5_BIT_0___d36 = (tUInt8)((tUInt8)1u & (INST_top.DEF_bram_serverAdapterA_s1___d35));
	 DEF_INST_top_DEF_CAN_FIRE_RL_bram_serverAdapterA_moveToOutFIFO = (!(INST_top.DEF_bram_serverAdapterA_s1_5_BIT_0___d36) || DEF_INST_top_DEF_bram_serverAdapterA_outData_ff_i_notFull____d38) && DEF_INST_top_DEF_bram_serverAdapterA_s1_5_BIT_1___d40;
	 DEF_INST_top_DEF_WILL_FIRE_RL_bram_serverAdapterA_moveToOutFIFO = DEF_INST_top_DEF_CAN_FIRE_RL_bram_serverAdapterA_moveToOutFIFO;
	 DEF_INST_top_DEF_bram_serverAdapterA_outData_beforeDeq_read____d45 = INST_top.INST_bram_serverAdapterA_outData_beforeDeq.METH_read();
	 DEF_INST_top_DEF_CAN_FIRE_RL_bram_serverAdapterA_overRun = DEF_INST_top_DEF_bram_serverAdapterA_s1_5_BIT_1___d40 && ((!INST_top.INST_bram_serverAdapterA_outData_beforeEnq.METH_read() || !DEF_INST_top_DEF_bram_serverAdapterA_outData_beforeDeq_read____d45) || !DEF_INST_top_DEF_bram_serverAdapterA_outData_ff_i_notFull____d38);
	 DEF_INST_top_DEF_WILL_FIRE_RL_bram_serverAdapterA_overRun = DEF_INST_top_DEF_CAN_FIRE_RL_bram_serverAdapterA_overRun;
	 DEF_INST_top_DEF_CAN_FIRE_RL_bram_serverAdapterA_s1__dreg_update = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_bram_serverAdapterA_s1__dreg_update = DEF_INST_top_DEF_CAN_FIRE_RL_bram_serverAdapterA_s1__dreg_update;
	 INST_top.DEF_bram_serverAdapterB_s1___d84 = INST_top.INST_bram_serverAdapterB_s1.METH_read();
	 DEF_INST_top_DEF_bram_serverAdapterB_outData_ff_i_notFull____d87 = INST_top.INST_bram_serverAdapterB_outData_ff.METH_i_notFull();
	 DEF_INST_top_DEF_bram_serverAdapterB_s1_4_BIT_1___d89 = (tUInt8)((INST_top.DEF_bram_serverAdapterB_s1___d84) >> 1u);
	 INST_top.DEF_bram_serverAdapterB_s1_4_BIT_0___d85 = (tUInt8)((tUInt8)1u & (INST_top.DEF_bram_serverAdapterB_s1___d84));
	 DEF_INST_top_DEF_CAN_FIRE_RL_bram_serverAdapterB_moveToOutFIFO = (!(INST_top.DEF_bram_serverAdapterB_s1_4_BIT_0___d85) || DEF_INST_top_DEF_bram_serverAdapterB_outData_ff_i_notFull____d87) && DEF_INST_top_DEF_bram_serverAdapterB_s1_4_BIT_1___d89;
	 DEF_INST_top_DEF_WILL_FIRE_RL_bram_serverAdapterB_moveToOutFIFO = DEF_INST_top_DEF_CAN_FIRE_RL_bram_serverAdapterB_moveToOutFIFO;
	 DEF_INST_top_DEF_bram_serverAdapterB_outData_beforeDeq_read____d94 = INST_top.INST_bram_serverAdapterB_outData_beforeDeq.METH_read();
	 DEF_INST_top_DEF_CAN_FIRE_RL_bram_serverAdapterB_overRun = DEF_INST_top_DEF_bram_serverAdapterB_s1_4_BIT_1___d89 && ((!INST_top.INST_bram_serverAdapterB_outData_beforeEnq.METH_read() || !DEF_INST_top_DEF_bram_serverAdapterB_outData_beforeDeq_read____d94) || !DEF_INST_top_DEF_bram_serverAdapterB_outData_ff_i_notFull____d87);
	 DEF_INST_top_DEF_WILL_FIRE_RL_bram_serverAdapterB_overRun = DEF_INST_top_DEF_CAN_FIRE_RL_bram_serverAdapterB_overRun;
	 DEF_INST_top_DEF_CAN_FIRE_RL_bram_serverAdapterB_s1__dreg_update = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_bram_serverAdapterB_s1__dreg_update = DEF_INST_top_DEF_CAN_FIRE_RL_bram_serverAdapterB_s1__dreg_update;
	 INST_top.DEF_rv_core_fromMMIO_rv_port0__read____d648 = INST_top.INST_rv_core_fromMMIO_rv.METH_port0__read();
	 DEF_INST_top_DEF_CAN_FIRE_RL_responseMMIO = INST_top.INST_mmioreq.METH_i_notEmpty() && !INST_top.DEF_rv_core_fromMMIO_rv_port0__read____d648.get_bits_in_word8(2u,
																					4u,
																					1u);
	 DEF_INST_top_DEF_WILL_FIRE_RL_responseMMIO = DEF_INST_top_DEF_CAN_FIRE_RL_responseMMIO;
	 DEF_INST_top_DEF_CAN_FIRE_RL_rv_core_administrative_konata_commit = INST_top.INST_rv_core_retired.METH_i_notEmpty();
	 DEF_INST_top_DEF_WILL_FIRE_RL_rv_core_administrative_konata_commit = DEF_INST_top_DEF_CAN_FIRE_RL_rv_core_administrative_konata_commit;
	 DEF_INST_top_DEF_CAN_FIRE_RL_rv_core_administrative_konata_flush = INST_top.INST_rv_core_squashed.METH_i_notEmpty();
	 DEF_INST_top_DEF_WILL_FIRE_RL_rv_core_administrative_konata_flush = DEF_INST_top_DEF_CAN_FIRE_RL_rv_core_administrative_konata_flush;
	 DEF_INST_top_DEF_CAN_FIRE_RL_rv_core_do_tic_logging = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_rv_core_do_tic_logging = DEF_INST_top_DEF_CAN_FIRE_RL_rv_core_do_tic_logging;
	 INST_top.DEF_rv_core_toMMIO_rv_port0__read____d341 = INST_top.INST_rv_core_toMMIO_rv.METH_port0__read();
	 INST_top.DEF_rv_core_toDmem_rv_port0__read____d344 = INST_top.INST_rv_core_toDmem_rv.METH_port0__read();
	 INST_top.DEF_rv_core_dInst___d288 = INST_top.INST_rv_core_dInst.METH_read();
	 INST_top.DEF_rv_core_dInst_88_BITS_11_TO_7___d305 = (tUInt8)((tUInt8)31u & ((INST_top.DEF_rv_core_dInst___d288) >> 7u));
	 INST_top.DEF_rv_core_dInst_88_BIT_6___d289 = (tUInt8)((tUInt8)1u & ((INST_top.DEF_rv_core_dInst___d288) >> 6u));
	 INST_top.DEF_rs1_val__h13042 = INST_top.INST_rv_core_rv1.METH_read();
	 DEF_INST_top_DEF_rv_core_state__h7371 = INST_top.INST_rv_core_state.METH_read();
	 INST_top.DEF_rv_core_starting__h6914 = INST_top.INST_rv_core_starting.METH_read();
	 INST_top.DEF_rv_core_dInst_88_BIT_35___d295 = (tUInt8)((tUInt8)1u & ((INST_top.DEF_rv_core_dInst___d288) >> 35u));
	 INST_top.DEF_x__h11245 = (tUInt32)(4095u & ((INST_top.DEF_rv_core_dInst___d288) >> 20u));
	 INST_top.DEF_rv_core_dInst_88_BIT_31___d310 = (tUInt8)((tUInt8)1u & ((INST_top.DEF_rv_core_dInst___d288) >> 31u));
	 INST_top.DEF_IF_rv_core_dInst_88_BIT_35_95_THEN_rv_core_dIn_ETC___d297 = (tUInt8)((tUInt8)7u & ((INST_top.DEF_rv_core_dInst___d288) >> 32u));
	 DEF_INST_top_DEF_NOT_rv_core_toMMIO_rv_port0__read__41_BIT_68_42___d343 = !INST_top.DEF_rv_core_toMMIO_rv_port0__read____d341.get_bits_in_word8(2u,
																			 4u,
																			 1u);
	 INST_top.DEF_rv_core_dInst_88_BITS_4_TO_3_90_EQ_0b0___d291 = ((tUInt8)((tUInt8)3u & ((INST_top.DEF_rv_core_dInst___d288) >> 3u))) == (tUInt8)0u;
	 INST_top.DEF_rv_core_dInst_88_BIT_6_89_OR_NOT_rv_core_dInst_ETC___d293 = INST_top.DEF_rv_core_dInst_88_BIT_6___d289 || !(INST_top.DEF_rv_core_dInst_88_BITS_4_TO_3_90_EQ_0b0___d291);
	 DEF_INST_top_DEF_NOT_rv_core_starting_00___d108 = !(INST_top.DEF_rv_core_starting__h6914);
	 INST_top.DEF_x__h11361 = 8191u & (((((((tUInt32)(INST_top.DEF_rv_core_dInst_88_BIT_31___d310)) << 12u) | (((tUInt32)((tUInt8)((tUInt8)1u & ((INST_top.DEF_rv_core_dInst___d288) >> 7u)))) << 11u)) | (((tUInt32)((tUInt8)((tUInt8)63u & ((INST_top.DEF_rv_core_dInst___d288) >> 25u)))) << 5u)) | (((tUInt32)((tUInt8)((tUInt8)15u & ((INST_top.DEF_rv_core_dInst___d288) >> 8u)))) << 1u)) | (tUInt32)((tUInt8)0u));
	 INST_top.DEF_x__h11522 = 2097151u & (((((((tUInt32)(INST_top.DEF_rv_core_dInst_88_BIT_31___d310)) << 20u) | (((tUInt32)((tUInt8)((tUInt8)255u & ((INST_top.DEF_rv_core_dInst___d288) >> 12u)))) << 12u)) | (((tUInt32)((tUInt8)((tUInt8)1u & ((INST_top.DEF_rv_core_dInst___d288) >> 20u)))) << 11u)) | (((tUInt32)(1023u & ((INST_top.DEF_rv_core_dInst___d288) >> 21u))) << 1u)) | (tUInt32)((tUInt8)0u));
	 INST_top.DEF_x__h11292 = 4095u & ((((tUInt32)((tUInt8)((tUInt8)127u & ((INST_top.DEF_rv_core_dInst___d288) >> 25u)))) << 5u) | (tUInt32)(INST_top.DEF_rv_core_dInst_88_BITS_11_TO_7___d305));
	 INST_top.DEF_imm__h11045 = INST_top.DEF_rv_core_dInst_88_BIT_35___d295 && (INST_top.DEF_IF_rv_core_dInst_88_BIT_35_95_THEN_rv_core_dIn_ETC___d297) == (tUInt8)0u ? primSignExt32(32u,
																							  12u,
																							  (tUInt32)(INST_top.DEF_x__h11245)) : (INST_top.DEF_rv_core_dInst_88_BIT_35___d295 && (INST_top.DEF_IF_rv_core_dInst_88_BIT_35_95_THEN_rv_core_dIn_ETC___d297) == (tUInt8)1u ? primSignExt32(32u,
																																														      12u,
																																														      (tUInt32)(INST_top.DEF_x__h11292)) : (INST_top.DEF_rv_core_dInst_88_BIT_35___d295 && (INST_top.DEF_IF_rv_core_dInst_88_BIT_35_95_THEN_rv_core_dIn_ETC___d297) == (tUInt8)2u ? primSignExt32(32u,
																																																																						  13u,
																																																																						  (tUInt32)(INST_top.DEF_x__h11361)) : (INST_top.DEF_rv_core_dInst_88_BIT_35___d295 && (INST_top.DEF_IF_rv_core_dInst_88_BIT_35_95_THEN_rv_core_dIn_ETC___d297) == (tUInt8)3u ? ((tUInt32)(1048575u & ((INST_top.DEF_rv_core_dInst___d288) >> 12u))) << 12u : (INST_top.DEF_rv_core_dInst_88_BIT_35___d295 && (INST_top.DEF_IF_rv_core_dInst_88_BIT_35_95_THEN_rv_core_dIn_ETC___d297) == (tUInt8)4u ? primSignExt32(32u,
																																																																																																																								     21u,
																																																																																																																								     (tUInt32)(INST_top.DEF_x__h11522)) : 0u))));
	 INST_top.DEF_rv_core_rv1_94_PLUS_IF_rv_core_dInst_88_BIT_35_ETC___d334 = (INST_top.DEF_rs1_val__h13042) + (INST_top.DEF_imm__h11045);
	 INST_top.DEF_rv_core_rv1_94_PLUS_IF_rv_core_dInst_88_BIT_35_ETC___d335 = (tUInt32)((INST_top.DEF_rv_core_rv1_94_PLUS_IF_rv_core_dInst_88_BIT_35_ETC___d334) >> 2u);
	 switch (INST_top.DEF_rv_core_rv1_94_PLUS_IF_rv_core_dInst_88_BIT_35_ETC___d335) {
	 case 1006649340u:
	 case 1006649341u:
	 case 1006649342u:
	   DEF_INST_top_DEF_IF_rv_core_rv1_94_PLUS_IF_rv_core_dInst_88_BIT_ETC___d347 = DEF_INST_top_DEF_NOT_rv_core_toMMIO_rv_port0__read__41_BIT_68_42___d343;
	   break;
	 default:
	   DEF_INST_top_DEF_IF_rv_core_rv1_94_PLUS_IF_rv_core_dInst_88_BIT_ETC___d347 = !INST_top.DEF_rv_core_toDmem_rv_port0__read____d344.get_bits_in_word8(2u,
																			      4u,
																			      1u);
	 }
	 DEF_INST_top_DEF_CAN_FIRE_RL_rv_core_execute = (INST_top.DEF_rv_core_dInst_88_BIT_6_89_OR_NOT_rv_core_dInst_ETC___d293 || DEF_INST_top_DEF_IF_rv_core_rv1_94_PLUS_IF_rv_core_dInst_88_BIT_ETC___d347) && (DEF_INST_top_DEF_rv_core_state__h7371 == (tUInt8)2u && DEF_INST_top_DEF_NOT_rv_core_starting_00___d108);
	 DEF_INST_top_DEF_WILL_FIRE_RL_rv_core_execute = DEF_INST_top_DEF_CAN_FIRE_RL_rv_core_execute;
	 INST_top.DEF_rv_core_toImem_rv_port0__read____d103 = INST_top.INST_rv_core_toImem_rv.METH_port0__read();
	 DEF_INST_top_DEF_CAN_FIRE_RL_rv_core_fetch = !INST_top.DEF_rv_core_toImem_rv_port0__read____d103.get_bits_in_word8(2u,
															    4u,
															    1u) && (DEF_INST_top_DEF_rv_core_state__h7371 == (tUInt8)0u && DEF_INST_top_DEF_NOT_rv_core_starting_00___d108);
	 DEF_INST_top_DEF_WILL_FIRE_RL_rv_core_fetch = DEF_INST_top_DEF_CAN_FIRE_RL_rv_core_fetch;
	 DEF_INST_top_DEF_CAN_FIRE_RL_tic = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_tic = DEF_INST_top_DEF_CAN_FIRE_RL_tic;
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_bram_serverAdapterA_overRun)
	   INST_top.RL_bram_serverAdapterA_overRun();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_bram_serverAdapterA_moveToOutFIFO)
	   INST_top.RL_bram_serverAdapterA_moveToOutFIFO();
	 INST_top.DEF_rv_core_fromDmem_rv_port0__read____d620 = INST_top.INST_rv_core_fromDmem_rv.METH_port0__read();
	 DEF_INST_top_DEF_bram_serverAdapterA_outData_enqw_whas____d1 = INST_top.INST_bram_serverAdapterA_outData_enqw.METH_whas();
	 INST_top.DEF_bram_serverAdapterA_outData_ff_i_notEmpty____d4 = INST_top.INST_bram_serverAdapterA_outData_ff.METH_i_notEmpty();
	 DEF_INST_top_DEF_CAN_FIRE_RL_responseD = (DEF_INST_top_DEF_bram_serverAdapterA_outData_beforeDeq_read____d45 && (INST_top.DEF_bram_serverAdapterA_outData_ff_i_notEmpty____d4 || DEF_INST_top_DEF_bram_serverAdapterA_outData_enqw_whas____d1)) && !INST_top.DEF_rv_core_fromDmem_rv_port0__read____d620.get_bits_in_word8(2u,
																																								    4u,
																																								    1u);
	 DEF_INST_top_DEF_WILL_FIRE_RL_responseD = DEF_INST_top_DEF_CAN_FIRE_RL_responseD;
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_bram_serverAdapterB_overRun)
	   INST_top.RL_bram_serverAdapterB_overRun();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_bram_serverAdapterB_moveToOutFIFO)
	   INST_top.RL_bram_serverAdapterB_moveToOutFIFO();
	 INST_top.DEF_rv_core_fromImem_rv_port0__read____d598 = INST_top.INST_rv_core_fromImem_rv.METH_port0__read();
	 DEF_INST_top_DEF_bram_serverAdapterB_outData_enqw_whas____d51 = INST_top.INST_bram_serverAdapterB_outData_enqw.METH_whas();
	 INST_top.DEF_bram_serverAdapterB_outData_ff_i_notEmpty____d54 = INST_top.INST_bram_serverAdapterB_outData_ff.METH_i_notEmpty();
	 DEF_INST_top_DEF_CAN_FIRE_RL_responseI = (DEF_INST_top_DEF_bram_serverAdapterB_outData_beforeDeq_read____d94 && (INST_top.DEF_bram_serverAdapterB_outData_ff_i_notEmpty____d54 || DEF_INST_top_DEF_bram_serverAdapterB_outData_enqw_whas____d51)) && !INST_top.DEF_rv_core_fromImem_rv_port0__read____d598.get_bits_in_word8(2u,
																																								      4u,
																																								      1u);
	 DEF_INST_top_DEF_WILL_FIRE_RL_responseI = DEF_INST_top_DEF_CAN_FIRE_RL_responseI;
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_responseD)
	   INST_top.RL_responseD();
	 DEF_INST_top_DEF_bram_serverAdapterA_outData_dequeueing_whas____d2 = INST_top.INST_bram_serverAdapterA_outData_dequeueing.METH_whas();
	 DEF_INST_top_DEF_CAN_FIRE_RL_bram_serverAdapterA_outData_dequeue = DEF_INST_top_DEF_bram_serverAdapterA_outData_dequeueing_whas____d2 && INST_top.DEF_bram_serverAdapterA_outData_ff_i_notEmpty____d4;
	 DEF_INST_top_DEF_WILL_FIRE_RL_bram_serverAdapterA_outData_dequeue = DEF_INST_top_DEF_CAN_FIRE_RL_bram_serverAdapterA_outData_dequeue;
	 DEF_INST_top_DEF_CAN_FIRE_RL_bram_serverAdapterA_outData_enqueue = DEF_INST_top_DEF_bram_serverAdapterA_outData_enqw_whas____d1 && (!DEF_INST_top_DEF_bram_serverAdapterA_outData_dequeueing_whas____d2 || INST_top.DEF_bram_serverAdapterA_outData_ff_i_notEmpty____d4);
	 DEF_INST_top_DEF_WILL_FIRE_RL_bram_serverAdapterA_outData_enqueue = DEF_INST_top_DEF_CAN_FIRE_RL_bram_serverAdapterA_outData_enqueue;
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_bram_serverAdapterA_outData_dequeue)
	   INST_top.RL_bram_serverAdapterA_outData_dequeue();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_bram_serverAdapterA_outData_enqueue)
	   INST_top.RL_bram_serverAdapterA_outData_enqueue();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_responseI)
	   INST_top.RL_responseI();
	 DEF_INST_top_DEF_bram_serverAdapterB_outData_dequeueing_whas____d52 = INST_top.INST_bram_serverAdapterB_outData_dequeueing.METH_whas();
	 DEF_INST_top_DEF_CAN_FIRE_RL_bram_serverAdapterB_outData_dequeue = DEF_INST_top_DEF_bram_serverAdapterB_outData_dequeueing_whas____d52 && INST_top.DEF_bram_serverAdapterB_outData_ff_i_notEmpty____d54;
	 DEF_INST_top_DEF_WILL_FIRE_RL_bram_serverAdapterB_outData_dequeue = DEF_INST_top_DEF_CAN_FIRE_RL_bram_serverAdapterB_outData_dequeue;
	 DEF_INST_top_DEF_CAN_FIRE_RL_bram_serverAdapterB_outData_enqueue = DEF_INST_top_DEF_bram_serverAdapterB_outData_enqw_whas____d51 && (!DEF_INST_top_DEF_bram_serverAdapterB_outData_dequeueing_whas____d52 || INST_top.DEF_bram_serverAdapterB_outData_ff_i_notEmpty____d54);
	 DEF_INST_top_DEF_WILL_FIRE_RL_bram_serverAdapterB_outData_enqueue = DEF_INST_top_DEF_CAN_FIRE_RL_bram_serverAdapterB_outData_enqueue;
	 INST_top.DEF_rv_core_fromImem_rv_port1__read____d116 = INST_top.INST_rv_core_fromImem_rv.METH_port1__read();
	 DEF_INST_top_DEF_CAN_FIRE_RL_rv_core_decode = INST_top.DEF_rv_core_fromImem_rv_port1__read____d116.get_bits_in_word8(2u,
															      4u,
															      1u) && (DEF_INST_top_DEF_rv_core_state__h7371 == (tUInt8)1u && DEF_INST_top_DEF_NOT_rv_core_starting_00___d108);
	 DEF_INST_top_DEF_WILL_FIRE_RL_rv_core_decode = DEF_INST_top_DEF_CAN_FIRE_RL_rv_core_decode;
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_bram_serverAdapterB_outData_dequeue)
	   INST_top.RL_bram_serverAdapterB_outData_dequeue();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_bram_serverAdapterB_outData_enqueue)
	   INST_top.RL_bram_serverAdapterB_outData_enqueue();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_responseMMIO)
	   INST_top.RL_responseMMIO();
	 INST_top.DEF_rv_core_fromMMIO_rv_port1__read____d458 = INST_top.INST_rv_core_fromMMIO_rv.METH_port1__read();
	 INST_top.DEF_rv_core_fromDmem_rv_port1__read____d460 = INST_top.INST_rv_core_fromDmem_rv.METH_port1__read();
	 INST_top.DEF_rv_core_mem_business___d456 = INST_top.INST_rv_core_mem_business.METH_read();
	 INST_top.DEF_rv_core_mem_business_56_BIT_0___d457 = (tUInt8)((tUInt8)1u & (INST_top.DEF_rv_core_mem_business___d456));
	 INST_top.DEF_rv_core_mem_business_56_BITS_5_TO_3___d467 = (tUInt8)((INST_top.DEF_rv_core_mem_business___d456) >> 3u);
	 INST_top.DEF_rv_core_dInst_88_BIT_36___d464 = (tUInt8)((tUInt8)1u & ((INST_top.DEF_rv_core_dInst___d288) >> 36u));
	 DEF_INST_top_DEF_IF_rv_core_mem_business_56_BIT_0_57_THEN_rv_co_ETC___d462 = INST_top.DEF_rv_core_mem_business_56_BIT_0___d457 ? INST_top.DEF_rv_core_fromMMIO_rv_port1__read____d458.get_bits_in_word8(2u,
																										 4u,
																										 1u) : INST_top.DEF_rv_core_fromDmem_rv_port1__read____d460.get_bits_in_word8(2u,
																																			      4u,
																																			      1u);
	 switch (INST_top.DEF_rv_core_mem_business_56_BITS_5_TO_3___d467) {
	 case (tUInt8)0u:
	 case (tUInt8)1u:
	 case (tUInt8)4u:
	 case (tUInt8)5u:
	   DEF_INST_top_DEF_IF_rv_core_mem_business_56_BITS_5_TO_3_67_EQ_0_ETC___d478 = DEF_INST_top_DEF_IF_rv_core_mem_business_56_BIT_0_57_THEN_rv_co_ETC___d462;
	   break;
	 default:
	   DEF_INST_top_DEF_IF_rv_core_mem_business_56_BITS_5_TO_3_67_EQ_0_ETC___d478 = !((INST_top.DEF_rv_core_mem_business_56_BITS_5_TO_3___d467) == (tUInt8)2u) || DEF_INST_top_DEF_IF_rv_core_mem_business_56_BIT_0_57_THEN_rv_co_ETC___d462;
	 }
	 INST_top.DEF_rv_core_dInst_88_BITS_11_TO_7_05_EQ_0___d466 = (INST_top.DEF_rv_core_dInst_88_BITS_11_TO_7___d305) == (tUInt8)0u;
	 DEF_INST_top_DEF_CAN_FIRE_RL_rv_core_writeback = (INST_top.INST_rv_core_retired.METH_i_notFull() && ((INST_top.DEF_rv_core_dInst_88_BIT_6_89_OR_NOT_rv_core_dInst_ETC___d293 || DEF_INST_top_DEF_IF_rv_core_mem_business_56_BIT_0_57_THEN_rv_co_ETC___d462) && (!(INST_top.DEF_rv_core_dInst_88_BIT_36___d464) || (INST_top.DEF_rv_core_dInst_88_BITS_11_TO_7_05_EQ_0___d466 || (INST_top.DEF_rv_core_dInst_88_BIT_6_89_OR_NOT_rv_core_dInst_ETC___d293 || DEF_INST_top_DEF_IF_rv_core_mem_business_56_BITS_5_TO_3_67_EQ_0_ETC___d478))))) && (DEF_INST_top_DEF_rv_core_state__h7371 == (tUInt8)3u && DEF_INST_top_DEF_NOT_rv_core_starting_00___d108);
	 DEF_INST_top_DEF_WILL_FIRE_RL_rv_core_writeback = DEF_INST_top_DEF_CAN_FIRE_RL_rv_core_writeback;
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_rv_core_decode)
	   INST_top.RL_rv_core_decode();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_rv_core_execute)
	   INST_top.RL_rv_core_execute();
	 INST_top.DEF_rv_core_toDmem_rv_port1__read____d607 = INST_top.INST_rv_core_toDmem_rv.METH_port1__read();
	 INST_top.DEF_b__h910 = INST_top.INST_bram_serverAdapterA_cnt.METH_read();
	 DEF_INST_top_DEF_CAN_FIRE_RL_requestD = INST_top.DEF_rv_core_toDmem_rv_port1__read____d607.get_bits_in_word8(2u,
														      4u,
														      1u) && primSLT8(1u,
																      3u,
																      (tUInt8)(INST_top.DEF_b__h910),
																      3u,
																      (tUInt8)3u);
	 DEF_INST_top_DEF_WILL_FIRE_RL_requestD = DEF_INST_top_DEF_CAN_FIRE_RL_requestD;
	 INST_top.DEF_rv_core_toMMIO_rv_port1__read____d629 = INST_top.INST_rv_core_toMMIO_rv.METH_port1__read();
	 DEF_INST_top_DEF_CAN_FIRE_RL_requestMMIO = INST_top.DEF_rv_core_toMMIO_rv_port1__read____d629.get_bits_in_word8(2u,
															 4u,
															 1u) && INST_top.INST_mmioreq.METH_i_notFull();
	 DEF_INST_top_DEF_WILL_FIRE_RL_requestMMIO = DEF_INST_top_DEF_CAN_FIRE_RL_requestMMIO;
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_requestD)
	   INST_top.RL_requestD();
	 DEF_INST_top_DEF_CAN_FIRE_RL_bram_serverAdapterA_stageReadResponseAlways = INST_top.INST_bram_serverAdapterA_writeWithResp.METH_whas();
	 DEF_INST_top_DEF_WILL_FIRE_RL_bram_serverAdapterA_stageReadResponseAlways = DEF_INST_top_DEF_CAN_FIRE_RL_bram_serverAdapterA_stageReadResponseAlways;
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_bram_serverAdapterA_stageReadResponseAlways)
	   INST_top.RL_bram_serverAdapterA_stageReadResponseAlways();
	 INST_top.DEF_bram_serverAdapterA_cnt_3_whas____d13 = INST_top.INST_bram_serverAdapterA_cnt_3.METH_whas();
	 INST_top.DEF_bram_serverAdapterA_cnt_2_whas____d11 = INST_top.INST_bram_serverAdapterA_cnt_2.METH_whas();
	 INST_top.DEF_bram_serverAdapterA_cnt_1_whas____d10 = INST_top.INST_bram_serverAdapterA_cnt_1.METH_whas();
	 DEF_INST_top_DEF_CAN_FIRE_RL_bram_serverAdapterA_cnt_finalAdd = (INST_top.DEF_bram_serverAdapterA_cnt_1_whas____d10 || INST_top.DEF_bram_serverAdapterA_cnt_2_whas____d11) || INST_top.DEF_bram_serverAdapterA_cnt_3_whas____d13;
	 DEF_INST_top_DEF_WILL_FIRE_RL_bram_serverAdapterA_cnt_finalAdd = DEF_INST_top_DEF_CAN_FIRE_RL_bram_serverAdapterA_cnt_finalAdd;
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_bram_serverAdapterA_cnt_finalAdd)
	   INST_top.RL_bram_serverAdapterA_cnt_finalAdd();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_bram_serverAdapterA_s1__dreg_update)
	   INST_top.RL_bram_serverAdapterA_s1__dreg_update();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_rv_core_fetch)
	   INST_top.RL_rv_core_fetch();
	 INST_top.DEF_rv_core_toImem_rv_port1__read____d585 = INST_top.INST_rv_core_toImem_rv.METH_port1__read();
	 INST_top.DEF_b__h2255 = INST_top.INST_bram_serverAdapterB_cnt.METH_read();
	 DEF_INST_top_DEF_CAN_FIRE_RL_requestI = INST_top.DEF_rv_core_toImem_rv_port1__read____d585.get_bits_in_word8(2u,
														      4u,
														      1u) && primSLT8(1u,
																      3u,
																      (tUInt8)(INST_top.DEF_b__h2255),
																      3u,
																      (tUInt8)3u);
	 DEF_INST_top_DEF_WILL_FIRE_RL_requestI = DEF_INST_top_DEF_CAN_FIRE_RL_requestI;
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_requestI)
	   INST_top.RL_requestI();
	 DEF_INST_top_DEF_CAN_FIRE_RL_bram_serverAdapterB_stageReadResponseAlways = INST_top.INST_bram_serverAdapterB_writeWithResp.METH_whas();
	 DEF_INST_top_DEF_WILL_FIRE_RL_bram_serverAdapterB_stageReadResponseAlways = DEF_INST_top_DEF_CAN_FIRE_RL_bram_serverAdapterB_stageReadResponseAlways;
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_bram_serverAdapterB_stageReadResponseAlways)
	   INST_top.RL_bram_serverAdapterB_stageReadResponseAlways();
	 INST_top.DEF_bram_serverAdapterB_cnt_3_whas____d63 = INST_top.INST_bram_serverAdapterB_cnt_3.METH_whas();
	 INST_top.DEF_bram_serverAdapterB_cnt_2_whas____d61 = INST_top.INST_bram_serverAdapterB_cnt_2.METH_whas();
	 INST_top.DEF_bram_serverAdapterB_cnt_1_whas____d60 = INST_top.INST_bram_serverAdapterB_cnt_1.METH_whas();
	 DEF_INST_top_DEF_CAN_FIRE_RL_bram_serverAdapterB_cnt_finalAdd = (INST_top.DEF_bram_serverAdapterB_cnt_1_whas____d60 || INST_top.DEF_bram_serverAdapterB_cnt_2_whas____d61) || INST_top.DEF_bram_serverAdapterB_cnt_3_whas____d63;
	 DEF_INST_top_DEF_WILL_FIRE_RL_bram_serverAdapterB_cnt_finalAdd = DEF_INST_top_DEF_CAN_FIRE_RL_bram_serverAdapterB_cnt_finalAdd;
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_bram_serverAdapterB_cnt_finalAdd)
	   INST_top.RL_bram_serverAdapterB_cnt_finalAdd();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_bram_serverAdapterB_s1__dreg_update)
	   INST_top.RL_bram_serverAdapterB_s1__dreg_update();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_requestMMIO)
	   INST_top.RL_requestMMIO();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_rv_core_writeback)
	   INST_top.RL_rv_core_writeback();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_rv_core_administrative_konata_commit)
	   INST_top.RL_rv_core_administrative_konata_commit();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_rv_core_administrative_konata_flush)
	   INST_top.RL_rv_core_administrative_konata_flush();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_rv_core_do_tic_logging)
	   INST_top.RL_rv_core_do_tic_logging();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_tic)
	   INST_top.RL_tic();
	 INST_top.INST_rv_core_fromMMIO_rv.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_rv_core_toMMIO_rv.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_rv_core_fromDmem_rv.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_rv_core_toDmem_rv.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_rv_core_fromImem_rv.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_rv_core_toImem_rv.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_bram_serverAdapterB_s1_1.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_bram_serverAdapterB_writeWithResp.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_bram_serverAdapterB_cnt_3.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_bram_serverAdapterB_cnt_2.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_bram_serverAdapterB_cnt_1.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_bram_serverAdapterB_outData_dequeueing.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_bram_serverAdapterB_outData_enqw.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_bram_serverAdapterA_s1_1.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_bram_serverAdapterA_writeWithResp.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_bram_serverAdapterA_cnt_3.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_bram_serverAdapterA_cnt_2.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_bram_serverAdapterA_cnt_1.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_bram_serverAdapterA_outData_dequeueing.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_bram_serverAdapterA_outData_enqw.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_bram_memory.clkA((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_bram_memory.clkB((tUInt8)1u, (tUInt8)1u);
	 if (do_reset_ticks(simHdl))
	 {
	   INST_top.INST_bram_serverAdapterA_outData_ff.rst_tick_clk((tUInt8)1u);
	   INST_top.INST_bram_serverAdapterA_cnt.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_bram_serverAdapterA_s1.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_bram_serverAdapterB_outData_ff.rst_tick_clk((tUInt8)1u);
	   INST_top.INST_bram_serverAdapterB_cnt.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_bram_serverAdapterB_s1.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_rv_core_toImem_rv.rst_tick_clk((tUInt8)1u);
	   INST_top.INST_rv_core_fromImem_rv.rst_tick_clk((tUInt8)1u);
	   INST_top.INST_rv_core_toDmem_rv.rst_tick_clk((tUInt8)1u);
	   INST_top.INST_rv_core_fromDmem_rv.rst_tick_clk((tUInt8)1u);
	   INST_top.INST_rv_core_toMMIO_rv.rst_tick_clk((tUInt8)1u);
	   INST_top.INST_rv_core_fromMMIO_rv.rst_tick_clk((tUInt8)1u);
	   INST_top.INST_rv_core_pc.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_rv_core_rf_0.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_rv_core_rf_1.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_rv_core_rf_2.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_rv_core_rf_3.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_rv_core_rf_4.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_rv_core_rf_5.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_rv_core_rf_6.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_rv_core_rf_7.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_rv_core_rf_8.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_rv_core_rf_9.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_rv_core_rf_10.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_rv_core_rf_11.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_rv_core_rf_12.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_rv_core_rf_13.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_rv_core_rf_14.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_rv_core_rf_15.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_rv_core_rf_16.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_rv_core_rf_17.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_rv_core_rf_18.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_rv_core_rf_19.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_rv_core_rf_20.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_rv_core_rf_21.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_rv_core_rf_22.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_rv_core_rf_23.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_rv_core_rf_24.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_rv_core_rf_25.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_rv_core_rf_26.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_rv_core_rf_27.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_rv_core_rf_28.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_rv_core_rf_29.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_rv_core_rf_30.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_rv_core_rf_31.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_rv_core_state.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_rv_core_rv1.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_rv_core_rv2.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_rv_core_rvd.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_rv_core_dInst.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_rv_core_mem_business.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_rv_core_lfh.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_rv_core_current_id.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_rv_core_fresh_id.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_rv_core_commit_id.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_rv_core_retired.rst_tick_clk((tUInt8)1u);
	   INST_top.INST_rv_core_squashed.rst_tick_clk((tUInt8)1u);
	   INST_top.INST_rv_core_starting.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_mmioreq.rst_tick_clk((tUInt8)1u);
	   INST_top.INST_cycle_count.rst_tick__clk__1((tUInt8)1u);
	 }
       };

/* Model creation/destruction functions */

void MODEL_mktop_bsv::create_model(tSimStateHdl simHdl, bool master)
{
  sim_hdl = simHdl;
  init_reset_request_counters(sim_hdl);
  mktop_bsv_instance = new MOD_mktop_bsv(sim_hdl, "top", NULL);
  bk_get_or_define_clock(sim_hdl, "CLK");
  if (master)
  {
    bk_alter_clock(sim_hdl, bk_get_clock_by_name(sim_hdl, "CLK"), CLK_LOW, false, 0llu, 5llu, 5llu);
    bk_use_default_reset(sim_hdl);
  }
  bk_set_clock_event_fn(sim_hdl,
			bk_get_clock_by_name(sim_hdl, "CLK"),
			schedule_posedge_CLK,
			NULL,
			(tEdgeDirection)(POSEDGE));
  (mktop_bsv_instance->INST_bram_memory.set_clk_1)("CLK");
  (mktop_bsv_instance->INST_bram_memory.set_clk_0)("CLK");
  (mktop_bsv_instance->INST_bram_serverAdapterA_outData_ff.set_clk_0)("CLK");
  (mktop_bsv_instance->INST_bram_serverAdapterA_outData_enqw.set_clk_0)("CLK");
  (mktop_bsv_instance->INST_bram_serverAdapterA_outData_dequeueing.set_clk_0)("CLK");
  (mktop_bsv_instance->INST_bram_serverAdapterA_cnt_1.set_clk_0)("CLK");
  (mktop_bsv_instance->INST_bram_serverAdapterA_cnt_2.set_clk_0)("CLK");
  (mktop_bsv_instance->INST_bram_serverAdapterA_cnt_3.set_clk_0)("CLK");
  (mktop_bsv_instance->INST_bram_serverAdapterA_writeWithResp.set_clk_0)("CLK");
  (mktop_bsv_instance->INST_bram_serverAdapterA_s1_1.set_clk_0)("CLK");
  (mktop_bsv_instance->INST_bram_serverAdapterB_outData_ff.set_clk_0)("CLK");
  (mktop_bsv_instance->INST_bram_serverAdapterB_outData_enqw.set_clk_0)("CLK");
  (mktop_bsv_instance->INST_bram_serverAdapterB_outData_dequeueing.set_clk_0)("CLK");
  (mktop_bsv_instance->INST_bram_serverAdapterB_cnt_1.set_clk_0)("CLK");
  (mktop_bsv_instance->INST_bram_serverAdapterB_cnt_2.set_clk_0)("CLK");
  (mktop_bsv_instance->INST_bram_serverAdapterB_cnt_3.set_clk_0)("CLK");
  (mktop_bsv_instance->INST_bram_serverAdapterB_writeWithResp.set_clk_0)("CLK");
  (mktop_bsv_instance->INST_bram_serverAdapterB_s1_1.set_clk_0)("CLK");
  (mktop_bsv_instance->INST_rv_core_toImem_rv.set_clk_0)("CLK");
  (mktop_bsv_instance->INST_rv_core_fromImem_rv.set_clk_0)("CLK");
  (mktop_bsv_instance->INST_rv_core_toDmem_rv.set_clk_0)("CLK");
  (mktop_bsv_instance->INST_rv_core_fromDmem_rv.set_clk_0)("CLK");
  (mktop_bsv_instance->INST_rv_core_toMMIO_rv.set_clk_0)("CLK");
  (mktop_bsv_instance->INST_rv_core_fromMMIO_rv.set_clk_0)("CLK");
  (mktop_bsv_instance->INST_rv_core_retired.set_clk_0)("CLK");
  (mktop_bsv_instance->INST_rv_core_squashed.set_clk_0)("CLK");
  (mktop_bsv_instance->INST_mmioreq.set_clk_0)("CLK");
  (mktop_bsv_instance->set_clk_0)("CLK");
}
void MODEL_mktop_bsv::destroy_model()
{
  delete mktop_bsv_instance;
  mktop_bsv_instance = NULL;
}
void MODEL_mktop_bsv::reset_model(bool asserted)
{
  (mktop_bsv_instance->reset_RST_N)(asserted ? (tUInt8)0u : (tUInt8)1u);
}
void * MODEL_mktop_bsv::get_instance()
{
  return mktop_bsv_instance;
}

/* Fill in version numbers */
void MODEL_mktop_bsv::get_version(char const **name, char const **build)
{
  *name = "2023.01-6-g034050db";
  *build = "034050db";
}

/* Get the model creation time */
time_t MODEL_mktop_bsv::get_creation_time()
{
  
  /* Tue May 16 02:18:31 UTC 2023 */
  return 1684203511llu;
}

/* State dumping function */
void MODEL_mktop_bsv::dump_state()
{
  (mktop_bsv_instance->dump_state)(0u);
}

/* VCD dumping functions */
MOD_mktop_bsv & mktop_bsv_backing(tSimStateHdl simHdl)
{
  static MOD_mktop_bsv *instance = NULL;
  if (instance == NULL)
  {
    vcd_set_backing_instance(simHdl, true);
    instance = new MOD_mktop_bsv(simHdl, "top", NULL);
    vcd_set_backing_instance(simHdl, false);
  }
  return *instance;
}
void MODEL_mktop_bsv::dump_VCD_defs()
{
  (mktop_bsv_instance->dump_VCD_defs)(vcd_depth(sim_hdl));
}
void MODEL_mktop_bsv::dump_VCD(tVCDDumpType dt)
{
  (mktop_bsv_instance->dump_VCD)(dt, vcd_depth(sim_hdl), mktop_bsv_backing(sim_hdl));
}
