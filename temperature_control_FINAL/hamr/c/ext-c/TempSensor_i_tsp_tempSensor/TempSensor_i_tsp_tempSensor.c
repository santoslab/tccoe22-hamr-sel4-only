#include <TempSensor_i_tsp_tempSensor_api.h>
#include <TempSensor_i_tsp_tempSensor.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

static char* component_id = "TempControlSystem_i_Instance_tsp_tempSensor";

struct t_TemperatureControl_Temperature_i lastTemp;

void senseTemp(STACK_FRAME t_TemperatureControl_Temperature_i);

int delta = 4;

Unit t_TemperatureControl_TempSensor_i_tsp_tempSensor_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "TempSensor_i_tsp_tempSensor.c", "", "t_TemperatureControl_TempSensor_i_tsp_tempSensor_initialise_", 0);

  DeclNewt_TemperatureControl_Temperature_i(t0);
  createTempInFahrenheit(SF 80.0, &t0);
  api_put_currentTemp__t_TemperatureControl_TempSensor_i_tsp_tempSensor(SF &t0);

  lastTemp = t0;

  api_put_tempChanged__t_TemperatureControl_TempSensor_i_tsp_tempSensor(SF_LAST);
}

Unit t_TemperatureControl_TempSensor_i_tsp_tempSensor_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "TempSensor_i_tsp_tempSensor.c", "", "t_TemperatureControl_TempSensor_i_tsp_tempSensor_finalise_", 0);
}

Unit t_TemperatureControl_TempSensor_i_tsp_tempSensor_timeTriggered_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "TempSensor_i_tsp_tempSensor.c", "", "t_TemperatureControl_TempSensor_i_tsp_tempSensor_timeTriggered_", 0);

  DeclNewt_TemperatureControl_Temperature_i(currTemp);
  senseTemp(SF &currTemp);
  convertTempToFahrenheit(SF &currTemp);

  api_put_currentTemp__t_TemperatureControl_TempSensor_i_tsp_tempSensor(SF &currTemp);

  if(lastTemp.degrees != currTemp.degrees) {
    lastTemp = currTemp;

    api_put_tempChanged__t_TemperatureControl_TempSensor_i_tsp_tempSensor(SF_LAST);
  }
}

void senseTemp(STACK_FRAME t_TemperatureControl_Temperature_i result){
  DeclNewStackFrame(caller, "TempSensor_i_tsp_tempSensor.c", "", "senseTemp", 0);

  result->degrees = lastTemp.degrees + delta;
  result->unit = t_TemperatureControl_TempUnit_Type_Fahrenheit;

  DeclNewString(currentTemp_str);
  String__append(SF (String) &currentTemp_str, string("Sensed: "));
  t_TemperatureControl_Temperature_i_string_(SF (String) &currentTemp_str, result);
  api_logInfo__t_TemperatureControl_TempSensor_i_tsp_tempSensor(SF (String) &currentTemp_str);

  if(result->degrees < MIN_TEMP) delta = 4;
  else if(result->degrees > MAX_TEMP) delta = -4;
}