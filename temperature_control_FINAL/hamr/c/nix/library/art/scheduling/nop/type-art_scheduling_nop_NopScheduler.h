#ifndef SIREUM_TYPE_H_art_scheduling_nop_NopScheduler
#define SIREUM_TYPE_H_art_scheduling_nop_NopScheduler

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.scheduling.nop.NopScheduler

typedef struct art_scheduling_nop_NopScheduler *art_scheduling_nop_NopScheduler;
struct art_scheduling_nop_NopScheduler {
  TYPE type;
};

#define DeclNewart_scheduling_nop_NopScheduler(x) struct art_scheduling_nop_NopScheduler x = { .type = Tart_scheduling_nop_NopScheduler }

#ifdef __cplusplus
}
#endif

#endif