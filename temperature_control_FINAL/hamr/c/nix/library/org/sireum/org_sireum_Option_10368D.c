#include <all.h>

// Option[t.TemperatureControl.TempSensor_i_Operational_Api]

B Option_10368D__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_AC21B6: return T;
    case TSome_82706F: return T;
    default: return F;
  }
}

Option_10368D Option_10368D__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_AC21B6: break;
    case TSome_82706F: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[t.TemperatureControl.TempSensor_i_Operational_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_10368D) this;
}

void Option_10368D_string_(STACK_FRAME String result, Option_10368D this);

void Option_10368D_get_(STACK_FRAME t_TemperatureControl_TempSensor_i_Operational_Api result, Option_10368D this) {
  switch (this->type) {
    case TNone_AC21B6: None_AC21B6_get_(CALLER (t_TemperatureControl_TempSensor_i_Operational_Api) result, (None_AC21B6) this); return;
    case TSome_82706F: Some_82706F_get_(CALLER (t_TemperatureControl_TempSensor_i_Operational_Api) result, (Some_82706F) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}