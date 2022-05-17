#ifndef SIREUM_H_t_IPCPorts
#define SIREUM_H_t_IPCPorts

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

void t_IPCPorts_init(STACK_FRAME_ONLY);

Z t_IPCPorts_TempSensor_i_tsp_tempSensor_App(STACK_FRAME_ONLY);
Z t_IPCPorts_TempControl_i_tcp_tempControl_App(STACK_FRAME_ONLY);
Z t_IPCPorts_Fan_i_fp_fan_App(STACK_FRAME_ONLY);
Z t_IPCPorts_Main(STACK_FRAME_ONLY);

void t_IPCPorts_emptyReceiveOut(STACK_FRAME MBox2_1CBFC4 result);

void t_IPCPorts_emptyReceiveAsyncOut(STACK_FRAME MBox2_1029D1 result);

void t_IPCPorts_init_TempSensor_i_tsp_tempSensor_App(STACK_FRAME_ONLY);

void t_IPCPorts_init_TempControl_i_tcp_tempControl_App(STACK_FRAME_ONLY);

void t_IPCPorts_init_Fan_i_fp_fan_App(STACK_FRAME_ONLY);

void t_IPCPorts_init_Main(STACK_FRAME_ONLY);

#ifdef __cplusplus
}
#endif

#endif