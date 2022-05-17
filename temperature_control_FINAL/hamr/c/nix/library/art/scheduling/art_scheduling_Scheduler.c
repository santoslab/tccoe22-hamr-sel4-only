#include <all.h>

// art.scheduling.Scheduler

B art_scheduling_Scheduler__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case Tart_scheduling_nop_NopScheduler: return T;
    default: return F;
  }
}

art_scheduling_Scheduler art_scheduling_Scheduler__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case Tart_scheduling_nop_NopScheduler: break;
    default:
      fprintf(stderr, "Invalid cast from %s to art.scheduling.Scheduler.", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (art_scheduling_Scheduler) this;
}

void art_scheduling_Scheduler_string_(STACK_FRAME String result, art_scheduling_Scheduler this);

Unit art_scheduling_Scheduler_initialize_(STACK_FRAME art_scheduling_Scheduler this) {
  switch (this->type) {
    case Tart_scheduling_nop_NopScheduler: art_scheduling_nop_NopScheduler_initialize_(CALLER (art_scheduling_nop_NopScheduler) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}

Unit art_scheduling_Scheduler_initializationPhase_(STACK_FRAME art_scheduling_Scheduler this) {
  switch (this->type) {
    case Tart_scheduling_nop_NopScheduler: art_scheduling_nop_NopScheduler_initializationPhase_(CALLER (art_scheduling_nop_NopScheduler) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}

Unit art_scheduling_Scheduler_computePhase_(STACK_FRAME art_scheduling_Scheduler this) {
  switch (this->type) {
    case Tart_scheduling_nop_NopScheduler: art_scheduling_nop_NopScheduler_computePhase_(CALLER (art_scheduling_nop_NopScheduler) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}

Unit art_scheduling_Scheduler_finalizePhase_(STACK_FRAME art_scheduling_Scheduler this) {
  switch (this->type) {
    case Tart_scheduling_nop_NopScheduler: art_scheduling_nop_NopScheduler_finalizePhase_(CALLER (art_scheduling_nop_NopScheduler) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}