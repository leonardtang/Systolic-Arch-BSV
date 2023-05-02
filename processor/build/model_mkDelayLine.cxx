/*
 * Generated by Bluespec Compiler, version 2023.01-6-g034050db (build 034050db)
 * 
 * On Mon May  1 22:12:02 EDT 2023
 * 
 */
#include "bluesim_primitives.h"
#include "model_mkDelayLine.h"

#include <cstdlib>
#include <time.h>
#include "bluesim_kernel_api.h"
#include "bs_vcd.h"
#include "bs_reset.h"


/* Constructor */
MODEL_mkDelayLine::MODEL_mkDelayLine()
{
  mkDelayLine_instance = NULL;
}

/* Function for creating a new model */
void * new_MODEL_mkDelayLine()
{
  MODEL_mkDelayLine *model = new MODEL_mkDelayLine();
  return (void *)(model);
}

/* Schedule functions */

static void schedule_posedge_CLK(tSimStateHdl simHdl, void *instance_ptr)
       {
	 MOD_mkDelayLine &INST_top = *((MOD_mkDelayLine *)(instance_ptr));
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_1;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_1;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_2;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_2;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_3;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_3;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_4;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_4;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_5;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_5;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_6;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_6;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_7;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_7;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_8;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_8;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_9;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_9;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_10;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_10;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_11;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_11;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_12;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_12;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_13;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_13;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_14;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_14;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_15;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_15;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_16;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_16;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_17;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_17;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_18;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_18;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_tic;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_tic;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_feed;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_feed;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_stream;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_stream;
	 DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move = DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move;
	 DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_1 = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_1 = DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_1;
	 DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_10 = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_10 = DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_10;
	 DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_11 = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_11 = DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_11;
	 DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_13 = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_13 = DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_13;
	 DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_12 = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_12 = DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_12;
	 DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_14 = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_14 = DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_14;
	 DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_15 = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_15 = DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_15;
	 DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_16 = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_16 = DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_16;
	 DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_17 = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_17 = DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_17;
	 DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_18 = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_18 = DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_18;
	 DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_2 = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_2 = DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_2;
	 DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_4 = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_4 = DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_4;
	 DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_3 = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_3 = DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_3;
	 DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_5 = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_5 = DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_5;
	 DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_7 = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_7 = DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_7;
	 DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_6 = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_6 = DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_6;
	 DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_8 = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_8 = DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_8;
	 DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_9 = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_9 = DEF_INST_top_DEF_CAN_FIRE_RL_dl_try_move_9;
	 INST_top.DEF_dl_d_19_rv_port0__read____d164 = INST_top.INST_dl_d_19_rv.METH_port0__read();
	 DEF_INST_top_DEF_CAN_FIRE_RL_stream = (tUInt8)((INST_top.DEF_dl_d_19_rv_port0__read____d164) >> 10u);
	 DEF_INST_top_DEF_WILL_FIRE_RL_stream = DEF_INST_top_DEF_CAN_FIRE_RL_stream;
	 DEF_INST_top_DEF_CAN_FIRE_RL_tic = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_tic = DEF_INST_top_DEF_CAN_FIRE_RL_tic;
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_tic)
	   INST_top.RL_tic();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_stream)
	   INST_top.RL_stream();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move)
	   INST_top.RL_dl_try_move();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_1)
	   INST_top.RL_dl_try_move_1();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_2)
	   INST_top.RL_dl_try_move_2();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_3)
	   INST_top.RL_dl_try_move_3();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_4)
	   INST_top.RL_dl_try_move_4();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_5)
	   INST_top.RL_dl_try_move_5();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_6)
	   INST_top.RL_dl_try_move_6();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_7)
	   INST_top.RL_dl_try_move_7();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_8)
	   INST_top.RL_dl_try_move_8();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_9)
	   INST_top.RL_dl_try_move_9();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_10)
	   INST_top.RL_dl_try_move_10();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_11)
	   INST_top.RL_dl_try_move_11();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_12)
	   INST_top.RL_dl_try_move_12();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_13)
	   INST_top.RL_dl_try_move_13();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_14)
	   INST_top.RL_dl_try_move_14();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_15)
	   INST_top.RL_dl_try_move_15();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_16)
	   INST_top.RL_dl_try_move_16();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_17)
	   INST_top.RL_dl_try_move_17();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_dl_try_move_18)
	   INST_top.RL_dl_try_move_18();
	 INST_top.DEF_cnt_f__h10151 = INST_top.INST_cnt_f.METH_read();
	 DEF_INST_top_DEF_CAN_FIRE_RL_feed = !((tUInt8)(INST_top.INST_dl_d_0_rv.METH_port1__read() >> 10u)) && (INST_top.DEF_cnt_f__h10151) < 10u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_feed = DEF_INST_top_DEF_CAN_FIRE_RL_feed;
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_feed)
	   INST_top.RL_feed();
	 INST_top.INST_dl_d_19_rv.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_dl_d_18_rv.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_dl_d_17_rv.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_dl_d_16_rv.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_dl_d_15_rv.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_dl_d_14_rv.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_dl_d_13_rv.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_dl_d_12_rv.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_dl_d_11_rv.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_dl_d_10_rv.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_dl_d_9_rv.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_dl_d_8_rv.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_dl_d_7_rv.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_dl_d_6_rv.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_dl_d_5_rv.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_dl_d_4_rv.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_dl_d_3_rv.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_dl_d_2_rv.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_dl_d_1_rv.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_dl_d_0_rv.clk((tUInt8)1u, (tUInt8)1u);
	 if (do_reset_ticks(simHdl))
	 {
	   INST_top.INST_dl_d_0_rv.rst_tick_clk((tUInt8)1u);
	   INST_top.INST_dl_d_1_rv.rst_tick_clk((tUInt8)1u);
	   INST_top.INST_dl_d_2_rv.rst_tick_clk((tUInt8)1u);
	   INST_top.INST_dl_d_3_rv.rst_tick_clk((tUInt8)1u);
	   INST_top.INST_dl_d_4_rv.rst_tick_clk((tUInt8)1u);
	   INST_top.INST_dl_d_5_rv.rst_tick_clk((tUInt8)1u);
	   INST_top.INST_dl_d_6_rv.rst_tick_clk((tUInt8)1u);
	   INST_top.INST_dl_d_7_rv.rst_tick_clk((tUInt8)1u);
	   INST_top.INST_dl_d_8_rv.rst_tick_clk((tUInt8)1u);
	   INST_top.INST_dl_d_9_rv.rst_tick_clk((tUInt8)1u);
	   INST_top.INST_dl_d_10_rv.rst_tick_clk((tUInt8)1u);
	   INST_top.INST_dl_d_11_rv.rst_tick_clk((tUInt8)1u);
	   INST_top.INST_dl_d_12_rv.rst_tick_clk((tUInt8)1u);
	   INST_top.INST_dl_d_13_rv.rst_tick_clk((tUInt8)1u);
	   INST_top.INST_dl_d_14_rv.rst_tick_clk((tUInt8)1u);
	   INST_top.INST_dl_d_15_rv.rst_tick_clk((tUInt8)1u);
	   INST_top.INST_dl_d_16_rv.rst_tick_clk((tUInt8)1u);
	   INST_top.INST_dl_d_17_rv.rst_tick_clk((tUInt8)1u);
	   INST_top.INST_dl_d_18_rv.rst_tick_clk((tUInt8)1u);
	   INST_top.INST_dl_d_19_rv.rst_tick_clk((tUInt8)1u);
	   INST_top.INST_cnt_f.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_cnt_s.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_ctime.rst_tick__clk__1((tUInt8)1u);
	 }
       };

/* Model creation/destruction functions */

void MODEL_mkDelayLine::create_model(tSimStateHdl simHdl, bool master)
{
  sim_hdl = simHdl;
  init_reset_request_counters(sim_hdl);
  mkDelayLine_instance = new MOD_mkDelayLine(sim_hdl, "top", NULL);
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
  (mkDelayLine_instance->INST_dl_d_0_rv.set_clk_0)("CLK");
  (mkDelayLine_instance->INST_dl_d_1_rv.set_clk_0)("CLK");
  (mkDelayLine_instance->INST_dl_d_2_rv.set_clk_0)("CLK");
  (mkDelayLine_instance->INST_dl_d_3_rv.set_clk_0)("CLK");
  (mkDelayLine_instance->INST_dl_d_4_rv.set_clk_0)("CLK");
  (mkDelayLine_instance->INST_dl_d_5_rv.set_clk_0)("CLK");
  (mkDelayLine_instance->INST_dl_d_6_rv.set_clk_0)("CLK");
  (mkDelayLine_instance->INST_dl_d_7_rv.set_clk_0)("CLK");
  (mkDelayLine_instance->INST_dl_d_8_rv.set_clk_0)("CLK");
  (mkDelayLine_instance->INST_dl_d_9_rv.set_clk_0)("CLK");
  (mkDelayLine_instance->INST_dl_d_10_rv.set_clk_0)("CLK");
  (mkDelayLine_instance->INST_dl_d_11_rv.set_clk_0)("CLK");
  (mkDelayLine_instance->INST_dl_d_12_rv.set_clk_0)("CLK");
  (mkDelayLine_instance->INST_dl_d_13_rv.set_clk_0)("CLK");
  (mkDelayLine_instance->INST_dl_d_14_rv.set_clk_0)("CLK");
  (mkDelayLine_instance->INST_dl_d_15_rv.set_clk_0)("CLK");
  (mkDelayLine_instance->INST_dl_d_16_rv.set_clk_0)("CLK");
  (mkDelayLine_instance->INST_dl_d_17_rv.set_clk_0)("CLK");
  (mkDelayLine_instance->INST_dl_d_18_rv.set_clk_0)("CLK");
  (mkDelayLine_instance->INST_dl_d_19_rv.set_clk_0)("CLK");
  (mkDelayLine_instance->set_clk_0)("CLK");
}
void MODEL_mkDelayLine::destroy_model()
{
  delete mkDelayLine_instance;
  mkDelayLine_instance = NULL;
}
void MODEL_mkDelayLine::reset_model(bool asserted)
{
  (mkDelayLine_instance->reset_RST_N)(asserted ? (tUInt8)0u : (tUInt8)1u);
}
void * MODEL_mkDelayLine::get_instance()
{
  return mkDelayLine_instance;
}

/* Fill in version numbers */
void MODEL_mkDelayLine::get_version(char const **name, char const **build)
{
  *name = "2023.01-6-g034050db";
  *build = "034050db";
}

/* Get the model creation time */
time_t MODEL_mkDelayLine::get_creation_time()
{
  
  /* Tue May  2 02:12:02 UTC 2023 */
  return 1682993522llu;
}

/* State dumping function */
void MODEL_mkDelayLine::dump_state()
{
  (mkDelayLine_instance->dump_state)(0u);
}

/* VCD dumping functions */
MOD_mkDelayLine & mkDelayLine_backing(tSimStateHdl simHdl)
{
  static MOD_mkDelayLine *instance = NULL;
  if (instance == NULL)
  {
    vcd_set_backing_instance(simHdl, true);
    instance = new MOD_mkDelayLine(simHdl, "top", NULL);
    vcd_set_backing_instance(simHdl, false);
  }
  return *instance;
}
void MODEL_mkDelayLine::dump_VCD_defs()
{
  (mkDelayLine_instance->dump_VCD_defs)(vcd_depth(sim_hdl));
}
void MODEL_mkDelayLine::dump_VCD(tVCDDumpType dt)
{
  (mkDelayLine_instance->dump_VCD)(dt, vcd_depth(sim_hdl), mkDelayLine_backing(sim_hdl));
}
