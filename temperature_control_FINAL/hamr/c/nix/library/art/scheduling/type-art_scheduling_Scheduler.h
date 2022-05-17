#ifndef SIREUM_TYPE_H_art_scheduling_Scheduler
#define SIREUM_TYPE_H_art_scheduling_Scheduler

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.scheduling.Scheduler

#include <type-art_scheduling_nop_NopScheduler.h>

typedef union art_scheduling_Scheduler *art_scheduling_Scheduler;
union art_scheduling_Scheduler {
  TYPE type;
  struct art_scheduling_nop_NopScheduler art_scheduling_nop_NopScheduler;
};

#define DeclNewart_scheduling_Scheduler(x) union art_scheduling_Scheduler x = { 0 }

#ifdef __cplusplus
}
#endif

#endif