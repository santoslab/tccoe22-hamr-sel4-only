#ifndef SIREUM_TYPE_H_t_TemperatureControl_Temperature_i_Payload
#define SIREUM_TYPE_H_t_TemperatureControl_Temperature_i_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// t.TemperatureControl.Temperature_i_Payload
#include <type-t_TemperatureControl_Temperature_i.h>

typedef struct t_TemperatureControl_Temperature_i_Payload *t_TemperatureControl_Temperature_i_Payload;
struct t_TemperatureControl_Temperature_i_Payload {
  TYPE type;
  struct t_TemperatureControl_Temperature_i value;
};

#define DeclNewt_TemperatureControl_Temperature_i_Payload(x) struct t_TemperatureControl_Temperature_i_Payload x = { .type = Tt_TemperatureControl_Temperature_i_Payload }

#ifdef __cplusplus
}
#endif

#endif