#include <camkes.h>
#include <stdio.h>
#include <sb_types.h>
#include <sb_TempControl_i.h>

TemperatureControl__SetPoint_i setPoint = {0};

void temp_control_init_entrypoint(const int64_t *arg) {
  // setPoint isn't hooked up in the model so create a
  // default setPoint for now
  setPoint = (TemperatureControl__SetPoint_i) { 
    { 70.0, Fahrenheit },
  	{ 90.0, Fahrenheit }
  };
}

void handle_tempChanged(void) {
  TemperatureControl__Temperature_i currTemp;
  if(sb_currentTemp_read(&currTemp)){
    // assume temp is in Fahrenheit
    printf("%s: Received %f F\n", get_instance_name(), currTemp.degrees);

    if(currTemp.degrees < setPoint.low.degrees) {
      TemperatureControl__FanCmd v = On;
      sb_fanCmd_enqueue(&v);
    } 
    else if (currTemp.degrees > setPoint.high.degrees) {
      TemperatureControl__FanCmd v = Off;
      sb_fanCmd_enqueue(&v);
    }
  } 
}

void handle_fanAck(const TemperatureControl__FanAck *fanAck) {
  if(*fanAck == Error){
    printf("%s: Actuation failed\n", get_instance_name());
  } else {
  	printf("%s: Actuation worked\n", get_instance_name());
  }
}
