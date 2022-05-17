#ifndef SIREUM_H_art_scheduling_nop_NopScheduler
#define SIREUM_H_art_scheduling_nop_NopScheduler

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.scheduling.nop.NopScheduler


B art_scheduling_nop_NopScheduler__eq(art_scheduling_nop_NopScheduler this, art_scheduling_nop_NopScheduler other);
inline B art_scheduling_nop_NopScheduler__ne(art_scheduling_nop_NopScheduler this, art_scheduling_nop_NopScheduler other) {
  return !art_scheduling_nop_NopScheduler__eq(this, other);
};
void art_scheduling_nop_NopScheduler_string_(STACK_FRAME String result, art_scheduling_nop_NopScheduler this);
void art_scheduling_nop_NopScheduler_cprint(art_scheduling_nop_NopScheduler this, B isOut);

inline B art_scheduling_nop_NopScheduler__is(STACK_FRAME void* this) {
  return ((art_scheduling_nop_NopScheduler) this)->type == Tart_scheduling_nop_NopScheduler;
}

inline art_scheduling_nop_NopScheduler art_scheduling_nop_NopScheduler__as(STACK_FRAME void *this) {
  if (art_scheduling_nop_NopScheduler__is(CALLER this)) return (art_scheduling_nop_NopScheduler) this;
  sfAbortImpl(CALLER "Invalid cast to art.scheduling.nop.NopScheduler.");
  abort();
}

void art_scheduling_nop_NopScheduler_apply(STACK_FRAME art_scheduling_nop_NopScheduler this);

Unit art_scheduling_nop_NopScheduler_initialize_(STACK_FRAME art_scheduling_nop_NopScheduler this);

Unit art_scheduling_nop_NopScheduler_initializationPhase_(STACK_FRAME art_scheduling_nop_NopScheduler this);

Unit art_scheduling_nop_NopScheduler_computePhase_(STACK_FRAME art_scheduling_nop_NopScheduler this);

Unit art_scheduling_nop_NopScheduler_finalizePhase_(STACK_FRAME art_scheduling_nop_NopScheduler this);

#ifdef __cplusplus
}
#endif

#endif