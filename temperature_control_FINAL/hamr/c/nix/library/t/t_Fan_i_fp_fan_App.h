#ifndef SIREUM_H_t_Fan_i_fp_fan_App
#define SIREUM_H_t_Fan_i_fp_fan_App

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

void t_Fan_i_fp_fan_App_init(STACK_FRAME_ONLY);

art_Bridge_EntryPoints t_Fan_i_fp_fan_App_entryPoints(STACK_FRAME_ONLY);
Z t_Fan_i_fp_fan_App_appPortId(STACK_FRAME_ONLY);
Option_882048 t_Fan_i_fp_fan_App_appPortIdOpt(STACK_FRAME_ONLY);
Z t_Fan_i_fp_fan_App_fanCmdPortId(STACK_FRAME_ONLY);
Option_882048 t_Fan_i_fp_fan_App_fanCmdPortIdOpt(STACK_FRAME_ONLY);

Z t_Fan_i_fp_fan_App_main(STACK_FRAME IS_948B60 args);

Unit t_Fan_i_fp_fan_App_atExit(STACK_FRAME_ONLY);

Unit t_Fan_i_fp_fan_App_initialiseArchitecture(STACK_FRAME Z seed);

Unit t_Fan_i_fp_fan_App_initialise(STACK_FRAME_ONLY);

Unit t_Fan_i_fp_fan_App_compute(STACK_FRAME_ONLY);

Unit t_Fan_i_fp_fan_App_exit(STACK_FRAME_ONLY);

Unit t_Fan_i_fp_fan_App_touch_printDataContent(STACK_FRAME art_DataContent a);

Unit t_Fan_i_fp_fan_App_touch(STACK_FRAME_ONLY);

Unit t_Fan_i_fp_fan_App_finalise(STACK_FRAME_ONLY);

void t_Fan_i_fp_fan_App_init_entryPoints(STACK_FRAME_ONLY);

void t_Fan_i_fp_fan_App_init_appPortId(STACK_FRAME_ONLY);

void t_Fan_i_fp_fan_App_init_appPortIdOpt(STACK_FRAME_ONLY);

void t_Fan_i_fp_fan_App_init_fanCmdPortId(STACK_FRAME_ONLY);

void t_Fan_i_fp_fan_App_init_fanCmdPortIdOpt(STACK_FRAME_ONLY);

#ifdef __cplusplus
}
#endif

#endif