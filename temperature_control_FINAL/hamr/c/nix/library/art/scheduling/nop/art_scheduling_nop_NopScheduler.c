#include <all.h>

// art.scheduling.nop.NopScheduler

B art_scheduling_nop_NopScheduler__eq(art_scheduling_nop_NopScheduler this, art_scheduling_nop_NopScheduler other) {
  return T;
}

B art_scheduling_nop_NopScheduler__ne(art_scheduling_nop_NopScheduler this, art_scheduling_nop_NopScheduler other);

void art_scheduling_nop_NopScheduler_string_(STACK_FRAME String result, art_scheduling_nop_NopScheduler this) {
  DeclNewStackFrame(caller, "NopScheduler.scala", "art.scheduling.nop.NopScheduler", "string", 0);
  String_string_(SF result, string("NopScheduler("));
  String_string_(SF result, string(")"));
}

void art_scheduling_nop_NopScheduler_cprint(art_scheduling_nop_NopScheduler this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("NopScheduler("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B art_scheduling_nop_NopScheduler__is(STACK_FRAME void* this);
art_scheduling_nop_NopScheduler art_scheduling_nop_NopScheduler__as(STACK_FRAME void *this);

void art_scheduling_nop_NopScheduler_apply(STACK_FRAME art_scheduling_nop_NopScheduler this) {
  DeclNewStackFrame(caller, "NopScheduler.scala", "art.scheduling.nop.NopScheduler", "apply", 0);
}

Unit art_scheduling_nop_NopScheduler_initialize_(STACK_FRAME art_scheduling_nop_NopScheduler this) {
  DeclNewStackFrame(caller, "NopScheduler.scala", "art.scheduling.nop.NopScheduler", "initialize", 0);
}

Unit art_scheduling_nop_NopScheduler_initializationPhase_(STACK_FRAME art_scheduling_nop_NopScheduler this) {
  DeclNewStackFrame(caller, "NopScheduler.scala", "art.scheduling.nop.NopScheduler", "initializationPhase", 0);
}

Unit art_scheduling_nop_NopScheduler_computePhase_(STACK_FRAME art_scheduling_nop_NopScheduler this) {
  DeclNewStackFrame(caller, "NopScheduler.scala", "art.scheduling.nop.NopScheduler", "computePhase", 0);
}

Unit art_scheduling_nop_NopScheduler_finalizePhase_(STACK_FRAME art_scheduling_nop_NopScheduler this) {
  DeclNewStackFrame(caller, "NopScheduler.scala", "art.scheduling.nop.NopScheduler", "finalizePhase", 0);
}