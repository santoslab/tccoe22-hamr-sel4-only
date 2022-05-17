#include <camkes.h>
#include <stdio.h>
#include <sb_types.h>
#include <sb_Fan_i.h>

void handle_fanCmd(const TemperatureControl__FanCmd *fanCmd) {
  char* _fanCmd = *fanCmd == On ? "On" : "Off";

  printf("%s: Received %s on fanCmd port\n", get_instance_name(), _fanCmd);

  // always return Ok
  TemperatureControl__FanAck _fanAck = Ok;

  sb_fanAck_enqueue(&_fanAck);
}
