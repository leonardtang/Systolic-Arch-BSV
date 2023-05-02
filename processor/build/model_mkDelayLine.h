/*
 * Generated by Bluespec Compiler, version 2023.01-6-g034050db (build 034050db)
 * 
 * On Mon May  1 22:12:02 EDT 2023
 * 
 */

/* Generation options: */
#ifndef __model_mkDelayLine_h__
#define __model_mkDelayLine_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"

#include "bs_model.h"
#include "mkDelayLine.h"

/* Class declaration for a model of mkDelayLine */
class MODEL_mkDelayLine : public Model {
 
 /* Top-level module instance */
 private:
  MOD_mkDelayLine *mkDelayLine_instance;
 
 /* Handle to the simulation kernel */
 private:
  tSimStateHdl sim_hdl;
 
 /* Constructor */
 public:
  MODEL_mkDelayLine();
 
 /* Functions required by the kernel */
 public:
  void create_model(tSimStateHdl simHdl, bool master);
  void destroy_model();
  void reset_model(bool asserted);
  void get_version(char const **name, char const **build);
  time_t get_creation_time();
  void * get_instance();
  void dump_state();
  void dump_VCD_defs();
  void dump_VCD(tVCDDumpType dt);
};

/* Function for creating a new model */
extern "C" {
  void * new_MODEL_mkDelayLine();
}

#endif /* ifndef __model_mkDelayLine_h__ */
