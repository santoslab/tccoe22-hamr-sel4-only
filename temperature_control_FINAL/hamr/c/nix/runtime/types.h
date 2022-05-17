#ifndef SIREUM_GEN_H
#define SIREUM_GEN_H

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>
#include <type-art_ArchitectureDescription.h>
#include <type-art_Art.h>
#include <type-art_Bridge.h>
#include <type-art_Bridge_EntryPoints.h>
#include <type-art_Bridge_Ports.h>
#include <type-art_Connection.h>
#include <type-art_DataContent.h>
#include <type-art_DispatchPropertyProtocol.h>
#include <type-art_DispatchPropertyProtocol_Periodic.h>
#include <type-art_DispatchPropertyProtocol_Sporadic.h>
#include <type-art_DispatchStatus.h>
#include <type-art_Empty.h>
#include <type-art_EventTriggered.h>
#include <type-art_PortMode_Type.h>
#include <type-art_TimeTriggered.h>
#include <type-art_UConnection.h>
#include <type-art_UPort.h>
#include <type-art_art_Port_0A16CC.h>
#include <type-art_art_Port_216126.h>
#include <type-art_art_Port_2ED9E6.h>
#include <type-art_art_Port_7B28AF.h>
#include <type-art_art_Port_9CBF18.h>
#include <type-art_scheduling_Scheduler.h>
#include <type-art_scheduling_nop_NopScheduler.h>
#include <type-org_sireum_IS_08117A.h>
#include <type-org_sireum_IS_7E8796.h>
#include <type-org_sireum_IS_820232.h>
#include <type-org_sireum_IS_82ABD8.h>
#include <type-org_sireum_IS_948B60.h>
#include <type-org_sireum_IS_AA0F82.h>
#include <type-org_sireum_MBox2_1029D1.h>
#include <type-org_sireum_MBox2_1CBFC4.h>
#include <type-org_sireum_MS_2590FE.h>
#include <type-org_sireum_MS_30A5B4.h>
#include <type-org_sireum_MS_83D5EB.h>
#include <type-org_sireum_MS_B5E3E6.h>
#include <type-org_sireum_MS_E444B2.h>
#include <type-org_sireum_MS_F55A18.h>
#include <type-org_sireum_None.h>
#include <type-org_sireum_None_380ACD.h>
#include <type-org_sireum_None_39BC5F.h>
#include <type-org_sireum_None_3FD7F9.h>
#include <type-org_sireum_None_475EF0.h>
#include <type-org_sireum_None_4CBE13.h>
#include <type-org_sireum_None_5C1355.h>
#include <type-org_sireum_None_68DB3B.h>
#include <type-org_sireum_None_734370.h>
#include <type-org_sireum_None_76463B.h>
#include <type-org_sireum_None_831682.h>
#include <type-org_sireum_None_856E6F.h>
#include <type-org_sireum_None_964667.h>
#include <type-org_sireum_None_A41F76.h>
#include <type-org_sireum_None_AC21B6.h>
#include <type-org_sireum_None_ACBA15.h>
#include <type-org_sireum_None_B473AE.h>
#include <type-org_sireum_None_ED72E1.h>
#include <type-org_sireum_Nothing.h>
#include <type-org_sireum_Option_10368D.h>
#include <type-org_sireum_Option_2B0611.h>
#include <type-org_sireum_Option_3B7208.h>
#include <type-org_sireum_Option_40D664.h>
#include <type-org_sireum_Option_6239DB.h>
#include <type-org_sireum_Option_74C297.h>
#include <type-org_sireum_Option_78CB14.h>
#include <type-org_sireum_Option_7BBFBE.h>
#include <type-org_sireum_Option_87C81A.h>
#include <type-org_sireum_Option_882048.h>
#include <type-org_sireum_Option_8E9F45.h>
#include <type-org_sireum_Option_9AF35E.h>
#include <type-org_sireum_Option_A8F8FC.h>
#include <type-org_sireum_Option_B47750.h>
#include <type-org_sireum_Option_BCC9E8.h>
#include <type-org_sireum_Option_C5A124.h>
#include <type-org_sireum_Option_C622DB.h>
#include <type-org_sireum_Option_EBB396.h>
#include <type-org_sireum_Some.h>
#include <type-org_sireum_Some_07AD88.h>
#include <type-org_sireum_Some_14C467.h>
#include <type-org_sireum_Some_23FE19.h>
#include <type-org_sireum_Some_3E197E.h>
#include <type-org_sireum_Some_4782C6.h>
#include <type-org_sireum_Some_482E57.h>
#include <type-org_sireum_Some_486E43.h>
#include <type-org_sireum_Some_488F47.h>
#include <type-org_sireum_Some_779716.h>
#include <type-org_sireum_Some_80A548.h>
#include <type-org_sireum_Some_82706F.h>
#include <type-org_sireum_Some_A89224.h>
#include <type-org_sireum_Some_C959A2.h>
#include <type-org_sireum_Some_D29615.h>
#include <type-org_sireum_Some_D50AE7.h>
#include <type-org_sireum_Some_D8D240.h>
#include <type-org_sireum_Some_E49AF0.h>
#include <type-org_sireum_Tuple2_EC3B57.h>
#include <type-org_sireum_ops_ISZOps.h>
#include <type-org_sireum_ops_ops_ISZOps_A6D40E.h>
#include <type-t_Arch.h>
#include <type-t_ArtNix.h>
#include <type-t_Base_Types.h>
#include <type-t_Base_Types_Boolean_Payload.h>
#include <type-t_Base_Types_Float_32_Payload.h>
#include <type-t_Fan_i_fp_fan_App.h>
#include <type-t_IPCPorts.h>
#include <type-t_LegacyDemo.h>
#include <type-t_PlatformNix.h>
#include <type-t_Process.h>
#include <type-t_ProcessorTimingProperties.h>
#include <type-t_Schedulers.h>
#include <type-t_SharedMemory.h>
#include <type-t_TempControl_i_tcp_tempControl_App.h>
#include <type-t_TempSensor_i_tsp_tempSensor_App.h>
#include <type-t_TemperatureControl_FanAck_Type.h>
#include <type-t_TemperatureControl_FanAck_Payload.h>
#include <type-t_TemperatureControl_FanCmd_Type.h>
#include <type-t_TemperatureControl_FanCmd_Payload.h>
#include <type-t_TemperatureControl_Fan_i_Api.h>
#include <type-t_TemperatureControl_Fan_i_Initialization_Api.h>
#include <type-t_TemperatureControl_Fan_i_Operational_Api.h>
#include <type-t_TemperatureControl_Fan_i_fp_fan.h>
#include <type-t_TemperatureControl_Fan_i_fp_fan_Bridge.h>
#include <type-t_TemperatureControl_Fan_i_fp_fan_Bridge_EntryPoints.h>
#include <type-t_TemperatureControl_SetPoint_i.h>
#include <type-t_TemperatureControl_SetPoint_i_Payload.h>
#include <type-t_TemperatureControl_TempControl_i_Api.h>
#include <type-t_TemperatureControl_TempControl_i_Initialization_Api.h>
#include <type-t_TemperatureControl_TempControl_i_Operational_Api.h>
#include <type-t_TemperatureControl_TempControl_i_tcp_tempControl.h>
#include <type-t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge.h>
#include <type-t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_EntryPoints.h>
#include <type-t_TemperatureControl_TempSensor_i_Api.h>
#include <type-t_TemperatureControl_TempSensor_i_Initialization_Api.h>
#include <type-t_TemperatureControl_TempSensor_i_Operational_Api.h>
#include <type-t_TemperatureControl_TempSensor_i_tsp_tempSensor.h>
#include <type-t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge.h>
#include <type-t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_EntryPoints.h>
#include <type-t_TemperatureControl_TempUnit_Type.h>
#include <type-t_TemperatureControl_TempUnit_Payload.h>
#include <type-t_TemperatureControl_Temperature_i.h>
#include <type-t_TemperatureControl_Temperature_i_Payload.h>
#include <type-t_ThreadTimingProperties.h>
#include <type-t_TranspilerToucher.h>
#include <type-t_TranspilerUtil.h>

#if defined(static_assert)
#define STATIC_ASSERT static_assert
#define GLOBAL_STATIC_ASSERT(a, b, c) static_assert(b, c)
#else
#define STATIC_ASSERT(pred, explanation); {char assert[1/(pred)];(void)assert;}
#define GLOBAL_STATIC_ASSERT(unique, pred, explanation); namespace ASSERTION {char unique[1/(pred)];}
#endif

size_t sizeOf(Type t);
void Type_assign(void *dest, void *src, size_t destSize);

#ifdef __cplusplus
}
#endif

#endif