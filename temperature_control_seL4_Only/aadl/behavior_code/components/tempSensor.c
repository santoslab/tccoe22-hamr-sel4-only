#include <camkes.h>
#include <stdio.h>
#include <sb_types.h>
#include <sb_TempSensor_i.h>

TemperatureControl__Temperature_i lastTemp;

void senseTemp(TemperatureControl__Temperature_i*);

int delta = 4;

const double MIN_TEMP = 60.0;
const double MAX_TEMP = 100.0;

void temp_sensor_init_entrypoint(const int64_t *arg) {
  lastTemp = (TemperatureControl__Temperature_i) { 80.0, Fahrenheit };
  
  sb_currentTemp_write(&lastTemp);
}

void temp_sensor_compute_entrypoint(const int64_t * in_arg) {
  TemperatureControl__Temperature_i currTemp;
  senseTemp(&currTemp);

  sb_currentTemp_write(&currTemp);

  if(lastTemp.degrees != currTemp.degrees) {
    lastTemp = currTemp;

    sb_tempChanged_enqueue();
  }
}

void senseTemp(TemperatureControl__Temperature_i *result) {
  result->degrees = lastTemp.degrees + delta;
  result->unit = Fahrenheit;

  printf("%s: Sensed %f F\n", get_instance_name(), result->degrees);

  if(result->degrees < MIN_TEMP) delta = 4;
  else if(result->degrees > MAX_TEMP) delta = -4;
}
