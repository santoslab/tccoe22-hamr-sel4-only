#include <all.h>

// None[t.TemperatureControl.TempUnit.Type]

B None_3FD7F9__eq(None_3FD7F9 this, None_3FD7F9 other) {
  return T;
}

B None_3FD7F9__ne(None_3FD7F9 this, None_3FD7F9 other);

void None_3FD7F9_string_(STACK_FRAME String result, None_3FD7F9 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_3FD7F9_cprint(None_3FD7F9 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_3FD7F9__is(STACK_FRAME void* this);
None_3FD7F9 None_3FD7F9__as(STACK_FRAME void *this);

void None_3FD7F9_apply(STACK_FRAME None_3FD7F9 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_3FD7F9", "apply", 0);
}