#include <Fan_i_fp_fan_api.h>
#include <Fan_i_fp_fan.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

static char* component_id = "TempControlSystem_i_Instance_fp_fan";

t_TemperatureControl_FanAck_Type  sendFanCmd(STACK_FRAME t_TemperatureControl_FanCmd_Type);

Unit t_TemperatureControl_Fan_i_fp_fan_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Fan_i_fp_fan.c", "", "t_TemperatureControl_Fan_i_fp_fan_initialise_", 0);
}

Unit t_TemperatureControl_Fan_i_fp_fan_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Fan_i_fp_fan.c", "", "t_TemperatureControl_Fan_i_fp_fan_finalise_", 0);
}

Unit t_TemperatureControl_Fan_i_fp_fan_handle_fanCmd_(
  STACK_FRAME
  t_TemperatureControl_FanCmd_Type value) {
  DeclNewStackFrame(caller, "Fan_i_fp_fan.c", "", "t_TemperatureControl_Fan_i_fp_fan_handle_fanCmd_", 0);

#ifndef SIREUM_NO_PRINT
  DeclNewString(_str);
  String__append(SF (String) &_str, string("Received on fanCmd: "));
  t_TemperatureControl_FanCmd_Type_string_(SF (String) &_str, value);
  api_logInfo__t_TemperatureControl_Fan_i_fp_fan(SF (String) &_str);
#endif
  api_put_fanAck__t_TemperatureControl_Fan_i_fp_fan(SF sendFanCmd(SF value));
}

t_TemperatureControl_FanAck_Type  sendFanCmd(STACK_FRAME t_TemperatureControl_FanCmd_Type value){
  DeclNewStackFrame(caller, "Fan_i_fp_fan.c", "", "sendFanCmd", 0);

  return t_TemperatureControl_FanAck_Type_Ok;
}