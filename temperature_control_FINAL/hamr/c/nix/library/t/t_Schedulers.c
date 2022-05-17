#include <all.h>

B t_Schedulers_initialized_ = F;

struct t_ProcessorTimingProperties _t_Schedulers_TempControlSystem_i_Instance_t_processor_timingProperties;
struct t_ThreadTimingProperties _t_Schedulers_TempControlSystem_i_Instance_tsp_tempSensor_timingProperties;
struct t_ThreadTimingProperties _t_Schedulers_TempControlSystem_i_Instance_tcp_tempControl_timingProperties;
struct t_ThreadTimingProperties _t_Schedulers_TempControlSystem_i_Instance_fp_fan_timingProperties;

void t_Schedulers_init(STACK_FRAME_ONLY) {
  if (t_Schedulers_initialized_) return;
  t_Schedulers_initialized_ = T;
  DeclNewStackFrame(caller, "Schedulers.scala", "t.Schedulers", "<init>", 0);
  t_Schedulers_init_TempControlSystem_i_Instance_t_processor_timingProperties(SF_LAST);
  t_Schedulers_init_TempControlSystem_i_Instance_tsp_tempSensor_timingProperties(SF_LAST);
  t_Schedulers_init_TempControlSystem_i_Instance_tcp_tempControl_timingProperties(SF_LAST);
  t_Schedulers_init_TempControlSystem_i_Instance_fp_fan_timingProperties(SF_LAST);
}

t_ProcessorTimingProperties t_Schedulers_TempControlSystem_i_Instance_t_processor_timingProperties(STACK_FRAME_ONLY) {
  t_Schedulers_init(CALLER_LAST);
  return (t_ProcessorTimingProperties) &_t_Schedulers_TempControlSystem_i_Instance_t_processor_timingProperties;
}

t_ThreadTimingProperties t_Schedulers_TempControlSystem_i_Instance_tsp_tempSensor_timingProperties(STACK_FRAME_ONLY) {
  t_Schedulers_init(CALLER_LAST);
  return (t_ThreadTimingProperties) &_t_Schedulers_TempControlSystem_i_Instance_tsp_tempSensor_timingProperties;
}

t_ThreadTimingProperties t_Schedulers_TempControlSystem_i_Instance_tcp_tempControl_timingProperties(STACK_FRAME_ONLY) {
  t_Schedulers_init(CALLER_LAST);
  return (t_ThreadTimingProperties) &_t_Schedulers_TempControlSystem_i_Instance_tcp_tempControl_timingProperties;
}

t_ThreadTimingProperties t_Schedulers_TempControlSystem_i_Instance_fp_fan_timingProperties(STACK_FRAME_ONLY) {
  t_Schedulers_init(CALLER_LAST);
  return (t_ThreadTimingProperties) &_t_Schedulers_TempControlSystem_i_Instance_fp_fan_timingProperties;
}

void t_Schedulers_init_TempControlSystem_i_Instance_t_processor_timingProperties(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(23);
  DeclNewSome_488F47(t_1);
  Some_488F47_apply(SF &t_1, Z_C(2));
  DeclNewSome_488F47(t_2);
  Some_488F47_apply(SF &t_2, Z_C(1000));
  DeclNewSome_488F47(t_3);
  Some_488F47_apply(SF &t_3, Z_C(4));
  DeclNewNone_76463B(t_4);
  None_76463B_apply(SF &t_4);
  DeclNewt_ProcessorTimingProperties(t_0);
  t_ProcessorTimingProperties_apply(SF &t_0, (Option_882048) (&t_1), (Option_882048) (&t_2), (Option_882048) (&t_3), (Option_882048) (&t_4));
  Type_assign(&_t_Schedulers_TempControlSystem_i_Instance_t_processor_timingProperties, (&t_0), sizeof(struct t_ProcessorTimingProperties));
};

void t_Schedulers_init_TempControlSystem_i_Instance_tsp_tempSensor_timingProperties(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(29);
  DeclNewSome_488F47(t_6);
  Some_488F47_apply(SF &t_6, Z_C(2));
  DeclNewTuple2_EC3B57(t_8);
  Tuple2_EC3B57_apply(SF &t_8, Z_C(10), Z_C(10));
  DeclNewSome_80A548(t_7);
  Some_80A548_apply(SF &t_7, (Tuple2_EC3B57) (&t_8));
  DeclNewt_ThreadTimingProperties(t_5);
  t_ThreadTimingProperties_apply(SF &t_5, (Option_882048) (&t_6), (Option_B47750) (&t_7));
  Type_assign(&_t_Schedulers_TempControlSystem_i_Instance_tsp_tempSensor_timingProperties, (&t_5), sizeof(struct t_ThreadTimingProperties));
};

void t_Schedulers_init_TempControlSystem_i_Instance_tcp_tempControl_timingProperties(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(33);
  DeclNewSome_488F47(t_10);
  Some_488F47_apply(SF &t_10, Z_C(3));
  DeclNewTuple2_EC3B57(t_12);
  Tuple2_EC3B57_apply(SF &t_12, Z_C(10), Z_C(10));
  DeclNewSome_80A548(t_11);
  Some_80A548_apply(SF &t_11, (Tuple2_EC3B57) (&t_12));
  DeclNewt_ThreadTimingProperties(t_9);
  t_ThreadTimingProperties_apply(SF &t_9, (Option_882048) (&t_10), (Option_B47750) (&t_11));
  Type_assign(&_t_Schedulers_TempControlSystem_i_Instance_tcp_tempControl_timingProperties, (&t_9), sizeof(struct t_ThreadTimingProperties));
};

void t_Schedulers_init_TempControlSystem_i_Instance_fp_fan_timingProperties(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(37);
  DeclNewSome_488F47(t_14);
  Some_488F47_apply(SF &t_14, Z_C(4));
  DeclNewTuple2_EC3B57(t_16);
  Tuple2_EC3B57_apply(SF &t_16, Z_C(10), Z_C(10));
  DeclNewSome_80A548(t_15);
  Some_80A548_apply(SF &t_15, (Tuple2_EC3B57) (&t_16));
  DeclNewt_ThreadTimingProperties(t_13);
  t_ThreadTimingProperties_apply(SF &t_13, (Option_882048) (&t_14), (Option_B47750) (&t_15));
  Type_assign(&_t_Schedulers_TempControlSystem_i_Instance_fp_fan_timingProperties, (&t_13), sizeof(struct t_ThreadTimingProperties));
};