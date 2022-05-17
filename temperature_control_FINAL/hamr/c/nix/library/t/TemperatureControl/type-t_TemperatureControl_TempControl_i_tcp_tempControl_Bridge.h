#ifndef SIREUM_TYPE_H_t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge
#define SIREUM_TYPE_H_t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// t.TemperatureControl.TempControl_i_tcp_tempControl_Bridge
#include <type-art_DispatchPropertyProtocol.h>
#include <type-org_sireum_Option_9AF35E.h>
#include <type-art_art_Port_7B28AF.h>
#include <type-art_art_Port_0A16CC.h>
#include <type-art_art_Port_216126.h>
#include <type-art_art_Port_2ED9E6.h>
#include <type-art_art_Port_9CBF18.h>
#include <type-art_Bridge_Ports.h>
#include <type-t_TemperatureControl_TempControl_i_Initialization_Api.h>
#include <type-t_TemperatureControl_TempControl_i_Operational_Api.h>
#include <type-art_Bridge_EntryPoints.h>

typedef struct t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge *t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge;
struct t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge {
  TYPE type;
  union art_DispatchPropertyProtocol dispatchProtocol;
  union Option_9AF35E dispatchTriggers;
  union art_Bridge_EntryPoints entryPoints;
  struct StaticString name;
  struct art_Port_7B28AF currentTemp;
  struct art_Port_0A16CC fanAck;
  struct art_Port_216126 setPoint;
  struct art_Port_2ED9E6 fanCmd;
  struct art_Port_9CBF18 tempChanged;
  struct art_Bridge_Ports ports;
  struct t_TemperatureControl_TempControl_i_Initialization_Api initialization_api;
  struct t_TemperatureControl_TempControl_i_Operational_Api operational_api;
  Z id;
};

#define DeclNewt_TemperatureControl_TempControl_i_tcp_tempControl_Bridge(x) struct t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge x = { .type = Tt_TemperatureControl_TempControl_i_tcp_tempControl_Bridge }

#ifdef __cplusplus
}
#endif

#endif