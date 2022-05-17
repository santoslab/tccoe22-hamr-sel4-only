#include <ext.h>

// This file will not be overwritten so is safe to edit

// add c extension code here

void createTempInFahrenheit(STACK_FRAME F32 value, t_TemperatureControl_Temperature_i result) {
  DeclNewStackFrame(caller, "ext.c", "", "createTempInFahrenheit", 0);

  result->degrees = value;
  result->unit = t_TemperatureControl_TempUnit_Type_Fahrenheit;
}

void convertTempToFahrenheit(STACK_FRAME t_TemperatureControl_Temperature_i result) {
  if(result->unit == t_TemperatureControl_TempUnit_Type_Celsius) {
    result->degrees = result->degrees * 9.0 / 5.0 + 32.0;
  } else if(result->unit == t_TemperatureControl_TempUnit_Type_Kelvin) {
    result->degrees = result->degrees * 9.0 / 5.0 - 459.67;
  }
}