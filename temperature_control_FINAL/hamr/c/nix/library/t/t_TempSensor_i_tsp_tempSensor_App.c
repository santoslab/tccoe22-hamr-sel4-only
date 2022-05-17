#include <all.h>

B t_TempSensor_i_tsp_tempSensor_App_initialized_ = F;

union art_Bridge_EntryPoints _t_TempSensor_i_tsp_tempSensor_App_entryPoints;
Z _t_TempSensor_i_tsp_tempSensor_App_appPortId;
union Option_882048 _t_TempSensor_i_tsp_tempSensor_App_appPortIdOpt;

void t_TempSensor_i_tsp_tempSensor_App_init(STACK_FRAME_ONLY) {
  if (t_TempSensor_i_tsp_tempSensor_App_initialized_) return;
  t_TempSensor_i_tsp_tempSensor_App_initialized_ = T;
  DeclNewStackFrame(caller, "TempSensor_i_tsp_tempSensor_App.scala", "t.TempSensor_i_tsp_tempSensor_App", "<init>", 0);
  t_TempSensor_i_tsp_tempSensor_App_init_entryPoints(SF_LAST);
  t_TempSensor_i_tsp_tempSensor_App_init_appPortId(SF_LAST);
  t_TempSensor_i_tsp_tempSensor_App_init_appPortIdOpt(SF_LAST);
}

art_Bridge_EntryPoints t_TempSensor_i_tsp_tempSensor_App_entryPoints(STACK_FRAME_ONLY) {
  t_TempSensor_i_tsp_tempSensor_App_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_t_TempSensor_i_tsp_tempSensor_App_entryPoints;
}

Z t_TempSensor_i_tsp_tempSensor_App_appPortId(STACK_FRAME_ONLY) {
  t_TempSensor_i_tsp_tempSensor_App_init(CALLER_LAST);
  return _t_TempSensor_i_tsp_tempSensor_App_appPortId;
}

Option_882048 t_TempSensor_i_tsp_tempSensor_App_appPortIdOpt(STACK_FRAME_ONLY) {
  t_TempSensor_i_tsp_tempSensor_App_init(CALLER_LAST);
  return (Option_882048) &_t_TempSensor_i_tsp_tempSensor_App_appPortIdOpt;
}

Z t_TempSensor_i_tsp_tempSensor_App_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "TempSensor_i_tsp_tempSensor_App.scala", "t.TempSensor_i_tsp_tempSensor_App", "main", 0);

  sfUpdateLoc(39);
  Z seed;
  {
    B t_0;
    {
      Z t_1 = IS_948B60_size(SF args);
      t_0 = Z__eq(t_1, Z_C(1));
    }
    if (t_0) {

      sfUpdateLoc(40);
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

  sfUpdateLoc(46);
  {
    t_TempSensor_i_tsp_tempSensor_App_initialiseArchitecture(SF seed);
  }

  sfUpdateLoc(48);
  {
    DeclNewMBox2_1CBFC4(t_5);
    t_IPCPorts_emptyReceiveOut(SF (MBox2_1CBFC4) &t_5);
    t_PlatformNix_receive(SF (Option_882048) t_TempSensor_i_tsp_tempSensor_App_appPortIdOpt(SF_LAST), (MBox2_1CBFC4) ((MBox2_1CBFC4) &t_5));
  }

  sfUpdateLoc(50);
  {
    t_TempSensor_i_tsp_tempSensor_App_initialise(SF_LAST);
  }

  sfUpdateLoc(52);
  {
    DeclNewMBox2_1CBFC4(t_6);
    t_IPCPorts_emptyReceiveOut(SF (MBox2_1CBFC4) &t_6);
    t_PlatformNix_receive(SF (Option_882048) t_TempSensor_i_tsp_tempSensor_App_appPortIdOpt(SF_LAST), (MBox2_1CBFC4) ((MBox2_1CBFC4) &t_6));
  }

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(54);
  {
    String_cprint(string("TempSensor_i_tsp_tempSensor_App starting ..."), T);
    cprintln(T);
    cflush(T);
  }

  #endif

  sfUpdateLoc(56);
  {
    t_ArtNix_timeDispatch(SF_LAST);
  }

  sfUpdateLoc(58);
  B terminated;
  {
    terminated = F;
  }

  sfUpdateLoc(59);
  B t_59_5;
  {
    t_59_5 = (!terminated);
  }
  while(t_59_5) {

    sfUpdateLoc(60);
    DeclNewMBox2_1029D1(_out);
    MBox2_1029D1 out = (MBox2_1029D1) &_out;
    {
      DeclNewMBox2_1029D1(t_7);
      t_IPCPorts_emptyReceiveAsyncOut(SF (MBox2_1029D1) &t_7);
      Type_assign(out, ((MBox2_1029D1) &t_7), sizeof(struct MBox2_1029D1));
    }

    sfUpdateLoc(61);
    {
      t_PlatformNix_receiveAsync(SF (Option_882048) t_TempSensor_i_tsp_tempSensor_App_appPortIdOpt(SF_LAST), (MBox2_1029D1) out);
    }

    sfUpdateLoc(62);
    B t_8;
    {
      B t_9 = Option_8E9F45_isEmpty_(SF MBox2_1029D1_value2_(out));
      t_8 = t_9;
    }
    if (t_8) {

      sfUpdateLoc(63);
      {
        t_TempSensor_i_tsp_tempSensor_App_compute(SF_LAST);
      }
    } else {

      sfUpdateLoc(65);
      {
        terminated = T;
      }
    }

    sfUpdateLoc(59);
    t_59_5 = (!terminated);
  }

  sfUpdateLoc(68);
  {
    t_TempSensor_i_tsp_tempSensor_App_exit(SF_LAST);
  }

  sfUpdateLoc(70);
  {
    t_TempSensor_i_tsp_tempSensor_App_touch(SF_LAST);
  }
  return Z_C(0);
}

Unit t_TempSensor_i_tsp_tempSensor_App_atExit(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "TempSensor_i_tsp_tempSensor_App.scala", "t.TempSensor_i_tsp_tempSensor_App", "atExit", 0);

  sfUpdateLoc(113);
  {
    t_TempSensor_i_tsp_tempSensor_App_exit(SF_LAST);
  }
}

Unit t_TempSensor_i_tsp_tempSensor_App_initialiseArchitecture(STACK_FRAME Z seed) {
  DeclNewStackFrame(caller, "TempSensor_i_tsp_tempSensor_App.scala", "t.TempSensor_i_tsp_tempSensor_App", "initialiseArchitecture", 0);

  sfUpdateLoc(18);
  {
    t_PlatformNix_initialise(SF seed, (Option_882048) t_TempSensor_i_tsp_tempSensor_App_appPortIdOpt(SF_LAST));
  }

  sfUpdateLoc(20);
  {
    DeclNewart_scheduling_nop_NopScheduler(t_0);
    art_scheduling_nop_NopScheduler_apply(SF &t_0);
    art_Art_run(SF (art_ArchitectureDescription) t_Arch_ad(SF_LAST), (art_scheduling_Scheduler) (&t_0));
  }
}

Unit t_TempSensor_i_tsp_tempSensor_App_initialise(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "TempSensor_i_tsp_tempSensor_App.scala", "t.TempSensor_i_tsp_tempSensor_App", "initialise", 0);

  sfUpdateLoc(24);
  {
    art_Bridge_EntryPoints_initialise_(SF t_TempSensor_i_tsp_tempSensor_App_entryPoints(SF_LAST));
  }
}

Unit t_TempSensor_i_tsp_tempSensor_App_compute(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "TempSensor_i_tsp_tempSensor_App.scala", "t.TempSensor_i_tsp_tempSensor_App", "compute", 0);

  sfUpdateLoc(29);
  {
    art_Bridge_EntryPoints_compute_(SF t_TempSensor_i_tsp_tempSensor_App_entryPoints(SF_LAST));
  }

  sfUpdateLoc(30);
  {
    t_Process_sleep(SF Z_C(1000));
  }
}

Unit t_TempSensor_i_tsp_tempSensor_App_exit(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "TempSensor_i_tsp_tempSensor_App.scala", "t.TempSensor_i_tsp_tempSensor_App", "exit", 0);

  sfUpdateLoc(108);
  {
    t_TempSensor_i_tsp_tempSensor_App_finalise(SF_LAST);
  }

  sfUpdateLoc(109);
  {
    t_PlatformNix_finalise(SF_LAST);
  }
}

Unit t_TempSensor_i_tsp_tempSensor_App_touch_printDataContent(STACK_FRAME art_DataContent a) {
  DeclNewStackFrame(caller, "TempSensor_i_tsp_tempSensor_App.scala", "t.TempSensor_i_tsp_tempSensor_App.touch", "printDataContent", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(84);
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

Unit t_TempSensor_i_tsp_tempSensor_App_touch(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "TempSensor_i_tsp_tempSensor_App.scala", "t.TempSensor_i_tsp_tempSensor_App", "touch", 0);

  sfUpdateLoc(76);
  B t_0;
  {
    t_0 = F;
  }
  if (t_0) {

    sfUpdateLoc(77);
    {
      t_TranspilerToucher_touch(SF_LAST);
    }

    sfUpdateLoc(80);
    DeclNewMBox2_1CBFC4(_mbox2Boolean_Payload);
    MBox2_1CBFC4 mbox2Boolean_Payload = (MBox2_1CBFC4) &_mbox2Boolean_Payload;
    {
      DeclNewt_Base_Types_Boolean_Payload(t_2);
      t_Base_Types_Boolean_Payload_apply(SF &t_2, T);
      DeclNewMBox2_1CBFC4(t_1);
      MBox2_1CBFC4_apply(SF &t_1, Z_C(0), (art_DataContent) (&t_2));
      Type_assign(mbox2Boolean_Payload, (&t_1), sizeof(struct MBox2_1CBFC4));
    }

    sfUpdateLoc(81);
    DeclNewMBox2_1029D1(_mbox2OptionDataContent);
    MBox2_1029D1 mbox2OptionDataContent = (MBox2_1029D1) &_mbox2OptionDataContent;
    {
      DeclNewNone_964667(t_4);
      None_964667_apply(SF &t_4);
      DeclNewMBox2_1029D1(t_3);
      MBox2_1029D1_apply(SF &t_3, Z_C(0), (Option_8E9F45) (&t_4));
      Type_assign(mbox2OptionDataContent, (&t_3), sizeof(struct MBox2_1029D1));
    }

    sfUpdateLoc(86);
    {
      F32 t_6 = t_Base_Types_Float_32_example(SF_LAST);
      DeclNewt_Base_Types_Float_32_Payload(t_5);
      t_Base_Types_Float_32_Payload_apply(SF &t_5, t_6);
      t_TempSensor_i_tsp_tempSensor_App_touch_printDataContent(SF (art_DataContent) (&t_5));
    }

    sfUpdateLoc(87);
    {
      DeclNewOption_40D664(t_8);
      t_TemperatureControl_TempUnit_Type_byOrdinal(SF (Option_40D664) &t_8, Z_C(0));
      t_TemperatureControl_TempUnit_Type t_9 = Option_40D664_get_(SF ((Option_40D664) &t_8));
      DeclNewt_TemperatureControl_TempUnit_Payload(t_7);
      t_TemperatureControl_TempUnit_Payload_apply(SF &t_7, t_9);
      t_TempSensor_i_tsp_tempSensor_App_touch_printDataContent(SF (art_DataContent) (&t_7));
    }

    sfUpdateLoc(88);
    {
      DeclNewt_TemperatureControl_Temperature_i(t_11);
      t_TemperatureControl_Temperature_i_example(SF (t_TemperatureControl_Temperature_i) &t_11);
      DeclNewt_TemperatureControl_Temperature_i_Payload(t_10);
      t_TemperatureControl_Temperature_i_Payload_apply(SF &t_10, (t_TemperatureControl_Temperature_i) ((t_TemperatureControl_Temperature_i) &t_11));
      t_TempSensor_i_tsp_tempSensor_App_touch_printDataContent(SF (art_DataContent) (&t_10));
    }

    sfUpdateLoc(89);
    {
      DeclNewt_TemperatureControl_SetPoint_i(t_13);
      t_TemperatureControl_SetPoint_i_example(SF (t_TemperatureControl_SetPoint_i) &t_13);
      DeclNewt_TemperatureControl_SetPoint_i_Payload(t_12);
      t_TemperatureControl_SetPoint_i_Payload_apply(SF &t_12, (t_TemperatureControl_SetPoint_i) ((t_TemperatureControl_SetPoint_i) &t_13));
      t_TempSensor_i_tsp_tempSensor_App_touch_printDataContent(SF (art_DataContent) (&t_12));
    }

    sfUpdateLoc(90);
    {
      DeclNewOption_C5A124(t_15);
      t_TemperatureControl_FanAck_Type_byOrdinal(SF (Option_C5A124) &t_15, Z_C(0));
      t_TemperatureControl_FanAck_Type t_16 = Option_C5A124_get_(SF ((Option_C5A124) &t_15));
      DeclNewt_TemperatureControl_FanAck_Payload(t_14);
      t_TemperatureControl_FanAck_Payload_apply(SF &t_14, t_16);
      t_TempSensor_i_tsp_tempSensor_App_touch_printDataContent(SF (art_DataContent) (&t_14));
    }

    sfUpdateLoc(91);
    {
      DeclNewOption_2B0611(t_18);
      t_TemperatureControl_FanCmd_Type_byOrdinal(SF (Option_2B0611) &t_18, Z_C(0));
      t_TemperatureControl_FanCmd_Type t_19 = Option_2B0611_get_(SF ((Option_2B0611) &t_18));
      DeclNewt_TemperatureControl_FanCmd_Payload(t_17);
      t_TemperatureControl_FanCmd_Payload_apply(SF &t_17, t_19);
      t_TempSensor_i_tsp_tempSensor_App_touch_printDataContent(SF (art_DataContent) (&t_17));
    }

    sfUpdateLoc(92);
    {
      DeclNewart_Empty(t_20);
      art_Empty_apply(SF &t_20);
      t_TempSensor_i_tsp_tempSensor_App_touch_printDataContent(SF (art_DataContent) (&t_20));
    }

    sfUpdateLoc(94);
    {
      DeclNewt_TemperatureControl_TempSensor_i_Initialization_Api(t_21);
      Option_87C81A_get_(SF (t_TemperatureControl_TempSensor_i_Initialization_Api) &t_21, t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_c_initialization_api(SF_LAST));
      t_TemperatureControl_TempSensor_i_Initialization_Api_logInfo_(SF ((t_TemperatureControl_TempSensor_i_Initialization_Api) &t_21), (String) string(""));
    }

    sfUpdateLoc(95);
    {
      DeclNewt_TemperatureControl_TempSensor_i_Initialization_Api(t_22);
      Option_87C81A_get_(SF (t_TemperatureControl_TempSensor_i_Initialization_Api) &t_22, t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_c_initialization_api(SF_LAST));
      t_TemperatureControl_TempSensor_i_Initialization_Api_logDebug_(SF ((t_TemperatureControl_TempSensor_i_Initialization_Api) &t_22), (String) string(""));
    }

    sfUpdateLoc(96);
    {
      DeclNewt_TemperatureControl_TempSensor_i_Initialization_Api(t_23);
      Option_87C81A_get_(SF (t_TemperatureControl_TempSensor_i_Initialization_Api) &t_23, t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_c_initialization_api(SF_LAST));
      t_TemperatureControl_TempSensor_i_Initialization_Api_logError_(SF ((t_TemperatureControl_TempSensor_i_Initialization_Api) &t_23), (String) string(""));
    }

    sfUpdateLoc(97);
    {
      DeclNewt_TemperatureControl_TempSensor_i_Operational_Api(t_24);
      Option_10368D_get_(SF (t_TemperatureControl_TempSensor_i_Operational_Api) &t_24, t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_c_operational_api(SF_LAST));
      t_TemperatureControl_TempSensor_i_Operational_Api_logInfo_(SF ((t_TemperatureControl_TempSensor_i_Operational_Api) &t_24), (String) string(""));
    }

    sfUpdateLoc(98);
    {
      DeclNewt_TemperatureControl_TempSensor_i_Operational_Api(t_25);
      Option_10368D_get_(SF (t_TemperatureControl_TempSensor_i_Operational_Api) &t_25, t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_c_operational_api(SF_LAST));
      t_TemperatureControl_TempSensor_i_Operational_Api_logDebug_(SF ((t_TemperatureControl_TempSensor_i_Operational_Api) &t_25), (String) string(""));
    }

    sfUpdateLoc(99);
    {
      DeclNewt_TemperatureControl_TempSensor_i_Operational_Api(t_26);
      Option_10368D_get_(SF (t_TemperatureControl_TempSensor_i_Operational_Api) &t_26, t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_c_operational_api(SF_LAST));
      t_TemperatureControl_TempSensor_i_Operational_Api_logError_(SF ((t_TemperatureControl_TempSensor_i_Operational_Api) &t_26), (String) string(""));
    }

    sfUpdateLoc(100);
    {
      DeclNewt_TemperatureControl_TempSensor_i_Initialization_Api(t_27);
      Option_87C81A_get_(SF (t_TemperatureControl_TempSensor_i_Initialization_Api) &t_27, t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_c_initialization_api(SF_LAST));
      DeclNewt_TemperatureControl_Temperature_i(t_28);
      t_TemperatureControl_Temperature_i_example(SF (t_TemperatureControl_Temperature_i) &t_28);
      t_TemperatureControl_TempSensor_i_Initialization_Api_put_currentTemp_(SF ((t_TemperatureControl_TempSensor_i_Initialization_Api) &t_27), (t_TemperatureControl_Temperature_i) ((t_TemperatureControl_Temperature_i) &t_28));
    }

    sfUpdateLoc(101);
    {
      DeclNewt_TemperatureControl_TempSensor_i_Operational_Api(t_29);
      Option_10368D_get_(SF (t_TemperatureControl_TempSensor_i_Operational_Api) &t_29, t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_c_operational_api(SF_LAST));
      DeclNewt_TemperatureControl_Temperature_i(t_30);
      t_TemperatureControl_Temperature_i_example(SF (t_TemperatureControl_Temperature_i) &t_30);
      t_TemperatureControl_TempSensor_i_Operational_Api_put_currentTemp_(SF ((t_TemperatureControl_TempSensor_i_Operational_Api) &t_29), (t_TemperatureControl_Temperature_i) ((t_TemperatureControl_Temperature_i) &t_30));
    }

    sfUpdateLoc(102);
    {
      DeclNewt_TemperatureControl_TempSensor_i_Initialization_Api(t_31);
      Option_87C81A_get_(SF (t_TemperatureControl_TempSensor_i_Initialization_Api) &t_31, t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_c_initialization_api(SF_LAST));
      t_TemperatureControl_TempSensor_i_Initialization_Api_put_tempChanged_(SF ((t_TemperatureControl_TempSensor_i_Initialization_Api) &t_31));
    }

    sfUpdateLoc(103);
    {
      DeclNewt_TemperatureControl_TempSensor_i_Operational_Api(t_32);
      Option_10368D_get_(SF (t_TemperatureControl_TempSensor_i_Operational_Api) &t_32, t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_c_operational_api(SF_LAST));
      t_TemperatureControl_TempSensor_i_Operational_Api_put_tempChanged_(SF ((t_TemperatureControl_TempSensor_i_Operational_Api) &t_32));
    }
  }
}

Unit t_TempSensor_i_tsp_tempSensor_App_finalise(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "TempSensor_i_tsp_tempSensor_App.scala", "t.TempSensor_i_tsp_tempSensor_App", "finalise", 0);

  sfUpdateLoc(34);
  {
    art_Bridge_EntryPoints_finalise_(SF t_TempSensor_i_tsp_tempSensor_App_entryPoints(SF_LAST));
  }
}

void t_TempSensor_i_tsp_tempSensor_App_init_entryPoints(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(13);
  Type_assign(&_t_TempSensor_i_tsp_tempSensor_App_entryPoints, t_TemperatureControl_TempSensor_i_tsp_tempSensor_Bridge_entryPoints_(t_Arch_TempControlSystem_i_Instance_tsp_tempSensor(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
};

void t_TempSensor_i_tsp_tempSensor_App_init_appPortId(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(14);
  _t_TempSensor_i_tsp_tempSensor_App_appPortId = t_IPCPorts_TempSensor_i_tsp_tempSensor_App(SF_LAST);
};

void t_TempSensor_i_tsp_tempSensor_App_init_appPortIdOpt(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(15);
  DeclNewSome_488F47(t_0);
  Some_488F47_apply(SF &t_0, t_TempSensor_i_tsp_tempSensor_App_appPortId(SF_LAST));
  Type_assign(&_t_TempSensor_i_tsp_tempSensor_App_appPortIdOpt, (&t_0), sizeof(struct Some_488F47));
};