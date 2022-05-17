#include <TempControl_i_tcp_tempControl_api.h>
#include <TempControl_i_tcp_tempControl.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

static char* component_id = "TempControlSystem_i_Instance_tcp_tempControl";

struct t_TemperatureControl_SetPoint_i setPoint;

Unit t_TemperatureControl_TempControl_i_tcp_tempControl_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "TempControl_i_tcp_tempControl.c", "", "t_TemperatureControl_TempControl_i_tcp_tempControl_initialise_", 0);

  DeclNewt_TemperatureControl_Temperature_i(low);
  createTempInFahrenheit(SF MIN_TEMP, &low);

  DeclNewt_TemperatureControl_Temperature_i(high);
  createTempInFahrenheit(SF MAX_TEMP, &high);

  setPoint.low = low;
  setPoint.high = high;
}

Unit t_TemperatureControl_TempControl_i_tcp_tempControl_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "TempControl_i_tcp_tempControl.c", "", "t_TemperatureControl_TempControl_i_tcp_tempControl_finalise_", 0);
}

Unit t_TemperatureControl_TempControl_i_tcp_tempControl_handle_fanAck_(
  STACK_FRAME
  t_TemperatureControl_FanAck_Type value) {
  DeclNewStackFrame(caller, "TempControl_i_tcp_tempControl.c", "", "t_TemperatureControl_TempControl_i_tcp_tempControl_handle_fanAck_", 0);

  DeclNewString(_str);
  if(value == t_TemperatureControl_FanAck_Type_Error) {
    String__append(SF (String) &_str, string("Actuation failed!"));
  } else {
    String__append(SF (String) &_str, string("Actuation worked!"));
  }

  api_logInfo__t_TemperatureControl_TempControl_i_tcp_tempControl(SF (String) &_str);
}

Unit t_TemperatureControl_TempControl_i_tcp_tempControl_handle_setPoint_(
  STACK_FRAME
  t_TemperatureControl_SetPoint_i value) {
  DeclNewStackFrame(caller, "TempControl_i_tcp_tempControl.c", "", "t_TemperatureControl_TempControl_i_tcp_tempControl_handle_setPoint_", 0);

  DeclNewString(_str);
  String__append(SF (String) &_str, string("Received on setPoint: "));
  t_TemperatureControl_SetPoint_i_string_(SF (String) &_str, value);
  api_logInfo__t_TemperatureControl_TempControl_i_tcp_tempControl(SF (String) &_str);

  convertTempToFahrenheit(SF &value->low);
  convertTempToFahrenheit(SF &value->high);

  DeclNewt_TemperatureControl_SetPoint_i(newSetPoint);
  newSetPoint.low = value->low;
  newSetPoint.high = value->high;

  setPoint = newSetPoint;
}

Unit t_TemperatureControl_TempControl_i_tcp_tempControl_handle_tempChanged_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "TempControl_i_tcp_tempControl.c", "", "t_TemperatureControl_TempControl_i_tcp_tempControl_handle_tempChanged_", 0);

  DeclNewt_TemperatureControl_Temperature_i(currTemp);
  if(api_get_currentTemp__t_TemperatureControl_TempControl_i_tcp_tempControl(SF &currTemp)){
    convertTempToFahrenheit(SF &currTemp);

    DeclNewString(currentTemp_str);
    String__append(SF (String) &currentTemp_str, string("Received: "));
    t_TemperatureControl_Temperature_i_string_(SF (String) &currentTemp_str, &currTemp);
    api_logInfo__t_TemperatureControl_TempControl_i_tcp_tempControl(SF (String) &currentTemp_str);

    if(currTemp.degrees > setPoint.high.degrees) {
      api_put_fanCmd__t_TemperatureControl_TempControl_i_tcp_tempControl(SF t_TemperatureControl_FanCmd_Type_On);
    } else if (currTemp.degrees < setPoint.low.degrees) {
      api_put_fanCmd__t_TemperatureControl_TempControl_i_tcp_tempControl(SF t_TemperatureControl_FanCmd_Type_Off);
    }
  }
}
