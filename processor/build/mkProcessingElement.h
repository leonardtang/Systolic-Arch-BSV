/*
 * Generated by Bluespec Compiler, version 2023.01-6-g034050db (build 034050db)
 * 
 * On Mon May 15 22:19:05 EDT 2023
 * 
 */

/* Generation options: */
#ifndef __mkProcessingElement_h__
#define __mkProcessingElement_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"


/* Class declaration for the mkProcessingElement module */
class MOD_mkProcessingElement : public Module {
 
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
  MOD_Wire<tUInt8> INST_done_port_0;
  MOD_Wire<tUInt8> INST_done_port_1;
  MOD_Reg<tUInt8> INST_done_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_done_readBeforeLaterWrites_1;
  MOD_Reg<tUInt8> INST_done_register;
  MOD_Wire<tUInt32> INST_iter_count_port_0;
  MOD_Wire<tUInt32> INST_iter_count_port_1;
  MOD_Reg<tUInt8> INST_iter_count_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_iter_count_readBeforeLaterWrites_1;
  MOD_Reg<tUInt32> INST_iter_count_register;
  MOD_Wire<tUInt32> INST_left_port_0;
  MOD_Wire<tUInt32> INST_left_port_1;
  MOD_Reg<tUInt8> INST_left_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_left_readBeforeLaterWrites_1;
  MOD_Reg<tUInt32> INST_left_register;
  MOD_Reg<tUInt8> INST_on;
  MOD_Reg<tUInt32> INST_product;
  MOD_Reg<tUInt8> INST_received_left;
  MOD_Reg<tUInt8> INST_received_top;
  MOD_Wire<tUInt32> INST_top_port_0;
  MOD_Wire<tUInt32> INST_top_port_1;
  MOD_Reg<tUInt8> INST_top_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_top_readBeforeLaterWrites_1;
  MOD_Reg<tUInt32> INST_top_register;
  MOD_Reg<tUInt32> INST_total_iters;
 
 /* Constructor */
 public:
  MOD_mkProcessingElement(tSimStateHdl simHdl, char const *name, Module *parent);
 
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
  tUInt8 DEF_IF_done_port_0_whas__7_THEN_done_port_0_wget___ETC___d20;
  tUInt8 DEF_NOT_on_9___d51;
  tUInt8 DEF_on_9_AND_IF_iter_count_readBeforeLaterWrites_0_ETC___d63;
  tUInt32 DEF_b__h2685;
  tUInt32 DEF_b__h3767;
  tUInt8 DEF_done_register__h2995;
  tUInt8 DEF_done_port_0_whas____d17;
  tUInt8 DEF_done_port_0_wget____d18;
  tUInt8 DEF_on__h2794;
  tUInt32 DEF_IF_iter_count_readBeforeLaterWrites_0_read__4__ETC___d56;
 
 /* Local definitions */
 private:
  tUInt32 DEF_b__h2686;
  tUInt32 DEF_b__h1288;
  tUInt32 DEF_b__h1289;
  tUInt32 DEF_b__h633;
  tUInt32 DEF_b__h634;
  tUInt32 DEF_b__h3054;
  tUInt32 DEF_IF_iter_count_port_0_whas__4_THEN_iter_count_p_ETC___d27;
  tUInt32 DEF_IF_left_port_0_whas__0_THEN_left_port_0_wget___ETC___d13;
  tUInt32 DEF_IF_top_port_0_whas_THEN_top_port_0_wget_ELSE_t_ETC___d6;
 
 /* Rules */
 public:
  void RL_top_canonicalize();
  void RL_left_canonicalize();
  void RL_done_canonicalize();
  void RL_iter_count_canonicalize();
  void RL_pe_mac();
 
 /* Methods */
 public:
  void METH_init_pe();
  tUInt8 METH_RDY_init_pe();
  void METH_flow_top(tUInt32 ARG_flow_top_x);
  tUInt8 METH_RDY_flow_top();
  void METH_flow_left(tUInt32 ARG_flow_left_y);
  tUInt8 METH_RDY_flow_left();
  void METH_set_total_iter(tUInt32 ARG_set_total_iter_z);
  tUInt8 METH_RDY_set_total_iter();
  tUInt32 METH_get_output();
  tUInt8 METH_RDY_get_output();
 
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
  void dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkProcessingElement &backing);
  void vcd_defs(tVCDDumpType dt, MOD_mkProcessingElement &backing);
  void vcd_prims(tVCDDumpType dt, MOD_mkProcessingElement &backing);
};

#endif /* ifndef __mkProcessingElement_h__ */
