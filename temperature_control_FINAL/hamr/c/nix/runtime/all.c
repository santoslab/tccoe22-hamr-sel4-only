#include <all.h>

B Type__eq(void *t1, void *t2) {
  TYPE type = ((Type) t1)->type;
  if (type != ((Type) t2)->type) return F;
  switch (type) {
    case TTuple2_EC3B57: return Tuple2_EC3B57__eq((Tuple2_EC3B57) t1, (Tuple2_EC3B57) t2);
    case TIS_AA0F82: return IS_AA0F82__eq((IS_AA0F82) t1, (IS_AA0F82) t2);
    case TIS_948B60: return IS_948B60__eq((IS_948B60) t1, (IS_948B60) t2);
    case TIS_82ABD8: return IS_82ABD8__eq((IS_82ABD8) t1, (IS_82ABD8) t2);
    case TIS_7E8796: return IS_7E8796__eq((IS_7E8796) t1, (IS_7E8796) t2);
    case TIS_08117A: return IS_08117A__eq((IS_08117A) t1, (IS_08117A) t2);
    case TIS_820232: return IS_820232__eq((IS_820232) t1, (IS_820232) t2);
    case TMBox2_1029D1: return MBox2_1029D1__eq((MBox2_1029D1) t1, (MBox2_1029D1) t2);
    case TMBox2_1CBFC4: return MBox2_1CBFC4__eq((MBox2_1CBFC4) t1, (MBox2_1CBFC4) t2);
    case TMS_B5E3E6: return MS_B5E3E6__eq((MS_B5E3E6) t1, (MS_B5E3E6) t2);
    case TMS_E444B2: return MS_E444B2__eq((MS_E444B2) t1, (MS_E444B2) t2);
    case TMS_83D5EB: return MS_83D5EB__eq((MS_83D5EB) t1, (MS_83D5EB) t2);
    case TMS_2590FE: return MS_2590FE__eq((MS_2590FE) t1, (MS_2590FE) t2);
    case TMS_F55A18: return MS_F55A18__eq((MS_F55A18) t1, (MS_F55A18) t2);
    case TMS_30A5B4: return MS_30A5B4__eq((MS_30A5B4) t1, (MS_30A5B4) t2);
    case TNone_5C1355: return None_5C1355__eq((None_5C1355) t1, (None_5C1355) t2);
    case TNone_76463B: return None_76463B__eq((None_76463B) t1, (None_76463B) t2);
    case TNone_734370: return None_734370__eq((None_734370) t1, (None_734370) t2);
    case TNone_964667: return None_964667__eq((None_964667) t1, (None_964667) t2);
    case TNone_ED72E1: return None_ED72E1__eq((None_ED72E1) t1, (None_ED72E1) t2);
    case TNone_39BC5F: return None_39BC5F__eq((None_39BC5F) t1, (None_39BC5F) t2);
    case TNone_831682: return None_831682__eq((None_831682) t1, (None_831682) t2);
    case TNone_380ACD: return None_380ACD__eq((None_380ACD) t1, (None_380ACD) t2);
    case TNone_856E6F: return None_856E6F__eq((None_856E6F) t1, (None_856E6F) t2);
    case TNone_475EF0: return None_475EF0__eq((None_475EF0) t1, (None_475EF0) t2);
    case TNone_B473AE: return None_B473AE__eq((None_B473AE) t1, (None_B473AE) t2);
    case TNone_ACBA15: return None_ACBA15__eq((None_ACBA15) t1, (None_ACBA15) t2);
    case TNone_A41F76: return None_A41F76__eq((None_A41F76) t1, (None_A41F76) t2);
    case TNone_68DB3B: return None_68DB3B__eq((None_68DB3B) t1, (None_68DB3B) t2);
    case TNone_AC21B6: return None_AC21B6__eq((None_AC21B6) t1, (None_AC21B6) t2);
    case TNone_3FD7F9: return None_3FD7F9__eq((None_3FD7F9) t1, (None_3FD7F9) t2);
    case TNone_4CBE13: return None_4CBE13__eq((None_4CBE13) t1, (None_4CBE13) t2);
    case TSome_80A548: return Some_80A548__eq((Some_80A548) t1, (Some_80A548) t2);
    case TSome_488F47: return Some_488F47__eq((Some_488F47) t1, (Some_488F47) t2);
    case TSome_482E57: return Some_482E57__eq((Some_482E57) t1, (Some_482E57) t2);
    case TSome_D29615: return Some_D29615__eq((Some_D29615) t1, (Some_D29615) t2);
    case TSome_4782C6: return Some_4782C6__eq((Some_4782C6) t1, (Some_4782C6) t2);
    case TSome_3E197E: return Some_3E197E__eq((Some_3E197E) t1, (Some_3E197E) t2);
    case TSome_07AD88: return Some_07AD88__eq((Some_07AD88) t1, (Some_07AD88) t2);
    case TSome_779716: return Some_779716__eq((Some_779716) t1, (Some_779716) t2);
    case TSome_C959A2: return Some_C959A2__eq((Some_C959A2) t1, (Some_C959A2) t2);
    case TSome_A89224: return Some_A89224__eq((Some_A89224) t1, (Some_A89224) t2);
    case TSome_D8D240: return Some_D8D240__eq((Some_D8D240) t1, (Some_D8D240) t2);
    case TSome_D50AE7: return Some_D50AE7__eq((Some_D50AE7) t1, (Some_D50AE7) t2);
    case TSome_E49AF0: return Some_E49AF0__eq((Some_E49AF0) t1, (Some_E49AF0) t2);
    case TSome_23FE19: return Some_23FE19__eq((Some_23FE19) t1, (Some_23FE19) t2);
    case TSome_82706F: return Some_82706F__eq((Some_82706F) t1, (Some_82706F) t2);
    case TSome_486E43: return Some_486E43__eq((Some_486E43) t1, (Some_486E43) t2);
    case TSome_14C467: return Some_14C467__eq((Some_14C467) t1, (Some_14C467) t2);
    case TString: return String__eq((String) t1, (String) t2);
    case Tart_ArchitectureDescription: return art_ArchitectureDescription__eq((art_ArchitectureDescription) t1, (art_ArchitectureDescription) t2);
    case Tart_Bridge_Ports: return art_Bridge_Ports__eq((art_Bridge_Ports) t1, (art_Bridge_Ports) t2);
    case Tart_Connection: return art_Connection__eq((art_Connection) t1, (art_Connection) t2);
    case Tart_DispatchPropertyProtocol_Periodic: return art_DispatchPropertyProtocol_Periodic__eq((art_DispatchPropertyProtocol_Periodic) t1, (art_DispatchPropertyProtocol_Periodic) t2);
    case Tart_DispatchPropertyProtocol_Sporadic: return art_DispatchPropertyProtocol_Sporadic__eq((art_DispatchPropertyProtocol_Sporadic) t1, (art_DispatchPropertyProtocol_Sporadic) t2);
    case Tart_Empty: return art_Empty__eq((art_Empty) t1, (art_Empty) t2);
    case Tart_EventTriggered: return art_EventTriggered__eq((art_EventTriggered) t1, (art_EventTriggered) t2);
    case Tart_Port_9CBF18: return art_Port_9CBF18__eq((art_Port_9CBF18) t1, (art_Port_9CBF18) t2);
    case Tart_Port_0A16CC: return art_Port_0A16CC__eq((art_Port_0A16CC) t1, (art_Port_0A16CC) t2);
    case Tart_Port_2ED9E6: return art_Port_2ED9E6__eq((art_Port_2ED9E6) t1, (art_Port_2ED9E6) t2);
    case Tart_Port_216126: return art_Port_216126__eq((art_Port_216126) t1, (art_Port_216126) t2);
    case Tart_Port_7B28AF: return art_Port_7B28AF__eq((art_Port_7B28AF) t1, (art_Port_7B28AF) t2);
    case Tart_TimeTriggered: return art_TimeTriggered__eq((art_TimeTriggered) t1, (art_TimeTriggered) t2);
    case Tart_scheduling_nop_NopScheduler: return art_scheduling_nop_NopScheduler__eq((art_scheduling_nop_NopScheduler) t1, (art_scheduling_nop_NopScheduler) t2);
    case Tops_ISZOps_A6D40E: return ops_ISZOps_A6D40E__eq((ops_ISZOps_A6D40E) t1, (ops_ISZOps_A6D40E) t2);
    case Tt_Base_Types_Boolean_Payload: return t_Base_Types_Boolean_Payload__eq((t_Base_Types_Boolean_Payload) t1, (t_Base_Types_Boolean_Payload) t2);
    case Tt_Base_Types_Float_32_Payload: return t_Base_Types_Float_32_Payload__eq((t_Base_Types_Float_32_Payload) t1, (t_Base_Types_Float_32_Payload) t2);
    case Tt_ProcessorTimingProperties: return t_ProcessorTimingProperties__eq((t_ProcessorTimingProperties) t1, (t_ProcessorTimingProperties) t2);
    case Tt_TemperatureControl_FanAck_Payload: return t_TemperatureControl_FanAck_Payload__eq((t_TemperatureControl_FanAck_Payload) t1, (t_TemperatureControl_FanAck_Payload) t2);
    case Tt_TemperatureControl_FanCmd_Payload: return t_TemperatureControl_FanCmd_Payload__eq((t_TemperatureControl_FanCmd_Payload) t1, (t_TemperatureControl_FanCmd_Payload) t2);
    case Tt_TemperatureControl_Fan_i_Initialization_Api: return t_TemperatureControl_Fan_i_Initialization_Api__eq((t_TemperatureControl_Fan_i_Initialization_Api) t1, (t_TemperatureControl_Fan_i_Initialization_Api) t2);
    case Tt_TemperatureControl_Fan_i_Operational_Api: return t_TemperatureControl_Fan_i_Operational_Api__eq((t_TemperatureControl_Fan_i_Operational_Api) t1, (t_TemperatureControl_Fan_i_Operational_Api) t2);
    case Tt_TemperatureControl_Fan_i_fp_fan_Bridge: return t_TemperatureControl_Fan_i_fp_fan_Bridge__eq((t_TemperatureControl_Fan_i_fp_fan_Bridge) t1, (t_TemperatureControl_Fan_i_fp_fan_Bridge) t2);
    case Tt_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints: return t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints__eq((t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints) t1, (t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints) t2);
    case Tt_TemperatureControl_SetPoint_i: return t_TemperatureControl_SetPoint_i__eq((t_TemperatureControl_SetPoint_i) t1, (t_TemperatureControl_SetPoint_i) t2);
    case Tt_TemperatureControl_SetPoint_i_Payload: return t_TemperatureControl_SetPoint_i_Payload__eq((t_TemperatureControl_SetPoint_i_Payload) t1, (t_TemperatureControl_SetPoint_i_Payload) t2);
    case Tt_TemperatureControl_TempControl_i_Initialization_Api: return t_TemperatureControl_TempControl_i_Initialization_Api__eq((t_TemperatureControl_TempControl_i_Initialization_Api) t1, (t_TemperatureControl_TempControl_i_Initialization_Api) t2);
    case Tt_TemperatureControl_TempControl_i_Operational_Api: return t_TemperatureControl_TempControl_i_Operational_Api__eq((t_TemperatureControl_TempControl_i_Operational_Api) t1, (t_TemperatureControl_TempControl_i_Operational_Api) t2);
    case Tt_TemperatureControl_TempControl_i_tcp_tempControl_Bridge: return t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge__eq((t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge) t1, (t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge) t2);
    case Tt_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints: return t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints__eq((t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints) t1, (t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints) t2);
    case Tt_TemperatureControl_TempSensor_i_Initialization_Api: return t_TemperatureControl_TempSensor_i_Initialization_Api__eq((t_TemperatureControl_TempSensor_i_Initialization_Api) t1, (t_TemperatureControl_TempSensor_i_Initialization_Api) t2);
    case Tt_TemperatureControl_TempSensor_i_Operational_Api: return t_TemperatureControl_TempSensor_i_Operational_Api__eq((t_TemperatureControl_TempSensor_i_Operational_Api) t1, (t_TemperatureControl_TempSensor_i_Operational_Api) t2);
    case Tt_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge: return t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge__eq((t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge) t1, (t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge) t2);
    case Tt_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints: return t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints__eq((t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints) t1, (t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints) t2);
    case Tt_TemperatureControl_TempUnit_Payload: return t_TemperatureControl_TempUnit_Payload__eq((t_TemperatureControl_TempUnit_Payload) t1, (t_TemperatureControl_TempUnit_Payload) t2);
    case Tt_TemperatureControl_Temperature_i: return t_TemperatureControl_Temperature_i__eq((t_TemperatureControl_Temperature_i) t1, (t_TemperatureControl_Temperature_i) t2);
    case Tt_TemperatureControl_Temperature_i_Payload: return t_TemperatureControl_Temperature_i_Payload__eq((t_TemperatureControl_Temperature_i_Payload) t1, (t_TemperatureControl_Temperature_i_Payload) t2);
    case Tt_ThreadTimingProperties: return t_ThreadTimingProperties__eq((t_ThreadTimingProperties) t1, (t_ThreadTimingProperties) t2);
    default: fprintf(stderr, "%s: %d\n", "Unexpected TYPE: ", type); exit(1);
  }
}

void Type_cprint(void *this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  TYPE type = ((Type) this)->type;
  switch (type) {
    case TTuple2_EC3B57: Tuple2_EC3B57_cprint((Tuple2_EC3B57) this, isOut); return;
    case TIS_AA0F82: IS_AA0F82_cprint((IS_AA0F82) this, isOut); return;
    case TIS_948B60: IS_948B60_cprint((IS_948B60) this, isOut); return;
    case TIS_82ABD8: IS_82ABD8_cprint((IS_82ABD8) this, isOut); return;
    case TIS_7E8796: IS_7E8796_cprint((IS_7E8796) this, isOut); return;
    case TIS_08117A: IS_08117A_cprint((IS_08117A) this, isOut); return;
    case TIS_820232: IS_820232_cprint((IS_820232) this, isOut); return;
    case TMBox2_1029D1: MBox2_1029D1_cprint((MBox2_1029D1) this, isOut); return;
    case TMBox2_1CBFC4: MBox2_1CBFC4_cprint((MBox2_1CBFC4) this, isOut); return;
    case TMS_B5E3E6: MS_B5E3E6_cprint((MS_B5E3E6) this, isOut); return;
    case TMS_E444B2: MS_E444B2_cprint((MS_E444B2) this, isOut); return;
    case TMS_83D5EB: MS_83D5EB_cprint((MS_83D5EB) this, isOut); return;
    case TMS_2590FE: MS_2590FE_cprint((MS_2590FE) this, isOut); return;
    case TMS_F55A18: MS_F55A18_cprint((MS_F55A18) this, isOut); return;
    case TMS_30A5B4: MS_30A5B4_cprint((MS_30A5B4) this, isOut); return;
    case TNone_5C1355: None_5C1355_cprint((None_5C1355) this, isOut); return;
    case TNone_76463B: None_76463B_cprint((None_76463B) this, isOut); return;
    case TNone_734370: None_734370_cprint((None_734370) this, isOut); return;
    case TNone_964667: None_964667_cprint((None_964667) this, isOut); return;
    case TNone_ED72E1: None_ED72E1_cprint((None_ED72E1) this, isOut); return;
    case TNone_39BC5F: None_39BC5F_cprint((None_39BC5F) this, isOut); return;
    case TNone_831682: None_831682_cprint((None_831682) this, isOut); return;
    case TNone_380ACD: None_380ACD_cprint((None_380ACD) this, isOut); return;
    case TNone_856E6F: None_856E6F_cprint((None_856E6F) this, isOut); return;
    case TNone_475EF0: None_475EF0_cprint((None_475EF0) this, isOut); return;
    case TNone_B473AE: None_B473AE_cprint((None_B473AE) this, isOut); return;
    case TNone_ACBA15: None_ACBA15_cprint((None_ACBA15) this, isOut); return;
    case TNone_A41F76: None_A41F76_cprint((None_A41F76) this, isOut); return;
    case TNone_68DB3B: None_68DB3B_cprint((None_68DB3B) this, isOut); return;
    case TNone_AC21B6: None_AC21B6_cprint((None_AC21B6) this, isOut); return;
    case TNone_3FD7F9: None_3FD7F9_cprint((None_3FD7F9) this, isOut); return;
    case TNone_4CBE13: None_4CBE13_cprint((None_4CBE13) this, isOut); return;
    case TSome_80A548: Some_80A548_cprint((Some_80A548) this, isOut); return;
    case TSome_488F47: Some_488F47_cprint((Some_488F47) this, isOut); return;
    case TSome_482E57: Some_482E57_cprint((Some_482E57) this, isOut); return;
    case TSome_D29615: Some_D29615_cprint((Some_D29615) this, isOut); return;
    case TSome_4782C6: Some_4782C6_cprint((Some_4782C6) this, isOut); return;
    case TSome_3E197E: Some_3E197E_cprint((Some_3E197E) this, isOut); return;
    case TSome_07AD88: Some_07AD88_cprint((Some_07AD88) this, isOut); return;
    case TSome_779716: Some_779716_cprint((Some_779716) this, isOut); return;
    case TSome_C959A2: Some_C959A2_cprint((Some_C959A2) this, isOut); return;
    case TSome_A89224: Some_A89224_cprint((Some_A89224) this, isOut); return;
    case TSome_D8D240: Some_D8D240_cprint((Some_D8D240) this, isOut); return;
    case TSome_D50AE7: Some_D50AE7_cprint((Some_D50AE7) this, isOut); return;
    case TSome_E49AF0: Some_E49AF0_cprint((Some_E49AF0) this, isOut); return;
    case TSome_23FE19: Some_23FE19_cprint((Some_23FE19) this, isOut); return;
    case TSome_82706F: Some_82706F_cprint((Some_82706F) this, isOut); return;
    case TSome_486E43: Some_486E43_cprint((Some_486E43) this, isOut); return;
    case TSome_14C467: Some_14C467_cprint((Some_14C467) this, isOut); return;
    case TString: String_cprint((String) this, isOut); return;
    case Tart_ArchitectureDescription: art_ArchitectureDescription_cprint((art_ArchitectureDescription) this, isOut); return;
    case Tart_Bridge_Ports: art_Bridge_Ports_cprint((art_Bridge_Ports) this, isOut); return;
    case Tart_Connection: art_Connection_cprint((art_Connection) this, isOut); return;
    case Tart_DispatchPropertyProtocol_Periodic: art_DispatchPropertyProtocol_Periodic_cprint((art_DispatchPropertyProtocol_Periodic) this, isOut); return;
    case Tart_DispatchPropertyProtocol_Sporadic: art_DispatchPropertyProtocol_Sporadic_cprint((art_DispatchPropertyProtocol_Sporadic) this, isOut); return;
    case Tart_Empty: art_Empty_cprint((art_Empty) this, isOut); return;
    case Tart_EventTriggered: art_EventTriggered_cprint((art_EventTriggered) this, isOut); return;
    case Tart_Port_9CBF18: art_Port_9CBF18_cprint((art_Port_9CBF18) this, isOut); return;
    case Tart_Port_0A16CC: art_Port_0A16CC_cprint((art_Port_0A16CC) this, isOut); return;
    case Tart_Port_2ED9E6: art_Port_2ED9E6_cprint((art_Port_2ED9E6) this, isOut); return;
    case Tart_Port_216126: art_Port_216126_cprint((art_Port_216126) this, isOut); return;
    case Tart_Port_7B28AF: art_Port_7B28AF_cprint((art_Port_7B28AF) this, isOut); return;
    case Tart_TimeTriggered: art_TimeTriggered_cprint((art_TimeTriggered) this, isOut); return;
    case Tart_scheduling_nop_NopScheduler: art_scheduling_nop_NopScheduler_cprint((art_scheduling_nop_NopScheduler) this, isOut); return;
    case Tops_ISZOps_A6D40E: ops_ISZOps_A6D40E_cprint((ops_ISZOps_A6D40E) this, isOut); return;
    case Tt_Base_Types_Boolean_Payload: t_Base_Types_Boolean_Payload_cprint((t_Base_Types_Boolean_Payload) this, isOut); return;
    case Tt_Base_Types_Float_32_Payload: t_Base_Types_Float_32_Payload_cprint((t_Base_Types_Float_32_Payload) this, isOut); return;
    case Tt_ProcessorTimingProperties: t_ProcessorTimingProperties_cprint((t_ProcessorTimingProperties) this, isOut); return;
    case Tt_TemperatureControl_FanAck_Payload: t_TemperatureControl_FanAck_Payload_cprint((t_TemperatureControl_FanAck_Payload) this, isOut); return;
    case Tt_TemperatureControl_FanCmd_Payload: t_TemperatureControl_FanCmd_Payload_cprint((t_TemperatureControl_FanCmd_Payload) this, isOut); return;
    case Tt_TemperatureControl_Fan_i_Initialization_Api: t_TemperatureControl_Fan_i_Initialization_Api_cprint((t_TemperatureControl_Fan_i_Initialization_Api) this, isOut); return;
    case Tt_TemperatureControl_Fan_i_Operational_Api: t_TemperatureControl_Fan_i_Operational_Api_cprint((t_TemperatureControl_Fan_i_Operational_Api) this, isOut); return;
    case Tt_TemperatureControl_Fan_i_fp_fan_Bridge: t_TemperatureControl_Fan_i_fp_fan_Bridge_cprint((t_TemperatureControl_Fan_i_fp_fan_Bridge) this, isOut); return;
    case Tt_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints: t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints_cprint((t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints) this, isOut); return;
    case Tt_TemperatureControl_SetPoint_i: t_TemperatureControl_SetPoint_i_cprint((t_TemperatureControl_SetPoint_i) this, isOut); return;
    case Tt_TemperatureControl_SetPoint_i_Payload: t_TemperatureControl_SetPoint_i_Payload_cprint((t_TemperatureControl_SetPoint_i_Payload) this, isOut); return;
    case Tt_TemperatureControl_TempControl_i_Initialization_Api: t_TemperatureControl_TempControl_i_Initialization_Api_cprint((t_TemperatureControl_TempControl_i_Initialization_Api) this, isOut); return;
    case Tt_TemperatureControl_TempControl_i_Operational_Api: t_TemperatureControl_TempControl_i_Operational_Api_cprint((t_TemperatureControl_TempControl_i_Operational_Api) this, isOut); return;
    case Tt_TemperatureControl_TempControl_i_tcp_tempControl_Bridge: t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_cprint((t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge) this, isOut); return;
    case Tt_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints: t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints_cprint((t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints) this, isOut); return;
    case Tt_TemperatureControl_TempSensor_i_Initialization_Api: t_TemperatureControl_TempSensor_i_Initialization_Api_cprint((t_TemperatureControl_TempSensor_i_Initialization_Api) this, isOut); return;
    case Tt_TemperatureControl_TempSensor_i_Operational_Api: t_TemperatureControl_TempSensor_i_Operational_Api_cprint((t_TemperatureControl_TempSensor_i_Operational_Api) this, isOut); return;
    case Tt_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge: t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_cprint((t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge) this, isOut); return;
    case Tt_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints: t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints_cprint((t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints) this, isOut); return;
    case Tt_TemperatureControl_TempUnit_Payload: t_TemperatureControl_TempUnit_Payload_cprint((t_TemperatureControl_TempUnit_Payload) this, isOut); return;
    case Tt_TemperatureControl_Temperature_i: t_TemperatureControl_Temperature_i_cprint((t_TemperatureControl_Temperature_i) this, isOut); return;
    case Tt_TemperatureControl_Temperature_i_Payload: t_TemperatureControl_Temperature_i_Payload_cprint((t_TemperatureControl_Temperature_i_Payload) this, isOut); return;
    case Tt_ThreadTimingProperties: t_ThreadTimingProperties_cprint((t_ThreadTimingProperties) this, isOut); return;
    default: fprintf(stderr, "%s: %d\n", "Unexpected TYPE: ", type); exit(1);
  }
  #endif
}

void Type_string_(STACK_FRAME String result, void *this) {
  TYPE type = ((Type) this)->type;
  switch (type) {
    case TTuple2_EC3B57: Tuple2_EC3B57_string_(CALLER result, (Tuple2_EC3B57) this); return;
    case TIS_AA0F82: IS_AA0F82_string_(CALLER result, (IS_AA0F82) this); return;
    case TIS_948B60: IS_948B60_string_(CALLER result, (IS_948B60) this); return;
    case TIS_82ABD8: IS_82ABD8_string_(CALLER result, (IS_82ABD8) this); return;
    case TIS_7E8796: IS_7E8796_string_(CALLER result, (IS_7E8796) this); return;
    case TIS_08117A: IS_08117A_string_(CALLER result, (IS_08117A) this); return;
    case TIS_820232: IS_820232_string_(CALLER result, (IS_820232) this); return;
    case TMBox2_1029D1: MBox2_1029D1_string_(CALLER result, (MBox2_1029D1) this); return;
    case TMBox2_1CBFC4: MBox2_1CBFC4_string_(CALLER result, (MBox2_1CBFC4) this); return;
    case TMS_B5E3E6: MS_B5E3E6_string_(CALLER result, (MS_B5E3E6) this); return;
    case TMS_E444B2: MS_E444B2_string_(CALLER result, (MS_E444B2) this); return;
    case TMS_83D5EB: MS_83D5EB_string_(CALLER result, (MS_83D5EB) this); return;
    case TMS_2590FE: MS_2590FE_string_(CALLER result, (MS_2590FE) this); return;
    case TMS_F55A18: MS_F55A18_string_(CALLER result, (MS_F55A18) this); return;
    case TMS_30A5B4: MS_30A5B4_string_(CALLER result, (MS_30A5B4) this); return;
    case TNone_5C1355: None_5C1355_string_(CALLER result, (None_5C1355) this); return;
    case TNone_76463B: None_76463B_string_(CALLER result, (None_76463B) this); return;
    case TNone_734370: None_734370_string_(CALLER result, (None_734370) this); return;
    case TNone_964667: None_964667_string_(CALLER result, (None_964667) this); return;
    case TNone_ED72E1: None_ED72E1_string_(CALLER result, (None_ED72E1) this); return;
    case TNone_39BC5F: None_39BC5F_string_(CALLER result, (None_39BC5F) this); return;
    case TNone_831682: None_831682_string_(CALLER result, (None_831682) this); return;
    case TNone_380ACD: None_380ACD_string_(CALLER result, (None_380ACD) this); return;
    case TNone_856E6F: None_856E6F_string_(CALLER result, (None_856E6F) this); return;
    case TNone_475EF0: None_475EF0_string_(CALLER result, (None_475EF0) this); return;
    case TNone_B473AE: None_B473AE_string_(CALLER result, (None_B473AE) this); return;
    case TNone_ACBA15: None_ACBA15_string_(CALLER result, (None_ACBA15) this); return;
    case TNone_A41F76: None_A41F76_string_(CALLER result, (None_A41F76) this); return;
    case TNone_68DB3B: None_68DB3B_string_(CALLER result, (None_68DB3B) this); return;
    case TNone_AC21B6: None_AC21B6_string_(CALLER result, (None_AC21B6) this); return;
    case TNone_3FD7F9: None_3FD7F9_string_(CALLER result, (None_3FD7F9) this); return;
    case TNone_4CBE13: None_4CBE13_string_(CALLER result, (None_4CBE13) this); return;
    case TSome_80A548: Some_80A548_string_(CALLER result, (Some_80A548) this); return;
    case TSome_488F47: Some_488F47_string_(CALLER result, (Some_488F47) this); return;
    case TSome_482E57: Some_482E57_string_(CALLER result, (Some_482E57) this); return;
    case TSome_D29615: Some_D29615_string_(CALLER result, (Some_D29615) this); return;
    case TSome_4782C6: Some_4782C6_string_(CALLER result, (Some_4782C6) this); return;
    case TSome_3E197E: Some_3E197E_string_(CALLER result, (Some_3E197E) this); return;
    case TSome_07AD88: Some_07AD88_string_(CALLER result, (Some_07AD88) this); return;
    case TSome_779716: Some_779716_string_(CALLER result, (Some_779716) this); return;
    case TSome_C959A2: Some_C959A2_string_(CALLER result, (Some_C959A2) this); return;
    case TSome_A89224: Some_A89224_string_(CALLER result, (Some_A89224) this); return;
    case TSome_D8D240: Some_D8D240_string_(CALLER result, (Some_D8D240) this); return;
    case TSome_D50AE7: Some_D50AE7_string_(CALLER result, (Some_D50AE7) this); return;
    case TSome_E49AF0: Some_E49AF0_string_(CALLER result, (Some_E49AF0) this); return;
    case TSome_23FE19: Some_23FE19_string_(CALLER result, (Some_23FE19) this); return;
    case TSome_82706F: Some_82706F_string_(CALLER result, (Some_82706F) this); return;
    case TSome_486E43: Some_486E43_string_(CALLER result, (Some_486E43) this); return;
    case TSome_14C467: Some_14C467_string_(CALLER result, (Some_14C467) this); return;
    case TString: String_string_(CALLER result, (String) this); return;
    case Tart_ArchitectureDescription: art_ArchitectureDescription_string_(CALLER result, (art_ArchitectureDescription) this); return;
    case Tart_Bridge_Ports: art_Bridge_Ports_string_(CALLER result, (art_Bridge_Ports) this); return;
    case Tart_Connection: art_Connection_string_(CALLER result, (art_Connection) this); return;
    case Tart_DispatchPropertyProtocol_Periodic: art_DispatchPropertyProtocol_Periodic_string_(CALLER result, (art_DispatchPropertyProtocol_Periodic) this); return;
    case Tart_DispatchPropertyProtocol_Sporadic: art_DispatchPropertyProtocol_Sporadic_string_(CALLER result, (art_DispatchPropertyProtocol_Sporadic) this); return;
    case Tart_Empty: art_Empty_string_(CALLER result, (art_Empty) this); return;
    case Tart_EventTriggered: art_EventTriggered_string_(CALLER result, (art_EventTriggered) this); return;
    case Tart_Port_9CBF18: art_Port_9CBF18_string_(CALLER result, (art_Port_9CBF18) this); return;
    case Tart_Port_0A16CC: art_Port_0A16CC_string_(CALLER result, (art_Port_0A16CC) this); return;
    case Tart_Port_2ED9E6: art_Port_2ED9E6_string_(CALLER result, (art_Port_2ED9E6) this); return;
    case Tart_Port_216126: art_Port_216126_string_(CALLER result, (art_Port_216126) this); return;
    case Tart_Port_7B28AF: art_Port_7B28AF_string_(CALLER result, (art_Port_7B28AF) this); return;
    case Tart_TimeTriggered: art_TimeTriggered_string_(CALLER result, (art_TimeTriggered) this); return;
    case Tart_scheduling_nop_NopScheduler: art_scheduling_nop_NopScheduler_string_(CALLER result, (art_scheduling_nop_NopScheduler) this); return;
    case Tops_ISZOps_A6D40E: ops_ISZOps_A6D40E_string_(CALLER result, (ops_ISZOps_A6D40E) this); return;
    case Tt_Base_Types_Boolean_Payload: t_Base_Types_Boolean_Payload_string_(CALLER result, (t_Base_Types_Boolean_Payload) this); return;
    case Tt_Base_Types_Float_32_Payload: t_Base_Types_Float_32_Payload_string_(CALLER result, (t_Base_Types_Float_32_Payload) this); return;
    case Tt_ProcessorTimingProperties: t_ProcessorTimingProperties_string_(CALLER result, (t_ProcessorTimingProperties) this); return;
    case Tt_TemperatureControl_FanAck_Payload: t_TemperatureControl_FanAck_Payload_string_(CALLER result, (t_TemperatureControl_FanAck_Payload) this); return;
    case Tt_TemperatureControl_FanCmd_Payload: t_TemperatureControl_FanCmd_Payload_string_(CALLER result, (t_TemperatureControl_FanCmd_Payload) this); return;
    case Tt_TemperatureControl_Fan_i_Initialization_Api: t_TemperatureControl_Fan_i_Initialization_Api_string_(CALLER result, (t_TemperatureControl_Fan_i_Initialization_Api) this); return;
    case Tt_TemperatureControl_Fan_i_Operational_Api: t_TemperatureControl_Fan_i_Operational_Api_string_(CALLER result, (t_TemperatureControl_Fan_i_Operational_Api) this); return;
    case Tt_TemperatureControl_Fan_i_fp_fan_Bridge: t_TemperatureControl_Fan_i_fp_fan_Bridge_string_(CALLER result, (t_TemperatureControl_Fan_i_fp_fan_Bridge) this); return;
    case Tt_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints: t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints_string_(CALLER result, (t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints) this); return;
    case Tt_TemperatureControl_SetPoint_i: t_TemperatureControl_SetPoint_i_string_(CALLER result, (t_TemperatureControl_SetPoint_i) this); return;
    case Tt_TemperatureControl_SetPoint_i_Payload: t_TemperatureControl_SetPoint_i_Payload_string_(CALLER result, (t_TemperatureControl_SetPoint_i_Payload) this); return;
    case Tt_TemperatureControl_TempControl_i_Initialization_Api: t_TemperatureControl_TempControl_i_Initialization_Api_string_(CALLER result, (t_TemperatureControl_TempControl_i_Initialization_Api) this); return;
    case Tt_TemperatureControl_TempControl_i_Operational_Api: t_TemperatureControl_TempControl_i_Operational_Api_string_(CALLER result, (t_TemperatureControl_TempControl_i_Operational_Api) this); return;
    case Tt_TemperatureControl_TempControl_i_tcp_tempControl_Bridge: t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_string_(CALLER result, (t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge) this); return;
    case Tt_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints: t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints_string_(CALLER result, (t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints) this); return;
    case Tt_TemperatureControl_TempSensor_i_Initialization_Api: t_TemperatureControl_TempSensor_i_Initialization_Api_string_(CALLER result, (t_TemperatureControl_TempSensor_i_Initialization_Api) this); return;
    case Tt_TemperatureControl_TempSensor_i_Operational_Api: t_TemperatureControl_TempSensor_i_Operational_Api_string_(CALLER result, (t_TemperatureControl_TempSensor_i_Operational_Api) this); return;
    case Tt_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge: t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_string_(CALLER result, (t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge) this); return;
    case Tt_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints: t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints_string_(CALLER result, (t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints) this); return;
    case Tt_TemperatureControl_TempUnit_Payload: t_TemperatureControl_TempUnit_Payload_string_(CALLER result, (t_TemperatureControl_TempUnit_Payload) this); return;
    case Tt_TemperatureControl_Temperature_i: t_TemperatureControl_Temperature_i_string_(CALLER result, (t_TemperatureControl_Temperature_i) this); return;
    case Tt_TemperatureControl_Temperature_i_Payload: t_TemperatureControl_Temperature_i_Payload_string_(CALLER result, (t_TemperatureControl_Temperature_i_Payload) this); return;
    case Tt_ThreadTimingProperties: t_ThreadTimingProperties_string_(CALLER result, (t_ThreadTimingProperties) this); return;
    default: fprintf(stderr, "%s: %d\n", "Unexpected TYPE: ", type); exit(1);
  }
}

void Z_apply(Option_882048 result, String s) {
  char *endptr;
  errno = 0;
  long long n = strtoll(s->value, &endptr, 0);
  if (errno) {
    errno = 0;
    Type_assign(result, &((struct None_76463B) { .type = TNone_76463B }), sizeof(struct None_76463B));
    return;
  }
  if (&s->value[s->size] - endptr == 0 && INT32_MIN <= n && n <= INT32_MAX)
    Type_assign(result, &((struct Some_488F47) { .type = TSome_488F47, .value = (Z) n }), sizeof(struct Some_488F47));
  else Type_assign(result, &((struct None_76463B) { .type = TNone_76463B }), sizeof(struct None_76463B));
}