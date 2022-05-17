#ifndef SIREUM_H_t_ArtNix
#define SIREUM_H_t_ArtNix

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

void t_ArtNix_init(STACK_FRAME_ONLY);

Z t_ArtNix_maxPortIds(STACK_FRAME_ONLY);
art_TimeTriggered t_ArtNix_timeTriggered(STACK_FRAME_ONLY);
Option_8E9F45 t_ArtNix_noData(STACK_FRAME_ONLY);
MS_2590FE t_ArtNix_data(STACK_FRAME_ONLY);
MS_B5E3E6 t_ArtNix_connection(STACK_FRAME_ONLY);
MS_30A5B4 t_ArtNix_eventInPorts(STACK_FRAME_ONLY);
MS_2590FE t_ArtNix_frozen(STACK_FRAME_ONLY);
void t_ArtNix_frozen_a(STACK_FRAME MS_2590FE p_frozen);
MS_2590FE t_ArtNix_outgoing(STACK_FRAME_ONLY);
void t_ArtNix_outgoing_a(STACK_FRAME MS_2590FE p_outgoing);
B t_ArtNix_isTimeDispatch(STACK_FRAME_ONLY);
void t_ArtNix_isTimeDispatch_a(STACK_FRAME B p_isTimeDispatch);

Unit t_ArtNix_timeDispatch(STACK_FRAME_ONLY);

Unit t_ArtNix_eventDispatch(STACK_FRAME_ONLY);

Unit t_ArtNix_updateData(STACK_FRAME Z port, art_DataContent d);

Unit t_ArtNix_setUpSystemState(STACK_FRAME_ONLY);

Unit t_ArtNix_initializePhase(STACK_FRAME_ONLY);

Unit t_ArtNix_computePhase(STACK_FRAME_ONLY);

Unit t_ArtNix_finalizePhase(STACK_FRAME_ONLY);

Unit t_ArtNix_tearDownSystemState(STACK_FRAME_ONLY);

Unit t_ArtNix_logInfo(STACK_FRAME String title, String msg);

Unit t_ArtNix_logDebug(STACK_FRAME String title, String msg);

Unit t_ArtNix_logError(STACK_FRAME String title, String msg);

Unit t_ArtNix_putValue(STACK_FRAME Z portId, art_DataContent data);

void t_ArtNix_getValue(STACK_FRAME Option_8E9F45 result, Z portId);

Unit t_ArtNix_sendOutput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds);

Unit t_ArtNix_receiveInput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds);

void t_ArtNix_dispatchStatus(STACK_FRAME art_DispatchStatus result, Z bridgeId);

void t_ArtNix_init_maxPortIds(STACK_FRAME_ONLY);

void t_ArtNix_init_timeTriggered(STACK_FRAME_ONLY);

void t_ArtNix_init_noData(STACK_FRAME_ONLY);

void t_ArtNix_init_data(STACK_FRAME_ONLY);

void t_ArtNix_init_connection(STACK_FRAME_ONLY);

void t_ArtNix_init_eventInPorts(STACK_FRAME_ONLY);

void t_ArtNix_init_frozen(STACK_FRAME_ONLY);

void t_ArtNix_init_outgoing(STACK_FRAME_ONLY);

void t_ArtNix_init_isTimeDispatch(STACK_FRAME_ONLY);

#ifdef __cplusplus
}
#endif

#endif