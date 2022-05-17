// This file will be regenerated, do not edit

#ifndef SB_TEMPSENSOR_I_H
#define SB_TEMPSENSOR_I_H

#include <sb_types.h>

bool sb_currentTemp_write(const TemperatureControl__Temperature_i * value);

bool sb_tempChanged_enqueue(void);

void temp_sensor_compute_entrypoint(const int64_t * in_arg);

void temp_sensor_init_entrypoint(const int64_t *arg);

#endif // SB_TEMPSENSOR_I_H
