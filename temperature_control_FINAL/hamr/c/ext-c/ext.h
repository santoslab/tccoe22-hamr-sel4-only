#ifndef EXT_H
#define EXT_H

// This file will not be overwritten so is safe to edit

#include <all.h>

void createTempInFahrenheit(STACK_FRAME F32 value, t_TemperatureControl_Temperature_i result);

void convertTempToFahrenheit(STACK_FRAME t_TemperatureControl_Temperature_i result);

static const F32 MIN_TEMP = 50.0;
static const F32 MAX_TEMP = 100.0;
#endif