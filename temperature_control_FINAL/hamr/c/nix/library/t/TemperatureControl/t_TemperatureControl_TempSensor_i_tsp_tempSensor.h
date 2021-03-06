#ifndef SIREUM_H_t_TemperatureControl_TempSensor_i_tsp_tempSensor
#define SIREUM_H_t_TemperatureControl_TempSensor_i_tsp_tempSensor

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

Unit t_TemperatureControl_TempSensor_i_tsp_tempSensor_initialise(STACK_FRAME t_TemperatureControl_TempSensor_i_Initialization_Api api);

Unit t_TemperatureControl_TempSensor_i_tsp_tempSensor_timeTriggered(STACK_FRAME t_TemperatureControl_TempSensor_i_Operational_Api api);

Unit t_TemperatureControl_TempSensor_i_tsp_tempSensor_finalise(STACK_FRAME t_TemperatureControl_TempSensor_i_Operational_Api api);

#ifdef __cplusplus
}
#endif

#endif