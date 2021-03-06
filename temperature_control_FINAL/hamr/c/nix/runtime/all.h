#ifndef SIREUM_ALL_H
#define SIREUM_ALL_H

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>
#include <art_ArchitectureDescription.h>
#include <art_Art.h>
#include <art_Bridge.h>
#include <art_Bridge_EntryPoints.h>
#include <art_Bridge_Ports.h>
#include <art_Connection.h>
#include <art_DataContent.h>
#include <art_DispatchPropertyProtocol.h>
#include <art_DispatchPropertyProtocol_Periodic.h>
#include <art_DispatchPropertyProtocol_Sporadic.h>
#include <art_DispatchStatus.h>
#include <art_Empty.h>
#include <art_EventTriggered.h>
#include <art_PortMode_Type.h>
#include <art_TimeTriggered.h>
#include <art_UConnection.h>
#include <art_UPort.h>
#include <art_art_Port_0A16CC.h>
#include <art_art_Port_216126.h>
#include <art_art_Port_2ED9E6.h>
#include <art_art_Port_7B28AF.h>
#include <art_art_Port_9CBF18.h>
#include <art_scheduling_Scheduler.h>
#include <art_scheduling_nop_NopScheduler.h>
#include <org_sireum_IS_08117A.h>
#include <org_sireum_IS_7E8796.h>
#include <org_sireum_IS_820232.h>
#include <org_sireum_IS_82ABD8.h>
#include <org_sireum_IS_948B60.h>
#include <org_sireum_IS_AA0F82.h>
#include <org_sireum_MBox2_1029D1.h>
#include <org_sireum_MBox2_1CBFC4.h>
#include <org_sireum_MS_2590FE.h>
#include <org_sireum_MS_30A5B4.h>
#include <org_sireum_MS_83D5EB.h>
#include <org_sireum_MS_B5E3E6.h>
#include <org_sireum_MS_E444B2.h>
#include <org_sireum_MS_F55A18.h>
#include <org_sireum_None.h>
#include <org_sireum_None_380ACD.h>
#include <org_sireum_None_39BC5F.h>
#include <org_sireum_None_3FD7F9.h>
#include <org_sireum_None_475EF0.h>
#include <org_sireum_None_4CBE13.h>
#include <org_sireum_None_5C1355.h>
#include <org_sireum_None_68DB3B.h>
#include <org_sireum_None_734370.h>
#include <org_sireum_None_76463B.h>
#include <org_sireum_None_831682.h>
#include <org_sireum_None_856E6F.h>
#include <org_sireum_None_964667.h>
#include <org_sireum_None_A41F76.h>
#include <org_sireum_None_AC21B6.h>
#include <org_sireum_None_ACBA15.h>
#include <org_sireum_None_B473AE.h>
#include <org_sireum_None_ED72E1.h>
#include <org_sireum_Nothing.h>
#include <org_sireum_Option_10368D.h>
#include <org_sireum_Option_2B0611.h>
#include <org_sireum_Option_3B7208.h>
#include <org_sireum_Option_40D664.h>
#include <org_sireum_Option_6239DB.h>
#include <org_sireum_Option_74C297.h>
#include <org_sireum_Option_78CB14.h>
#include <org_sireum_Option_7BBFBE.h>
#include <org_sireum_Option_87C81A.h>
#include <org_sireum_Option_882048.h>
#include <org_sireum_Option_8E9F45.h>
#include <org_sireum_Option_9AF35E.h>
#include <org_sireum_Option_A8F8FC.h>
#include <org_sireum_Option_B47750.h>
#include <org_sireum_Option_BCC9E8.h>
#include <org_sireum_Option_C5A124.h>
#include <org_sireum_Option_C622DB.h>
#include <org_sireum_Option_EBB396.h>
#include <org_sireum_Some.h>
#include <org_sireum_Some_07AD88.h>
#include <org_sireum_Some_14C467.h>
#include <org_sireum_Some_23FE19.h>
#include <org_sireum_Some_3E197E.h>
#include <org_sireum_Some_4782C6.h>
#include <org_sireum_Some_482E57.h>
#include <org_sireum_Some_486E43.h>
#include <org_sireum_Some_488F47.h>
#include <org_sireum_Some_779716.h>
#include <org_sireum_Some_80A548.h>
#include <org_sireum_Some_82706F.h>
#include <org_sireum_Some_A89224.h>
#include <org_sireum_Some_C959A2.h>
#include <org_sireum_Some_D29615.h>
#include <org_sireum_Some_D50AE7.h>
#include <org_sireum_Some_D8D240.h>
#include <org_sireum_Some_E49AF0.h>
#include <org_sireum_Tuple2_EC3B57.h>
#include <org_sireum_ops_ISZOps.h>
#include <org_sireum_ops_ops_ISZOps_A6D40E.h>
#include <t_Arch.h>
#include <t_ArtNix.h>
#include <t_Base_Types.h>
#include <t_Base_Types_Boolean_Payload.h>
#include <t_Base_Types_Float_32_Payload.h>
#include <t_Fan_i_fp_fan_App.h>
#include <t_IPCPorts.h>
#include <t_LegacyDemo.h>
#include <t_PlatformNix.h>
#include <t_Process.h>
#include <t_ProcessorTimingProperties.h>
#include <t_Schedulers.h>
#include <t_SharedMemory.h>
#include <t_TempControl_i_tcp_tempControl_App.h>
#include <t_TempSensor_i_tsp_tempSensor_App.h>
#include <t_TemperatureControl_FanAck_Type.h>
#include <t_TemperatureControl_FanAck_Payload.h>
#include <t_TemperatureControl_FanCmd_Type.h>
#include <t_TemperatureControl_FanCmd_Payload.h>
#include <t_TemperatureControl_Fan_i_Api.h>
#include <t_TemperatureControl_Fan_i_Initialization_Api.h>
#include <t_TemperatureControl_Fan_i_Operational_Api.h>
#include <t_TemperatureControl_Fan_i_fp_fan.h>
#include <t_TemperatureControl_Fan_i_fp_fan_Bridge.h>
#include <t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints.h>
#include <t_TemperatureControl_SetPoint_i.h>
#include <t_TemperatureControl_SetPoint_i_Payload.h>
#include <t_TemperatureControl_TempControl_i_Api.h>
#include <t_TemperatureControl_TempControl_i_Initialization_Api.h>
#include <t_TemperatureControl_TempControl_i_Operational_Api.h>
#include <t_TemperatureControl_TempControl_i_tcp_tempControl.h>
#include <t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge.h>
#include <t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints.h>
#include <t_TemperatureControl_TempSensor_i_Api.h>
#include <t_TemperatureControl_TempSensor_i_Initialization_Api.h>
#include <t_TemperatureControl_TempSensor_i_Operational_Api.h>
#include <t_TemperatureControl_TempSensor_i_tsp_tempSensor.h>
#include <t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge.h>
#include <t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints.h>
#include <t_TemperatureControl_TempUnit_Type.h>
#include <t_TemperatureControl_TempUnit_Payload.h>
#include <t_TemperatureControl_Temperature_i.h>
#include <t_TemperatureControl_Temperature_i_Payload.h>
#include <t_ThreadTimingProperties.h>
#include <t_TranspilerToucher.h>
#include <t_TranspilerUtil.h>

void Z_apply(Option_882048 result, String s);

#ifdef __cplusplus
}
#endif

#endif