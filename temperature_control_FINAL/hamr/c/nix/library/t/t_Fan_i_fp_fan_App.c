#include <all.h>

B t_Fan_i_fp_fan_App_initialized_ = F;

union art_Bridge_EntryPoints _t_Fan_i_fp_fan_App_entryPoints;
Z _t_Fan_i_fp_fan_App_appPortId;
union Option_882048 _t_Fan_i_fp_fan_App_appPortIdOpt;
Z _t_Fan_i_fp_fan_App_fanCmdPortId;
union Option_882048 _t_Fan_i_fp_fan_App_fanCmdPortIdOpt;

void t_Fan_i_fp_fan_App_init(STACK_FRAME_ONLY) {
  if (t_Fan_i_fp_fan_App_initialized_) return;
  t_Fan_i_fp_fan_App_initialized_ = T;
  DeclNewStackFrame(caller, "Fan_i_fp_fan_App.scala", "t.Fan_i_fp_fan_App", "<init>", 0);
  t_Fan_i_fp_fan_App_init_entryPoints(SF_LAST);
  t_Fan_i_fp_fan_App_init_appPortId(SF_LAST);
  t_Fan_i_fp_fan_App_init_appPortIdOpt(SF_LAST);
  t_Fan_i_fp_fan_App_init_fanCmdPortId(SF_LAST);
  t_Fan_i_fp_fan_App_init_fanCmdPortIdOpt(SF_LAST);
}

art_Bridge_EntryPoints t_Fan_i_fp_fan_App_entryPoints(STACK_FRAME_ONLY) {
  t_Fan_i_fp_fan_App_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_t_Fan_i_fp_fan_App_entryPoints;
}

Z t_Fan_i_fp_fan_App_appPortId(STACK_FRAME_ONLY) {
  t_Fan_i_fp_fan_App_init(CALLER_LAST);
  return _t_Fan_i_fp_fan_App_appPortId;
}

Option_882048 t_Fan_i_fp_fan_App_appPortIdOpt(STACK_FRAME_ONLY) {
  t_Fan_i_fp_fan_App_init(CALLER_LAST);
  return (Option_882048) &_t_Fan_i_fp_fan_App_appPortIdOpt;
}

Z t_Fan_i_fp_fan_App_fanCmdPortId(STACK_FRAME_ONLY) {
  t_Fan_i_fp_fan_App_init(CALLER_LAST);
  return _t_Fan_i_fp_fan_App_fanCmdPortId;
}

Option_882048 t_Fan_i_fp_fan_App_fanCmdPortIdOpt(STACK_FRAME_ONLY) {
  t_Fan_i_fp_fan_App_init(CALLER_LAST);
  return (Option_882048) &_t_Fan_i_fp_fan_App_fanCmdPortIdOpt;
}

Z t_Fan_i_fp_fan_App_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "Fan_i_fp_fan_App.scala", "t.Fan_i_fp_fan_App", "main", 0);

  sfUpdateLoc(56);
  Z seed;
  {
    B t_0;
    {
      Z t_1 = IS_948B60_size(SF args);
      t_0 = Z__eq(t_1, Z_C(1));
    }
    if (t_0) {

      sfUpdateLoc(57);
      Z n;
      {
        DeclNewOption_882048(t_2);
        Z_apply(&t_2, IS_948B60_at(args, Z_C(0)));
        Z t_3 = Option_882048_get_(SF (&t_2));
        n = t_3;
      }
      Z t_4;
      if (Z__eq(n, Z_C(0))) {
        t_4 = Z_C(1);
      } else {
        t_4 = n;
      }
      seed = t_4;
    } else {
      seed = Z_C(1);
    }
  }

  sfUpdateLoc(63);
  {
    t_Fan_i_fp_fan_App_initialiseArchitecture(SF seed);
  }

  sfUpdateLoc(65);
  {
    DeclNewMBox2_1CBFC4(t_5);
    t_IPCPorts_emptyReceiveOut(SF (MBox2_1CBFC4) &t_5);
    t_PlatformNix_receive(SF (Option_882048) t_Fan_i_fp_fan_App_appPortIdOpt(SF_LAST), (MBox2_1CBFC4) ((MBox2_1CBFC4) &t_5));
  }

  sfUpdateLoc(67);
  {
    t_Fan_i_fp_fan_App_initialise(SF_LAST);
  }

  sfUpdateLoc(69);
  {
    DeclNewMBox2_1CBFC4(t_6);
    t_IPCPorts_emptyReceiveOut(SF (MBox2_1CBFC4) &t_6);
    t_PlatformNix_receive(SF (Option_882048) t_Fan_i_fp_fan_App_appPortIdOpt(SF_LAST), (MBox2_1CBFC4) ((MBox2_1CBFC4) &t_6));
  }

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(71);
  {
    String_cprint(string("Fan_i_fp_fan_App starting ..."), T);
    cprintln(T);
    cflush(T);
  }

  #endif

  sfUpdateLoc(73);
  {
    t_ArtNix_eventDispatch(SF_LAST);
  }

  sfUpdateLoc(75);
  B terminated;
  {
    terminated = F;
  }

  sfUpdateLoc(76);
  B t_76_5;
  {
    t_76_5 = (!terminated);
  }
  while(t_76_5) {

    sfUpdateLoc(77);
    DeclNewMBox2_1029D1(_out);
    MBox2_1029D1 out = (MBox2_1029D1) &_out;
    {
      DeclNewMBox2_1029D1(t_7);
      t_IPCPorts_emptyReceiveAsyncOut(SF (MBox2_1029D1) &t_7);
      Type_assign(out, ((MBox2_1029D1) &t_7), sizeof(struct MBox2_1029D1));
    }

    sfUpdateLoc(78);
    {
      t_PlatformNix_receiveAsync(SF (Option_882048) t_Fan_i_fp_fan_App_appPortIdOpt(SF_LAST), (MBox2_1029D1) out);
    }

    sfUpdateLoc(79);
    B t_8;
    {
      B t_9 = Option_8E9F45_isEmpty_(SF MBox2_1029D1_value2_(out));
      t_8 = t_9;
    }
    if (t_8) {

      sfUpdateLoc(80);
      {
        t_Fan_i_fp_fan_App_compute(SF_LAST);
      }
    } else {

      sfUpdateLoc(82);
      {
        terminated = T;
      }
    }

    sfUpdateLoc(76);
    t_76_5 = (!terminated);
  }

  sfUpdateLoc(85);
  {
    t_Fan_i_fp_fan_App_exit(SF_LAST);
  }

  sfUpdateLoc(87);
  {
    t_Fan_i_fp_fan_App_touch(SF_LAST);
  }
  return Z_C(0);
}

Unit t_Fan_i_fp_fan_App_atExit(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Fan_i_fp_fan_App.scala", "t.Fan_i_fp_fan_App", "atExit", 0);

  sfUpdateLoc(129);
  {
    t_Fan_i_fp_fan_App_exit(SF_LAST);
  }
}

Unit t_Fan_i_fp_fan_App_initialiseArchitecture(STACK_FRAME Z seed) {
  DeclNewStackFrame(caller, "Fan_i_fp_fan_App.scala", "t.Fan_i_fp_fan_App", "initialiseArchitecture", 0);

  sfUpdateLoc(20);
  {
    t_PlatformNix_initialise(SF seed, (Option_882048) t_Fan_i_fp_fan_App_appPortIdOpt(SF_LAST));
  }

  sfUpdateLoc(21);
  {
    t_PlatformNix_initialise(SF seed, (Option_882048) t_Fan_i_fp_fan_App_fanCmdPortIdOpt(SF_LAST));
  }

  sfUpdateLoc(23);
  {
    DeclNewart_scheduling_nop_NopScheduler(t_0);
    art_scheduling_nop_NopScheduler_apply(SF &t_0);
    art_Art_run(SF (art_ArchitectureDescription) t_Arch_ad(SF_LAST), (art_scheduling_Scheduler) (&t_0));
  }
}

Unit t_Fan_i_fp_fan_App_initialise(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Fan_i_fp_fan_App.scala", "t.Fan_i_fp_fan_App", "initialise", 0);

  sfUpdateLoc(27);
  {
    art_Bridge_EntryPoints_initialise_(SF t_Fan_i_fp_fan_App_entryPoints(SF_LAST));
  }
}

inline B t_Fan_i_fp_fan_App_compute_extract_37_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_1, t_TemperatureControl_FanCmd_Payload *_v_37_19) {
  if (!Some_D29615__is(SF t_1)) return F;
  if (!t_TemperatureControl_FanCmd_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_1)))) return F;
  *_v_37_19 = (t_TemperatureControl_FanCmd_Payload) Some_D29615_value_(Some_D29615__as(SF t_1));
  return T;
}

inline B t_Fan_i_fp_fan_App_compute_extract_38_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_1, art_DataContent *_v_38_19) {
  if (!Some_D29615__is(SF t_1)) return F;
  *_v_38_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_1));
  return T;
}

inline B t_Fan_i_fp_fan_App_compute_extract_39_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_1) {
  if (!None_964667__is(SF t_1)) return F;
  return T;
}

Unit t_Fan_i_fp_fan_App_compute(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Fan_i_fp_fan_App.scala", "t.Fan_i_fp_fan_App", "compute", 0);

  sfUpdateLoc(31);
  B dispatch;
  {
    dispatch = F;
  }
  {

    sfUpdateLoc(34);
    DeclNewMBox2_1029D1(_out);
    MBox2_1029D1 out = (MBox2_1029D1) &_out;
    {
      DeclNewMBox2_1029D1(t_0);
      t_IPCPorts_emptyReceiveAsyncOut(SF (MBox2_1029D1) &t_0);
      Type_assign(out, ((MBox2_1029D1) &t_0), sizeof(struct MBox2_1029D1));
    }

    sfUpdateLoc(35);
    {
      t_PlatformNix_receiveAsync(SF (Option_882048) t_Fan_i_fp_fan_App_fanCmdPortIdOpt(SF_LAST), (MBox2_1029D1) out);
    }

    sfUpdateLoc(36);
    Option_8E9F45 t_1 = MBox2_1029D1_value2_(out);
    B match_36_11 = F;
    if (!match_36_11) {
      t_TemperatureControl_FanCmd_Payload v_37_19;
      match_36_11 = t_Fan_i_fp_fan_App_compute_extract_37_14_8E9F45(SF t_1, &v_37_19);
      if (match_36_11) {

        sfUpdateLoc(37);
        {
          t_ArtNix_updateData(SF t_Fan_i_fp_fan_App_fanCmdPortId(SF_LAST), (art_DataContent) v_37_19);
        }

        sfUpdateLoc(37);
        {
          dispatch = T;
        }
      }
    }
    if (!match_36_11) {
      art_DataContent v_38_19;
      match_36_11 = t_Fan_i_fp_fan_App_compute_extract_38_14_8E9F45(SF t_1, &v_38_19);
      if (match_36_11) {

        sfUpdateLoc(38);
        {
          DeclNewString(t_2);
          String t_3 = (String) &t_2;
          DeclNewString(t_4);
          String_string_(SF (String) &t_4, string("Unexpected payload on port fanCmd.  Expecting something of type TemperatureControl.FanCmd_Payload but received "));
          art_DataContent_string_(SF (String) &t_4, v_38_19);
          String_string_(SF (String) &t_4, string(""));
          String_string_(SF t_3, ((String) &t_4));
          sfAbort(t_3->value);
          abort();
        }
      }
    }
    if (!match_36_11) {
      match_36_11 = t_Fan_i_fp_fan_App_compute_extract_39_14_8E9F45(SF t_1);
      if (match_36_11) {
      }
    }
    sfAssert(match_36_11, "Error when pattern matching.");
  }

  sfUpdateLoc(42);
  B t_5;
  {
    t_5 = dispatch;
  }
  if (t_5) {

    sfUpdateLoc(43);
    {
      art_Bridge_EntryPoints_compute_(SF t_Fan_i_fp_fan_App_entryPoints(SF_LAST));
    }

    sfUpdateLoc(44);
    {
      t_Process_sleep(SF Z_C(1));
    }
  } else {

    sfUpdateLoc(46);
    {
      t_Process_sleep(SF Z_C(10));
    }
  }
}

Unit t_Fan_i_fp_fan_App_exit(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Fan_i_fp_fan_App.scala", "t.Fan_i_fp_fan_App", "exit", 0);

  sfUpdateLoc(124);
  {
    t_Fan_i_fp_fan_App_finalise(SF_LAST);
  }

  sfUpdateLoc(125);
  {
    t_PlatformNix_finalise(SF_LAST);
  }
}

Unit t_Fan_i_fp_fan_App_touch_printDataContent(STACK_FRAME art_DataContent a) {
  DeclNewStackFrame(caller, "Fan_i_fp_fan_App.scala", "t.Fan_i_fp_fan_App.touch", "printDataContent", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(101);
  {
    DeclNewString(t_0);
    String_string_(SF (String) &t_0, string(""));
    art_DataContent_string_(SF (String) &t_0, a);
    String_string_(SF (String) &t_0, string(""));
    String_cprint(((String) &t_0), T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit t_Fan_i_fp_fan_App_touch(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Fan_i_fp_fan_App.scala", "t.Fan_i_fp_fan_App", "touch", 0);

  sfUpdateLoc(93);
  B t_0;
  {
    t_0 = F;
  }
  if (t_0) {

    sfUpdateLoc(94);
    {
      t_TranspilerToucher_touch(SF_LAST);
    }

    sfUpdateLoc(97);
    DeclNewMBox2_1CBFC4(_mbox2Boolean_Payload);
    MBox2_1CBFC4 mbox2Boolean_Payload = (MBox2_1CBFC4) &_mbox2Boolean_Payload;
    {
      DeclNewt_Base_Types_Boolean_Payload(t_2);
      t_Base_Types_Boolean_Payload_apply(SF &t_2, T);
      DeclNewMBox2_1CBFC4(t_1);
      MBox2_1CBFC4_apply(SF &t_1, Z_C(0), (art_DataContent) (&t_2));
      Type_assign(mbox2Boolean_Payload, (&t_1), sizeof(struct MBox2_1CBFC4));
    }

    sfUpdateLoc(98);
    DeclNewMBox2_1029D1(_mbox2OptionDataContent);
    MBox2_1029D1 mbox2OptionDataContent = (MBox2_1029D1) &_mbox2OptionDataContent;
    {
      DeclNewNone_964667(t_4);
      None_964667_apply(SF &t_4);
      DeclNewMBox2_1029D1(t_3);
      MBox2_1029D1_apply(SF &t_3, Z_C(0), (Option_8E9F45) (&t_4));
      Type_assign(mbox2OptionDataContent, (&t_3), sizeof(struct MBox2_1029D1));
    }

    sfUpdateLoc(103);
    {
      F32 t_6 = t_Base_Types_Float_32_example(SF_LAST);
      DeclNewt_Base_Types_Float_32_Payload(t_5);
      t_Base_Types_Float_32_Payload_apply(SF &t_5, t_6);
      t_Fan_i_fp_fan_App_touch_printDataContent(SF (art_DataContent) (&t_5));
    }

    sfUpdateLoc(104);
    {
      DeclNewOption_40D664(t_8);
      t_TemperatureControl_TempUnit_Type_byOrdinal(SF (Option_40D664) &t_8, Z_C(0));
      t_TemperatureControl_TempUnit_Type t_9 = Option_40D664_get_(SF ((Option_40D664) &t_8));
      DeclNewt_TemperatureControl_TempUnit_Payload(t_7);
      t_TemperatureControl_TempUnit_Payload_apply(SF &t_7, t_9);
      t_Fan_i_fp_fan_App_touch_printDataContent(SF (art_DataContent) (&t_7));
    }

    sfUpdateLoc(105);
    {
      DeclNewt_TemperatureControl_Temperature_i(t_11);
      t_TemperatureControl_Temperature_i_example(SF (t_TemperatureControl_Temperature_i) &t_11);
      DeclNewt_TemperatureControl_Temperature_i_Payload(t_10);
      t_TemperatureControl_Temperature_i_Payload_apply(SF &t_10, (t_TemperatureControl_Temperature_i) ((t_TemperatureControl_Temperature_i) &t_11));
      t_Fan_i_fp_fan_App_touch_printDataContent(SF (art_DataContent) (&t_10));
    }

    sfUpdateLoc(106);
    {
      DeclNewt_TemperatureControl_SetPoint_i(t_13);
      t_TemperatureControl_SetPoint_i_example(SF (t_TemperatureControl_SetPoint_i) &t_13);
      DeclNewt_TemperatureControl_SetPoint_i_Payload(t_12);
      t_TemperatureControl_SetPoint_i_Payload_apply(SF &t_12, (t_TemperatureControl_SetPoint_i) ((t_TemperatureControl_SetPoint_i) &t_13));
      t_Fan_i_fp_fan_App_touch_printDataContent(SF (art_DataContent) (&t_12));
    }

    sfUpdateLoc(107);
    {
      DeclNewOption_C5A124(t_15);
      t_TemperatureControl_FanAck_Type_byOrdinal(SF (Option_C5A124) &t_15, Z_C(0));
      t_TemperatureControl_FanAck_Type t_16 = Option_C5A124_get_(SF ((Option_C5A124) &t_15));
      DeclNewt_TemperatureControl_FanAck_Payload(t_14);
      t_TemperatureControl_FanAck_Payload_apply(SF &t_14, t_16);
      t_Fan_i_fp_fan_App_touch_printDataContent(SF (art_DataContent) (&t_14));
    }

    sfUpdateLoc(108);
    {
      DeclNewOption_2B0611(t_18);
      t_TemperatureControl_FanCmd_Type_byOrdinal(SF (Option_2B0611) &t_18, Z_C(0));
      t_TemperatureControl_FanCmd_Type t_19 = Option_2B0611_get_(SF ((Option_2B0611) &t_18));
      DeclNewt_TemperatureControl_FanCmd_Payload(t_17);
      t_TemperatureControl_FanCmd_Payload_apply(SF &t_17, t_19);
      t_Fan_i_fp_fan_App_touch_printDataContent(SF (art_DataContent) (&t_17));
    }

    sfUpdateLoc(109);
    {
      DeclNewart_Empty(t_20);
      art_Empty_apply(SF &t_20);
      t_Fan_i_fp_fan_App_touch_printDataContent(SF (art_DataContent) (&t_20));
    }

    sfUpdateLoc(111);
    {
      DeclNewt_TemperatureControl_Fan_i_Initialization_Api(t_21);
      Option_74C297_get_(SF (t_TemperatureControl_Fan_i_Initialization_Api) &t_21, t_TemperatureControl_Fan_i_fp_fan_Bridge_c_initialization_api(SF_LAST));
      t_TemperatureControl_Fan_i_Initialization_Api_logInfo_(SF ((t_TemperatureControl_Fan_i_Initialization_Api) &t_21), (String) string(""));
    }

    sfUpdateLoc(112);
    {
      DeclNewt_TemperatureControl_Fan_i_Initialization_Api(t_22);
      Option_74C297_get_(SF (t_TemperatureControl_Fan_i_Initialization_Api) &t_22, t_TemperatureControl_Fan_i_fp_fan_Bridge_c_initialization_api(SF_LAST));
      t_TemperatureControl_Fan_i_Initialization_Api_logDebug_(SF ((t_TemperatureControl_Fan_i_Initialization_Api) &t_22), (String) string(""));
    }

    sfUpdateLoc(113);
    {
      DeclNewt_TemperatureControl_Fan_i_Initialization_Api(t_23);
      Option_74C297_get_(SF (t_TemperatureControl_Fan_i_Initialization_Api) &t_23, t_TemperatureControl_Fan_i_fp_fan_Bridge_c_initialization_api(SF_LAST));
      t_TemperatureControl_Fan_i_Initialization_Api_logError_(SF ((t_TemperatureControl_Fan_i_Initialization_Api) &t_23), (String) string(""));
    }

    sfUpdateLoc(114);
    {
      DeclNewt_TemperatureControl_Fan_i_Operational_Api(t_24);
      Option_A8F8FC_get_(SF (t_TemperatureControl_Fan_i_Operational_Api) &t_24, t_TemperatureControl_Fan_i_fp_fan_Bridge_c_operational_api(SF_LAST));
      t_TemperatureControl_Fan_i_Operational_Api_logInfo_(SF ((t_TemperatureControl_Fan_i_Operational_Api) &t_24), (String) string(""));
    }

    sfUpdateLoc(115);
    {
      DeclNewt_TemperatureControl_Fan_i_Operational_Api(t_25);
      Option_A8F8FC_get_(SF (t_TemperatureControl_Fan_i_Operational_Api) &t_25, t_TemperatureControl_Fan_i_fp_fan_Bridge_c_operational_api(SF_LAST));
      t_TemperatureControl_Fan_i_Operational_Api_logDebug_(SF ((t_TemperatureControl_Fan_i_Operational_Api) &t_25), (String) string(""));
    }

    sfUpdateLoc(116);
    {
      DeclNewt_TemperatureControl_Fan_i_Operational_Api(t_26);
      Option_A8F8FC_get_(SF (t_TemperatureControl_Fan_i_Operational_Api) &t_26, t_TemperatureControl_Fan_i_fp_fan_Bridge_c_operational_api(SF_LAST));
      t_TemperatureControl_Fan_i_Operational_Api_logError_(SF ((t_TemperatureControl_Fan_i_Operational_Api) &t_26), (String) string(""));
    }

    sfUpdateLoc(117);
    Option_2B0611 apiUsage_fanCmd;
    DeclNewt_TemperatureControl_Fan_i_Operational_Api(t_27);
    Option_A8F8FC_get_(SF (t_TemperatureControl_Fan_i_Operational_Api) &t_27, t_TemperatureControl_Fan_i_fp_fan_Bridge_c_operational_api(SF_LAST));
    DeclNewOption_2B0611(t_28);
    t_TemperatureControl_Fan_i_Operational_Api_get_fanCmd_(SF (Option_2B0611) &t_28, ((t_TemperatureControl_Fan_i_Operational_Api) &t_27));
    apiUsage_fanCmd = (Option_2B0611) ((Option_2B0611) &t_28);

    sfUpdateLoc(118);
    {
      DeclNewt_TemperatureControl_Fan_i_Initialization_Api(t_29);
      Option_74C297_get_(SF (t_TemperatureControl_Fan_i_Initialization_Api) &t_29, t_TemperatureControl_Fan_i_fp_fan_Bridge_c_initialization_api(SF_LAST));
      DeclNewOption_C5A124(t_30);
      t_TemperatureControl_FanAck_Type_byOrdinal(SF (Option_C5A124) &t_30, Z_C(0));
      t_TemperatureControl_FanAck_Type t_31 = Option_C5A124_get_(SF ((Option_C5A124) &t_30));
      t_TemperatureControl_Fan_i_Initialization_Api_put_fanAck_(SF ((t_TemperatureControl_Fan_i_Initialization_Api) &t_29), t_31);
    }

    sfUpdateLoc(119);
    {
      DeclNewt_TemperatureControl_Fan_i_Operational_Api(t_32);
      Option_A8F8FC_get_(SF (t_TemperatureControl_Fan_i_Operational_Api) &t_32, t_TemperatureControl_Fan_i_fp_fan_Bridge_c_operational_api(SF_LAST));
      DeclNewOption_C5A124(t_33);
      t_TemperatureControl_FanAck_Type_byOrdinal(SF (Option_C5A124) &t_33, Z_C(0));
      t_TemperatureControl_FanAck_Type t_34 = Option_C5A124_get_(SF ((Option_C5A124) &t_33));
      t_TemperatureControl_Fan_i_Operational_Api_put_fanAck_(SF ((t_TemperatureControl_Fan_i_Operational_Api) &t_32), t_34);
    }
  }
}

Unit t_Fan_i_fp_fan_App_finalise(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Fan_i_fp_fan_App.scala", "t.Fan_i_fp_fan_App", "finalise", 0);

  sfUpdateLoc(51);
  {
    art_Bridge_EntryPoints_finalise_(SF t_Fan_i_fp_fan_App_entryPoints(SF_LAST));
  }
}

void t_Fan_i_fp_fan_App_init_entryPoints(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(13);
  Type_assign(&_t_Fan_i_fp_fan_App_entryPoints, t_TemperatureControl_Fan_i_fp_fan_Bridge_entryPoints_(t_Arch_TempControlSystem_i_Instance_fp_fan(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
};

void t_Fan_i_fp_fan_App_init_appPortId(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(14);
  _t_Fan_i_fp_fan_App_appPortId = t_IPCPorts_Fan_i_fp_fan_App(SF_LAST);
};

void t_Fan_i_fp_fan_App_init_appPortIdOpt(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(15);
  DeclNewSome_488F47(t_0);
  Some_488F47_apply(SF &t_0, t_Fan_i_fp_fan_App_appPortId(SF_LAST));
  Type_assign(&_t_Fan_i_fp_fan_App_appPortIdOpt, (&t_0), sizeof(struct Some_488F47));
};

void t_Fan_i_fp_fan_App_init_fanCmdPortId(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(16);
  _t_Fan_i_fp_fan_App_fanCmdPortId = art_Port_2ED9E6_id_(t_TemperatureControl_Fan_i_fp_fan_Bridge_fanCmd_(t_Arch_TempControlSystem_i_Instance_fp_fan(SF_LAST)));
};

void t_Fan_i_fp_fan_App_init_fanCmdPortIdOpt(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(17);
  DeclNewSome_488F47(t_1);
  Some_488F47_apply(SF &t_1, t_Fan_i_fp_fan_App_fanCmdPortId(SF_LAST));
  Type_assign(&_t_Fan_i_fp_fan_App_fanCmdPortIdOpt, (&t_1), sizeof(struct Some_488F47));
};