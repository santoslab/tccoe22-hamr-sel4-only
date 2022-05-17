#include <all.h>

B t_IPCPorts_initialized_ = F;

Z _t_IPCPorts_TempSensor_i_tsp_tempSensor_App;
Z _t_IPCPorts_TempControl_i_tcp_tempControl_App;
Z _t_IPCPorts_Fan_i_fp_fan_App;
Z _t_IPCPorts_Main;

void t_IPCPorts_init(STACK_FRAME_ONLY) {
  if (t_IPCPorts_initialized_) return;
  t_IPCPorts_initialized_ = T;
  DeclNewStackFrame(caller, "IPC.scala", "t.IPCPorts", "<init>", 0);
  t_IPCPorts_init_TempSensor_i_tsp_tempSensor_App(SF_LAST);
  t_IPCPorts_init_TempControl_i_tcp_tempControl_App(SF_LAST);
  t_IPCPorts_init_Fan_i_fp_fan_App(SF_LAST);
  t_IPCPorts_init_Main(SF_LAST);
}

Z t_IPCPorts_TempSensor_i_tsp_tempSensor_App(STACK_FRAME_ONLY) {
  t_IPCPorts_init(CALLER_LAST);
  return _t_IPCPorts_TempSensor_i_tsp_tempSensor_App;
}

Z t_IPCPorts_TempControl_i_tcp_tempControl_App(STACK_FRAME_ONLY) {
  t_IPCPorts_init(CALLER_LAST);
  return _t_IPCPorts_TempControl_i_tcp_tempControl_App;
}

Z t_IPCPorts_Fan_i_fp_fan_App(STACK_FRAME_ONLY) {
  t_IPCPorts_init(CALLER_LAST);
  return _t_IPCPorts_Fan_i_fp_fan_App;
}

Z t_IPCPorts_Main(STACK_FRAME_ONLY) {
  t_IPCPorts_init(CALLER_LAST);
  return _t_IPCPorts_Main;
}

void t_IPCPorts_emptyReceiveOut(STACK_FRAME MBox2_1CBFC4 result) {
  DeclNewStackFrame(caller, "IPC.scala", "t.IPCPorts", "emptyReceiveOut", 0);
  DeclNewart_Empty(t_1);
  art_Empty_apply(SF &t_1);
  DeclNewMBox2_1CBFC4(t_0);
  MBox2_1CBFC4_apply(SF &t_0, Z_C(-1), (art_DataContent) (&t_1));
  Type_assign(result, (&t_0), sizeof(struct MBox2_1CBFC4));
  return;
}

void t_IPCPorts_emptyReceiveAsyncOut(STACK_FRAME MBox2_1029D1 result) {
  DeclNewStackFrame(caller, "IPC.scala", "t.IPCPorts", "emptyReceiveAsyncOut", 0);
  DeclNewNone_964667(t_1);
  None_964667_apply(SF &t_1);
  DeclNewMBox2_1029D1(t_0);
  MBox2_1029D1_apply(SF &t_0, Z_C(-1), (Option_8E9F45) (&t_1));
  Type_assign(result, (&t_0), sizeof(struct MBox2_1029D1));
  return;
}

void t_IPCPorts_init_TempSensor_i_tsp_tempSensor_App(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(11);
  _t_IPCPorts_TempSensor_i_tsp_tempSensor_App = Z_C(9);
};

void t_IPCPorts_init_TempControl_i_tcp_tempControl_App(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(12);
  _t_IPCPorts_TempControl_i_tcp_tempControl_App = Z_C(10);
};

void t_IPCPorts_init_Fan_i_fp_fan_App(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(13);
  _t_IPCPorts_Fan_i_fp_fan_App = Z_C(11);
};

void t_IPCPorts_init_Main(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(14);
  _t_IPCPorts_Main = Z_C(12);
};