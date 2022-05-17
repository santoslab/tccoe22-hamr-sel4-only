#include <types.h>

size_t sizeOf(Type t) {
  TYPE type = t->type;
  switch (type) {
    case TTuple2_EC3B57: return sizeof(struct Tuple2_EC3B57); // (Z, Z)
    case TIS_AA0F82: return sizeof(struct IS_AA0F82); // IS[Z, (Z, Z)]
    case TIS_948B60: return sizeof(struct IS_948B60); // IS[Z, String]
    case TIS_82ABD8: return sizeof(struct IS_82ABD8); // IS[Z, Z]
    case TIS_7E8796: return sizeof(struct IS_7E8796); // IS[Z, art.Bridge]
    case TIS_08117A: return sizeof(struct IS_08117A); // IS[Z, art.UConnection]
    case TIS_820232: return sizeof(struct IS_820232); // IS[Z, art.UPort]
    case TMBox2_1029D1: return sizeof(struct MBox2_1029D1); // MBox2[Z, Option[art.DataContent]]
    case TMBox2_1CBFC4: return sizeof(struct MBox2_1CBFC4); // MBox2[Z, art.DataContent]
    case TMS_B5E3E6: return sizeof(struct MS_B5E3E6); // MS[Z, IS[Z, (Z, Z)]]
    case TMS_E444B2: return sizeof(struct MS_E444B2); // MS[Z, IS[Z, Z]]
    case TMS_83D5EB: return sizeof(struct MS_83D5EB); // MS[Z, Option[art.Bridge]]
    case TMS_2590FE: return sizeof(struct MS_2590FE); // MS[Z, Option[art.DataContent]]
    case TMS_F55A18: return sizeof(struct MS_F55A18); // MS[Z, Option[art.UPort]]
    case TMS_30A5B4: return sizeof(struct MS_30A5B4); // MS[Z, Z]
    case TNone_5C1355: return sizeof(struct None_5C1355); // None[IS[Z, Z]]
    case TNone_76463B: return sizeof(struct None_76463B); // None[Z]
    case TNone_734370: return sizeof(struct None_734370); // None[art.Bridge]
    case TNone_964667: return sizeof(struct None_964667); // None[art.DataContent]
    case TNone_ED72E1: return sizeof(struct None_ED72E1); // None[art.Empty]
    case TNone_39BC5F: return sizeof(struct None_39BC5F); // None[art.UPort]
    case TNone_831682: return sizeof(struct None_831682); // None[t.TemperatureControl.FanAck.Type]
    case TNone_380ACD: return sizeof(struct None_380ACD); // None[t.TemperatureControl.FanCmd.Type]
    case TNone_856E6F: return sizeof(struct None_856E6F); // None[t.TemperatureControl.Fan_i_Initialization_Api]
    case TNone_475EF0: return sizeof(struct None_475EF0); // None[t.TemperatureControl.Fan_i_Operational_Api]
    case TNone_B473AE: return sizeof(struct None_B473AE); // None[t.TemperatureControl.SetPoint_i]
    case TNone_ACBA15: return sizeof(struct None_ACBA15); // None[t.TemperatureControl.TempControl_i_Initialization_Api]
    case TNone_A41F76: return sizeof(struct None_A41F76); // None[t.TemperatureControl.TempControl_i_Operational_Api]
    case TNone_68DB3B: return sizeof(struct None_68DB3B); // None[t.TemperatureControl.TempSensor_i_Initialization_Api]
    case TNone_AC21B6: return sizeof(struct None_AC21B6); // None[t.TemperatureControl.TempSensor_i_Operational_Api]
    case TNone_3FD7F9: return sizeof(struct None_3FD7F9); // None[t.TemperatureControl.TempUnit.Type]
    case TNone_4CBE13: return sizeof(struct None_4CBE13); // None[t.TemperatureControl.Temperature_i]
    case TSome_80A548: return sizeof(struct Some_80A548); // Some[(Z, Z)]
    case TSome_488F47: return sizeof(struct Some_488F47); // Some[Z]
    case TSome_482E57: return sizeof(struct Some_482E57); // Some[art.Bridge]
    case TSome_D29615: return sizeof(struct Some_D29615); // Some[art.DataContent]
    case TSome_4782C6: return sizeof(struct Some_4782C6); // Some[art.Empty]
    case TSome_3E197E: return sizeof(struct Some_3E197E); // Some[art.UPort]
    case TSome_07AD88: return sizeof(struct Some_07AD88); // Some[t.TemperatureControl.FanAck.Type]
    case TSome_779716: return sizeof(struct Some_779716); // Some[t.TemperatureControl.FanCmd.Type]
    case TSome_C959A2: return sizeof(struct Some_C959A2); // Some[t.TemperatureControl.Fan_i_Initialization_Api]
    case TSome_A89224: return sizeof(struct Some_A89224); // Some[t.TemperatureControl.Fan_i_Operational_Api]
    case TSome_D8D240: return sizeof(struct Some_D8D240); // Some[t.TemperatureControl.SetPoint_i]
    case TSome_D50AE7: return sizeof(struct Some_D50AE7); // Some[t.TemperatureControl.TempControl_i_Initialization_Api]
    case TSome_E49AF0: return sizeof(struct Some_E49AF0); // Some[t.TemperatureControl.TempControl_i_Operational_Api]
    case TSome_23FE19: return sizeof(struct Some_23FE19); // Some[t.TemperatureControl.TempSensor_i_Initialization_Api]
    case TSome_82706F: return sizeof(struct Some_82706F); // Some[t.TemperatureControl.TempSensor_i_Operational_Api]
    case TSome_486E43: return sizeof(struct Some_486E43); // Some[t.TemperatureControl.TempUnit.Type]
    case TSome_14C467: return sizeof(struct Some_14C467); // Some[t.TemperatureControl.Temperature_i]
    case TString: return sizeof(struct String); // String
    case Tart_ArchitectureDescription: return sizeof(struct art_ArchitectureDescription); // art.ArchitectureDescription
    case Tart_Bridge_Ports: return sizeof(struct art_Bridge_Ports); // art.Bridge.Ports
    case Tart_Connection: return sizeof(struct art_Connection); // art.Connection
    case Tart_DispatchPropertyProtocol_Periodic: return sizeof(struct art_DispatchPropertyProtocol_Periodic); // art.DispatchPropertyProtocol.Periodic
    case Tart_DispatchPropertyProtocol_Sporadic: return sizeof(struct art_DispatchPropertyProtocol_Sporadic); // art.DispatchPropertyProtocol.Sporadic
    case Tart_Empty: return sizeof(struct art_Empty); // art.Empty
    case Tart_EventTriggered: return sizeof(struct art_EventTriggered); // art.EventTriggered
    case Tart_Port_9CBF18: return sizeof(struct art_Port_9CBF18); // art.Port[art.Empty]
    case Tart_Port_0A16CC: return sizeof(struct art_Port_0A16CC); // art.Port[t.TemperatureControl.FanAck.Type]
    case Tart_Port_2ED9E6: return sizeof(struct art_Port_2ED9E6); // art.Port[t.TemperatureControl.FanCmd.Type]
    case Tart_Port_216126: return sizeof(struct art_Port_216126); // art.Port[t.TemperatureControl.SetPoint_i]
    case Tart_Port_7B28AF: return sizeof(struct art_Port_7B28AF); // art.Port[t.TemperatureControl.Temperature_i]
    case Tart_TimeTriggered: return sizeof(struct art_TimeTriggered); // art.TimeTriggered
    case Tart_scheduling_nop_NopScheduler: return sizeof(struct art_scheduling_nop_NopScheduler); // art.scheduling.nop.NopScheduler
    case Tops_ISZOps_A6D40E: return sizeof(struct ops_ISZOps_A6D40E); // ops.ISZOps[Z]
    case Tt_Base_Types_Boolean_Payload: return sizeof(struct t_Base_Types_Boolean_Payload); // t.Base_Types.Boolean_Payload
    case Tt_Base_Types_Float_32_Payload: return sizeof(struct t_Base_Types_Float_32_Payload); // t.Base_Types.Float_32_Payload
    case Tt_ProcessorTimingProperties: return sizeof(struct t_ProcessorTimingProperties); // t.ProcessorTimingProperties
    case Tt_TemperatureControl_FanAck_Payload: return sizeof(struct t_TemperatureControl_FanAck_Payload); // t.TemperatureControl.FanAck_Payload
    case Tt_TemperatureControl_FanCmd_Payload: return sizeof(struct t_TemperatureControl_FanCmd_Payload); // t.TemperatureControl.FanCmd_Payload
    case Tt_TemperatureControl_Fan_i_Initialization_Api: return sizeof(struct t_TemperatureControl_Fan_i_Initialization_Api); // t.TemperatureControl.Fan_i_Initialization_Api
    case Tt_TemperatureControl_Fan_i_Operational_Api: return sizeof(struct t_TemperatureControl_Fan_i_Operational_Api); // t.TemperatureControl.Fan_i_Operational_Api
    case Tt_TemperatureControl_Fan_i_fp_fan_Bridge: return sizeof(struct t_TemperatureControl_Fan_i_fp_fan_Bridge); // t.TemperatureControl.Fan_i_fp_fan_Bridge
    case Tt_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints: return sizeof(struct t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints); // t.TemperatureControl.Fan_i_fp_fan_Bridge.EntryPoints
    case Tt_TemperatureControl_SetPoint_i: return sizeof(struct t_TemperatureControl_SetPoint_i); // t.TemperatureControl.SetPoint_i
    case Tt_TemperatureControl_SetPoint_i_Payload: return sizeof(struct t_TemperatureControl_SetPoint_i_Payload); // t.TemperatureControl.SetPoint_i_Payload
    case Tt_TemperatureControl_TempControl_i_Initialization_Api: return sizeof(struct t_TemperatureControl_TempControl_i_Initialization_Api); // t.TemperatureControl.TempControl_i_Initialization_Api
    case Tt_TemperatureControl_TempControl_i_Operational_Api: return sizeof(struct t_TemperatureControl_TempControl_i_Operational_Api); // t.TemperatureControl.TempControl_i_Operational_Api
    case Tt_TemperatureControl_TempControl_i_tcp_tempControl_Bridge: return sizeof(struct t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge); // t.TemperatureControl.TempControl_i_tcp_tempControl_Bridge
    case Tt_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints: return sizeof(struct t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints); // t.TemperatureControl.TempControl_i_tcp_tempControl_Bridge.EntryPoints
    case Tt_TemperatureControl_TempSensor_i_Initialization_Api: return sizeof(struct t_TemperatureControl_TempSensor_i_Initialization_Api); // t.TemperatureControl.TempSensor_i_Initialization_Api
    case Tt_TemperatureControl_TempSensor_i_Operational_Api: return sizeof(struct t_TemperatureControl_TempSensor_i_Operational_Api); // t.TemperatureControl.TempSensor_i_Operational_Api
    case Tt_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge: return sizeof(struct t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge); // t.TemperatureControl.TempSensor_i_tsp_tempSensor_Bridge
    case Tt_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints: return sizeof(struct t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints); // t.TemperatureControl.TempSensor_i_tsp_tempSensor_Bridge.EntryPoints
    case Tt_TemperatureControl_TempUnit_Payload: return sizeof(struct t_TemperatureControl_TempUnit_Payload); // t.TemperatureControl.TempUnit_Payload
    case Tt_TemperatureControl_Temperature_i: return sizeof(struct t_TemperatureControl_Temperature_i); // t.TemperatureControl.Temperature_i
    case Tt_TemperatureControl_Temperature_i_Payload: return sizeof(struct t_TemperatureControl_Temperature_i_Payload); // t.TemperatureControl.Temperature_i_Payload
    case Tt_ThreadTimingProperties: return sizeof(struct t_ThreadTimingProperties); // t.ThreadTimingProperties
    default: fprintf(stderr, "%s: %d\n", "Unexpected TYPE: ", type); exit(1);
  }
}

void Type_assign(void *dest, void *src, size_t destSize) {
  Type srcType = (Type) src;
  if (srcType->type == TString) {
    String_assign((String) dest, (String) src);
    return;
  }
  size_t srcSize = sizeOf(srcType);
  memcpy(dest, src, srcSize);
  memset(((char *) dest) + srcSize, 0, destSize - srcSize);
}

char *TYPE_string_(void *type) {
  static char *strings[] = {
    "(Z, Z)",
    "IS[Z, (Z, Z)]",
    "IS[Z, String]",
    "IS[Z, Z]",
    "IS[Z, art.Bridge]",
    "IS[Z, art.UConnection]",
    "IS[Z, art.UPort]",
    "MBox2[Z, Option[art.DataContent]]",
    "MBox2[Z, art.DataContent]",
    "MS[Z, IS[Z, (Z, Z)]]",
    "MS[Z, IS[Z, Z]]",
    "MS[Z, Option[art.Bridge]]",
    "MS[Z, Option[art.DataContent]]",
    "MS[Z, Option[art.UPort]]",
    "MS[Z, Z]",
    "None[IS[Z, Z]]",
    "None[Z]",
    "None[art.Bridge]",
    "None[art.DataContent]",
    "None[art.Empty]",
    "None[art.UPort]",
    "None[t.TemperatureControl.FanAck.Type]",
    "None[t.TemperatureControl.FanCmd.Type]",
    "None[t.TemperatureControl.Fan_i_Initialization_Api]",
    "None[t.TemperatureControl.Fan_i_Operational_Api]",
    "None[t.TemperatureControl.SetPoint_i]",
    "None[t.TemperatureControl.TempControl_i_Initialization_Api]",
    "None[t.TemperatureControl.TempControl_i_Operational_Api]",
    "None[t.TemperatureControl.TempSensor_i_Initialization_Api]",
    "None[t.TemperatureControl.TempSensor_i_Operational_Api]",
    "None[t.TemperatureControl.TempUnit.Type]",
    "None[t.TemperatureControl.Temperature_i]",
    "Some[(Z, Z)]",
    "Some[Z]",
    "Some[art.Bridge]",
    "Some[art.DataContent]",
    "Some[art.Empty]",
    "Some[art.UPort]",
    "Some[t.TemperatureControl.FanAck.Type]",
    "Some[t.TemperatureControl.FanCmd.Type]",
    "Some[t.TemperatureControl.Fan_i_Initialization_Api]",
    "Some[t.TemperatureControl.Fan_i_Operational_Api]",
    "Some[t.TemperatureControl.SetPoint_i]",
    "Some[t.TemperatureControl.TempControl_i_Initialization_Api]",
    "Some[t.TemperatureControl.TempControl_i_Operational_Api]",
    "Some[t.TemperatureControl.TempSensor_i_Initialization_Api]",
    "Some[t.TemperatureControl.TempSensor_i_Operational_Api]",
    "Some[t.TemperatureControl.TempUnit.Type]",
    "Some[t.TemperatureControl.Temperature_i]",
    "String",
    "art.ArchitectureDescription",
    "art.Bridge.Ports",
    "art.Connection",
    "art.DispatchPropertyProtocol.Periodic",
    "art.DispatchPropertyProtocol.Sporadic",
    "art.Empty",
    "art.EventTriggered",
    "art.Port[art.Empty]",
    "art.Port[t.TemperatureControl.FanAck.Type]",
    "art.Port[t.TemperatureControl.FanCmd.Type]",
    "art.Port[t.TemperatureControl.SetPoint_i]",
    "art.Port[t.TemperatureControl.Temperature_i]",
    "art.TimeTriggered",
    "art.scheduling.nop.NopScheduler",
    "ops.ISZOps[Z]",
    "t.Base_Types.Boolean_Payload",
    "t.Base_Types.Float_32_Payload",
    "t.ProcessorTimingProperties",
    "t.TemperatureControl.FanAck_Payload",
    "t.TemperatureControl.FanCmd_Payload",
    "t.TemperatureControl.Fan_i_Initialization_Api",
    "t.TemperatureControl.Fan_i_Operational_Api",
    "t.TemperatureControl.Fan_i_fp_fan_Bridge",
    "t.TemperatureControl.Fan_i_fp_fan_Bridge.EntryPoints",
    "t.TemperatureControl.SetPoint_i",
    "t.TemperatureControl.SetPoint_i_Payload",
    "t.TemperatureControl.TempControl_i_Initialization_Api",
    "t.TemperatureControl.TempControl_i_Operational_Api",
    "t.TemperatureControl.TempControl_i_tcp_tempControl_Bridge",
    "t.TemperatureControl.TempControl_i_tcp_tempControl_Bridge.EntryPoints",
    "t.TemperatureControl.TempSensor_i_Initialization_Api",
    "t.TemperatureControl.TempSensor_i_Operational_Api",
    "t.TemperatureControl.TempSensor_i_tsp_tempSensor_Bridge",
    "t.TemperatureControl.TempSensor_i_tsp_tempSensor_Bridge.EntryPoints",
    "t.TemperatureControl.TempUnit_Payload",
    "t.TemperatureControl.Temperature_i",
    "t.TemperatureControl.Temperature_i_Payload",
    "t.ThreadTimingProperties"
  };
  return strings[((Type) type)->type];
}