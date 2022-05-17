#include <all.h>

B t_TempControl_i_tcp_tempControl_App_initialized_ = F;

union art_Bridge_EntryPoints _t_TempControl_i_tcp_tempControl_App_entryPoints;
Z _t_TempControl_i_tcp_tempControl_App_appPortId;
union Option_882048 _t_TempControl_i_tcp_tempControl_App_appPortIdOpt;
Z _t_TempControl_i_tcp_tempControl_App_currentTempPortId;
union Option_882048 _t_TempControl_i_tcp_tempControl_App_currentTempPortIdOpt;
Z _t_TempControl_i_tcp_tempControl_App_fanAckPortId;
union Option_882048 _t_TempControl_i_tcp_tempControl_App_fanAckPortIdOpt;
Z _t_TempControl_i_tcp_tempControl_App_setPointPortId;
union Option_882048 _t_TempControl_i_tcp_tempControl_App_setPointPortIdOpt;
Z _t_TempControl_i_tcp_tempControl_App_tempChangedPortId;
union Option_882048 _t_TempControl_i_tcp_tempControl_App_tempChangedPortIdOpt;

void t_TempControl_i_tcp_tempControl_App_init(STACK_FRAME_ONLY) {
  if (t_TempControl_i_tcp_tempControl_App_initialized_) return;
  t_TempControl_i_tcp_tempControl_App_initialized_ = T;
  DeclNewStackFrame(caller, "TempControl_i_tcp_tempControl_App.scala", "t.TempControl_i_tcp_tempControl_App", "<init>", 0);
  t_TempControl_i_tcp_tempControl_App_init_entryPoints(SF_LAST);
  t_TempControl_i_tcp_tempControl_App_init_appPortId(SF_LAST);
  t_TempControl_i_tcp_tempControl_App_init_appPortIdOpt(SF_LAST);
  t_TempControl_i_tcp_tempControl_App_init_currentTempPortId(SF_LAST);
  t_TempControl_i_tcp_tempControl_App_init_currentTempPortIdOpt(SF_LAST);
  t_TempControl_i_tcp_tempControl_App_init_fanAckPortId(SF_LAST);
  t_TempControl_i_tcp_tempControl_App_init_fanAckPortIdOpt(SF_LAST);
  t_TempControl_i_tcp_tempControl_App_init_setPointPortId(SF_LAST);
  t_TempControl_i_tcp_tempControl_App_init_setPointPortIdOpt(SF_LAST);
  t_TempControl_i_tcp_tempControl_App_init_tempChangedPortId(SF_LAST);
  t_TempControl_i_tcp_tempControl_App_init_tempChangedPortIdOpt(SF_LAST);
}

art_Bridge_EntryPoints t_TempControl_i_tcp_tempControl_App_entryPoints(STACK_FRAME_ONLY) {
  t_TempControl_i_tcp_tempControl_App_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_t_TempControl_i_tcp_tempControl_App_entryPoints;
}

Z t_TempControl_i_tcp_tempControl_App_appPortId(STACK_FRAME_ONLY) {
  t_TempControl_i_tcp_tempControl_App_init(CALLER_LAST);
  return _t_TempControl_i_tcp_tempControl_App_appPortId;
}

Option_882048 t_TempControl_i_tcp_tempControl_App_appPortIdOpt(STACK_FRAME_ONLY) {
  t_TempControl_i_tcp_tempControl_App_init(CALLER_LAST);
  return (Option_882048) &_t_TempControl_i_tcp_tempControl_App_appPortIdOpt;
}

Z t_TempControl_i_tcp_tempControl_App_currentTempPortId(STACK_FRAME_ONLY) {
  t_TempControl_i_tcp_tempControl_App_init(CALLER_LAST);
  return _t_TempControl_i_tcp_tempControl_App_currentTempPortId;
}

Option_882048 t_TempControl_i_tcp_tempControl_App_currentTempPortIdOpt(STACK_FRAME_ONLY) {
  t_TempControl_i_tcp_tempControl_App_init(CALLER_LAST);
  return (Option_882048) &_t_TempControl_i_tcp_tempControl_App_currentTempPortIdOpt;
}

Z t_TempControl_i_tcp_tempControl_App_fanAckPortId(STACK_FRAME_ONLY) {
  t_TempControl_i_tcp_tempControl_App_init(CALLER_LAST);
  return _t_TempControl_i_tcp_tempControl_App_fanAckPortId;
}

Option_882048 t_TempControl_i_tcp_tempControl_App_fanAckPortIdOpt(STACK_FRAME_ONLY) {
  t_TempControl_i_tcp_tempControl_App_init(CALLER_LAST);
  return (Option_882048) &_t_TempControl_i_tcp_tempControl_App_fanAckPortIdOpt;
}

Z t_TempControl_i_tcp_tempControl_App_setPointPortId(STACK_FRAME_ONLY) {
  t_TempControl_i_tcp_tempControl_App_init(CALLER_LAST);
  return _t_TempControl_i_tcp_tempControl_App_setPointPortId;
}

Option_882048 t_TempControl_i_tcp_tempControl_App_setPointPortIdOpt(STACK_FRAME_ONLY) {
  t_TempControl_i_tcp_tempControl_App_init(CALLER_LAST);
  return (Option_882048) &_t_TempControl_i_tcp_tempControl_App_setPointPortIdOpt;
}

Z t_TempControl_i_tcp_tempControl_App_tempChangedPortId(STACK_FRAME_ONLY) {
  t_TempControl_i_tcp_tempControl_App_init(CALLER_LAST);
  return _t_TempControl_i_tcp_tempControl_App_tempChangedPortId;
}

Option_882048 t_TempControl_i_tcp_tempControl_App_tempChangedPortIdOpt(STACK_FRAME_ONLY) {
  t_TempControl_i_tcp_tempControl_App_init(CALLER_LAST);
  return (Option_882048) &_t_TempControl_i_tcp_tempControl_App_tempChangedPortIdOpt;
}

Z t_TempControl_i_tcp_tempControl_App_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "TempControl_i_tcp_tempControl_App.scala", "t.TempControl_i_tcp_tempControl_App", "main", 0);

  sfUpdateLoc(92);
  Z seed;
  {
    B t_0;
    {
      Z t_1 = IS_948B60_size(SF args);
      t_0 = Z__eq(t_1, Z_C(1));
    }
    if (t_0) {

      sfUpdateLoc(93);
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

  sfUpdateLoc(99);
  {
    t_TempControl_i_tcp_tempControl_App_initialiseArchitecture(SF seed);
  }

  sfUpdateLoc(101);
  {
    DeclNewMBox2_1CBFC4(t_5);
    t_IPCPorts_emptyReceiveOut(SF (MBox2_1CBFC4) &t_5);
    t_PlatformNix_receive(SF (Option_882048) t_TempControl_i_tcp_tempControl_App_appPortIdOpt(SF_LAST), (MBox2_1CBFC4) ((MBox2_1CBFC4) &t_5));
  }

  sfUpdateLoc(103);
  {
    t_TempControl_i_tcp_tempControl_App_initialise(SF_LAST);
  }

  sfUpdateLoc(105);
  {
    DeclNewMBox2_1CBFC4(t_6);
    t_IPCPorts_emptyReceiveOut(SF (MBox2_1CBFC4) &t_6);
    t_PlatformNix_receive(SF (Option_882048) t_TempControl_i_tcp_tempControl_App_appPortIdOpt(SF_LAST), (MBox2_1CBFC4) ((MBox2_1CBFC4) &t_6));
  }

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(107);
  {
    String_cprint(string("TempControl_i_tcp_tempControl_App starting ..."), T);
    cprintln(T);
    cflush(T);
  }

  #endif

  sfUpdateLoc(109);
  {
    t_ArtNix_eventDispatch(SF_LAST);
  }

  sfUpdateLoc(111);
  B terminated;
  {
    terminated = F;
  }

  sfUpdateLoc(112);
  B t_112_5;
  {
    t_112_5 = (!terminated);
  }
  while(t_112_5) {

    sfUpdateLoc(113);
    DeclNewMBox2_1029D1(_out);
    MBox2_1029D1 out = (MBox2_1029D1) &_out;
    {
      DeclNewMBox2_1029D1(t_7);
      t_IPCPorts_emptyReceiveAsyncOut(SF (MBox2_1029D1) &t_7);
      Type_assign(out, ((MBox2_1029D1) &t_7), sizeof(struct MBox2_1029D1));
    }

    sfUpdateLoc(114);
    {
      t_PlatformNix_receiveAsync(SF (Option_882048) t_TempControl_i_tcp_tempControl_App_appPortIdOpt(SF_LAST), (MBox2_1029D1) out);
    }

    sfUpdateLoc(115);
    B t_8;
    {
      B t_9 = Option_8E9F45_isEmpty_(SF MBox2_1029D1_value2_(out));
      t_8 = t_9;
    }
    if (t_8) {

      sfUpdateLoc(116);
      {
        t_TempControl_i_tcp_tempControl_App_compute(SF_LAST);
      }
    } else {

      sfUpdateLoc(118);
      {
        terminated = T;
      }
    }

    sfUpdateLoc(112);
    t_112_5 = (!terminated);
  }

  sfUpdateLoc(121);
  {
    t_TempControl_i_tcp_tempControl_App_exit(SF_LAST);
  }

  sfUpdateLoc(123);
  {
    t_TempControl_i_tcp_tempControl_App_touch(SF_LAST);
  }
  return Z_C(0);
}

Unit t_TempControl_i_tcp_tempControl_App_atExit(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "TempControl_i_tcp_tempControl_App.scala", "t.TempControl_i_tcp_tempControl_App", "atExit", 0);

  sfUpdateLoc(168);
  {
    t_TempControl_i_tcp_tempControl_App_exit(SF_LAST);
  }
}

Unit t_TempControl_i_tcp_tempControl_App_initialiseArchitecture(STACK_FRAME Z seed) {
  DeclNewStackFrame(caller, "TempControl_i_tcp_tempControl_App.scala", "t.TempControl_i_tcp_tempControl_App", "initialiseArchitecture", 0);

  sfUpdateLoc(26);
  {
    t_PlatformNix_initialise(SF seed, (Option_882048) t_TempControl_i_tcp_tempControl_App_appPortIdOpt(SF_LAST));
  }

  sfUpdateLoc(27);
  {
    t_PlatformNix_initialise(SF seed, (Option_882048) t_TempControl_i_tcp_tempControl_App_currentTempPortIdOpt(SF_LAST));
  }

  sfUpdateLoc(28);
  {
    t_PlatformNix_initialise(SF seed, (Option_882048) t_TempControl_i_tcp_tempControl_App_fanAckPortIdOpt(SF_LAST));
  }

  sfUpdateLoc(29);
  {
    t_PlatformNix_initialise(SF seed, (Option_882048) t_TempControl_i_tcp_tempControl_App_setPointPortIdOpt(SF_LAST));
  }

  sfUpdateLoc(30);
  {
    t_PlatformNix_initialise(SF seed, (Option_882048) t_TempControl_i_tcp_tempControl_App_tempChangedPortIdOpt(SF_LAST));
  }

  sfUpdateLoc(32);
  {
    DeclNewart_scheduling_nop_NopScheduler(t_0);
    art_scheduling_nop_NopScheduler_apply(SF &t_0);
    art_Art_run(SF (art_ArchitectureDescription) t_Arch_ad(SF_LAST), (art_scheduling_Scheduler) (&t_0));
  }
}

Unit t_TempControl_i_tcp_tempControl_App_initialise(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "TempControl_i_tcp_tempControl_App.scala", "t.TempControl_i_tcp_tempControl_App", "initialise", 0);

  sfUpdateLoc(36);
  {
    art_Bridge_EntryPoints_initialise_(SF t_TempControl_i_tcp_tempControl_App_entryPoints(SF_LAST));
  }
}

inline B t_TempControl_i_tcp_tempControl_App_compute_extract_46_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_1, t_TemperatureControl_Temperature_i_Payload *_v_46_19) {
  if (!Some_D29615__is(SF t_1)) return F;
  if (!t_TemperatureControl_Temperature_i_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_1)))) return F;
  *_v_46_19 = (t_TemperatureControl_Temperature_i_Payload) Some_D29615_value_(Some_D29615__as(SF t_1));
  return T;
}

inline B t_TempControl_i_tcp_tempControl_App_compute_extract_47_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_1, art_DataContent *_v_47_19) {
  if (!Some_D29615__is(SF t_1)) return F;
  *_v_47_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_1));
  return T;
}

inline B t_TempControl_i_tcp_tempControl_App_compute_extract_48_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_1) {
  if (!None_964667__is(SF t_1)) return F;
  return T;
}

inline B t_TempControl_i_tcp_tempControl_App_compute_extract_55_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_6, t_TemperatureControl_FanAck_Payload *_v_55_19) {
  if (!Some_D29615__is(SF t_6)) return F;
  if (!t_TemperatureControl_FanAck_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_6)))) return F;
  *_v_55_19 = (t_TemperatureControl_FanAck_Payload) Some_D29615_value_(Some_D29615__as(SF t_6));
  return T;
}

inline B t_TempControl_i_tcp_tempControl_App_compute_extract_56_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_6, art_DataContent *_v_56_19) {
  if (!Some_D29615__is(SF t_6)) return F;
  *_v_56_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_6));
  return T;
}

inline B t_TempControl_i_tcp_tempControl_App_compute_extract_57_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_6) {
  if (!None_964667__is(SF t_6)) return F;
  return T;
}

inline B t_TempControl_i_tcp_tempControl_App_compute_extract_64_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_11, t_TemperatureControl_SetPoint_i_Payload *_v_64_19) {
  if (!Some_D29615__is(SF t_11)) return F;
  if (!t_TemperatureControl_SetPoint_i_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_11)))) return F;
  *_v_64_19 = (t_TemperatureControl_SetPoint_i_Payload) Some_D29615_value_(Some_D29615__as(SF t_11));
  return T;
}

inline B t_TempControl_i_tcp_tempControl_App_compute_extract_65_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_11, art_DataContent *_v_65_19) {
  if (!Some_D29615__is(SF t_11)) return F;
  *_v_65_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_11));
  return T;
}

inline B t_TempControl_i_tcp_tempControl_App_compute_extract_66_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_11) {
  if (!None_964667__is(SF t_11)) return F;
  return T;
}

inline B t_TempControl_i_tcp_tempControl_App_compute_extract_73_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_16, art_Empty *_v_73_19) {
  if (!Some_D29615__is(SF t_16)) return F;
  if (!art_Empty__is(SF Some_D29615_value_(Some_D29615__as(SF t_16)))) return F;
  *_v_73_19 = (art_Empty) Some_D29615_value_(Some_D29615__as(SF t_16));
  return T;
}

inline B t_TempControl_i_tcp_tempControl_App_compute_extract_74_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_16, art_DataContent *_v_74_19) {
  if (!Some_D29615__is(SF t_16)) return F;
  *_v_74_19 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_16));
  return T;
}

inline B t_TempControl_i_tcp_tempControl_App_compute_extract_75_14_8E9F45(STACK_FRAME_SF Option_8E9F45 t_16) {
  if (!None_964667__is(SF t_16)) return F;
  return T;
}

Unit t_TempControl_i_tcp_tempControl_App_compute(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "TempControl_i_tcp_tempControl_App.scala", "t.TempControl_i_tcp_tempControl_App", "compute", 0);

  sfUpdateLoc(40);
  B dispatch;
  {
    dispatch = F;
  }
  {

    sfUpdateLoc(43);
    DeclNewMBox2_1029D1(_out);
    MBox2_1029D1 out = (MBox2_1029D1) &_out;
    {
      DeclNewMBox2_1029D1(t_0);
      t_IPCPorts_emptyReceiveAsyncOut(SF (MBox2_1029D1) &t_0);
      Type_assign(out, ((MBox2_1029D1) &t_0), sizeof(struct MBox2_1029D1));
    }

    sfUpdateLoc(44);
    {
      t_PlatformNix_receiveAsync(SF (Option_882048) t_TempControl_i_tcp_tempControl_App_currentTempPortIdOpt(SF_LAST), (MBox2_1029D1) out);
    }

    sfUpdateLoc(45);
    Option_8E9F45 t_1 = MBox2_1029D1_value2_(out);
    B match_45_11 = F;
    if (!match_45_11) {
      t_TemperatureControl_Temperature_i_Payload v_46_19;
      match_45_11 = t_TempControl_i_tcp_tempControl_App_compute_extract_46_14_8E9F45(SF t_1, &v_46_19);
      if (match_45_11) {

        sfUpdateLoc(46);
        {
          t_ArtNix_updateData(SF t_TempControl_i_tcp_tempControl_App_currentTempPortId(SF_LAST), (art_DataContent) v_46_19);
        }

        sfUpdateLoc(46);
        {
          dispatch = F;
        }
      }
    }
    if (!match_45_11) {
      art_DataContent v_47_19;
      match_45_11 = t_TempControl_i_tcp_tempControl_App_compute_extract_47_14_8E9F45(SF t_1, &v_47_19);
      if (match_45_11) {

        sfUpdateLoc(47);
        {
          DeclNewString(t_2);
          String t_3 = (String) &t_2;
          DeclNewString(t_4);
          String_string_(SF (String) &t_4, string("Unexpected payload on port currentTemp.  Expecting something of type TemperatureControl.Temperature_i_Payload but received "));
          art_DataContent_string_(SF (String) &t_4, v_47_19);
          String_string_(SF (String) &t_4, string(""));
          String_string_(SF t_3, ((String) &t_4));
          sfAbort(t_3->value);
          abort();
        }
      }
    }
    if (!match_45_11) {
      match_45_11 = t_TempControl_i_tcp_tempControl_App_compute_extract_48_14_8E9F45(SF t_1);
      if (match_45_11) {
      }
    }
    sfAssert(match_45_11, "Error when pattern matching.");
  }
  {

    sfUpdateLoc(52);
    DeclNewMBox2_1029D1(_out);
    MBox2_1029D1 out = (MBox2_1029D1) &_out;
    {
      DeclNewMBox2_1029D1(t_5);
      t_IPCPorts_emptyReceiveAsyncOut(SF (MBox2_1029D1) &t_5);
      Type_assign(out, ((MBox2_1029D1) &t_5), sizeof(struct MBox2_1029D1));
    }

    sfUpdateLoc(53);
    {
      t_PlatformNix_receiveAsync(SF (Option_882048) t_TempControl_i_tcp_tempControl_App_fanAckPortIdOpt(SF_LAST), (MBox2_1029D1) out);
    }

    sfUpdateLoc(54);
    Option_8E9F45 t_6 = MBox2_1029D1_value2_(out);
    B match_54_11 = F;
    if (!match_54_11) {
      t_TemperatureControl_FanAck_Payload v_55_19;
      match_54_11 = t_TempControl_i_tcp_tempControl_App_compute_extract_55_14_8E9F45(SF t_6, &v_55_19);
      if (match_54_11) {

        sfUpdateLoc(55);
        {
          t_ArtNix_updateData(SF t_TempControl_i_tcp_tempControl_App_fanAckPortId(SF_LAST), (art_DataContent) v_55_19);
        }

        sfUpdateLoc(55);
        {
          dispatch = T;
        }
      }
    }
    if (!match_54_11) {
      art_DataContent v_56_19;
      match_54_11 = t_TempControl_i_tcp_tempControl_App_compute_extract_56_14_8E9F45(SF t_6, &v_56_19);
      if (match_54_11) {

        sfUpdateLoc(56);
        {
          DeclNewString(t_7);
          String t_8 = (String) &t_7;
          DeclNewString(t_9);
          String_string_(SF (String) &t_9, string("Unexpected payload on port fanAck.  Expecting something of type TemperatureControl.FanAck_Payload but received "));
          art_DataContent_string_(SF (String) &t_9, v_56_19);
          String_string_(SF (String) &t_9, string(""));
          String_string_(SF t_8, ((String) &t_9));
          sfAbort(t_8->value);
          abort();
        }
      }
    }
    if (!match_54_11) {
      match_54_11 = t_TempControl_i_tcp_tempControl_App_compute_extract_57_14_8E9F45(SF t_6);
      if (match_54_11) {
      }
    }
    sfAssert(match_54_11, "Error when pattern matching.");
  }
  {

    sfUpdateLoc(61);
    DeclNewMBox2_1029D1(_out);
    MBox2_1029D1 out = (MBox2_1029D1) &_out;
    {
      DeclNewMBox2_1029D1(t_10);
      t_IPCPorts_emptyReceiveAsyncOut(SF (MBox2_1029D1) &t_10);
      Type_assign(out, ((MBox2_1029D1) &t_10), sizeof(struct MBox2_1029D1));
    }

    sfUpdateLoc(62);
    {
      t_PlatformNix_receiveAsync(SF (Option_882048) t_TempControl_i_tcp_tempControl_App_setPointPortIdOpt(SF_LAST), (MBox2_1029D1) out);
    }

    sfUpdateLoc(63);
    Option_8E9F45 t_11 = MBox2_1029D1_value2_(out);
    B match_63_11 = F;
    if (!match_63_11) {
      t_TemperatureControl_SetPoint_i_Payload v_64_19;
      match_63_11 = t_TempControl_i_tcp_tempControl_App_compute_extract_64_14_8E9F45(SF t_11, &v_64_19);
      if (match_63_11) {

        sfUpdateLoc(64);
        {
          t_ArtNix_updateData(SF t_TempControl_i_tcp_tempControl_App_setPointPortId(SF_LAST), (art_DataContent) v_64_19);
        }

        sfUpdateLoc(64);
        {
          dispatch = T;
        }
      }
    }
    if (!match_63_11) {
      art_DataContent v_65_19;
      match_63_11 = t_TempControl_i_tcp_tempControl_App_compute_extract_65_14_8E9F45(SF t_11, &v_65_19);
      if (match_63_11) {

        sfUpdateLoc(65);
        {
          DeclNewString(t_12);
          String t_13 = (String) &t_12;
          DeclNewString(t_14);
          String_string_(SF (String) &t_14, string("Unexpected payload on port setPoint.  Expecting something of type TemperatureControl.SetPoint_i_Payload but received "));
          art_DataContent_string_(SF (String) &t_14, v_65_19);
          String_string_(SF (String) &t_14, string(""));
          String_string_(SF t_13, ((String) &t_14));
          sfAbort(t_13->value);
          abort();
        }
      }
    }
    if (!match_63_11) {
      match_63_11 = t_TempControl_i_tcp_tempControl_App_compute_extract_66_14_8E9F45(SF t_11);
      if (match_63_11) {
      }
    }
    sfAssert(match_63_11, "Error when pattern matching.");
  }
  {

    sfUpdateLoc(70);
    DeclNewMBox2_1029D1(_out);
    MBox2_1029D1 out = (MBox2_1029D1) &_out;
    {
      DeclNewMBox2_1029D1(t_15);
      t_IPCPorts_emptyReceiveAsyncOut(SF (MBox2_1029D1) &t_15);
      Type_assign(out, ((MBox2_1029D1) &t_15), sizeof(struct MBox2_1029D1));
    }

    sfUpdateLoc(71);
    {
      t_PlatformNix_receiveAsync(SF (Option_882048) t_TempControl_i_tcp_tempControl_App_tempChangedPortIdOpt(SF_LAST), (MBox2_1029D1) out);
    }

    sfUpdateLoc(72);
    Option_8E9F45 t_16 = MBox2_1029D1_value2_(out);
    B match_72_11 = F;
    if (!match_72_11) {
      art_Empty v_73_19;
      match_72_11 = t_TempControl_i_tcp_tempControl_App_compute_extract_73_14_8E9F45(SF t_16, &v_73_19);
      if (match_72_11) {

        sfUpdateLoc(73);
        {
          t_ArtNix_updateData(SF t_TempControl_i_tcp_tempControl_App_tempChangedPortId(SF_LAST), (art_DataContent) v_73_19);
        }

        sfUpdateLoc(73);
        {
          dispatch = T;
        }
      }
    }
    if (!match_72_11) {
      art_DataContent v_74_19;
      match_72_11 = t_TempControl_i_tcp_tempControl_App_compute_extract_74_14_8E9F45(SF t_16, &v_74_19);
      if (match_72_11) {

        sfUpdateLoc(74);
        {
          DeclNewString(t_17);
          String t_18 = (String) &t_17;
          DeclNewString(t_19);
          String_string_(SF (String) &t_19, string("Unexpected payload on port tempChanged.  Expecting something of type art.Empty but received "));
          art_DataContent_string_(SF (String) &t_19, v_74_19);
          String_string_(SF (String) &t_19, string(""));
          String_string_(SF t_18, ((String) &t_19));
          sfAbort(t_18->value);
          abort();
        }
      }
    }
    if (!match_72_11) {
      match_72_11 = t_TempControl_i_tcp_tempControl_App_compute_extract_75_14_8E9F45(SF t_16);
      if (match_72_11) {
      }
    }
    sfAssert(match_72_11, "Error when pattern matching.");
  }

  sfUpdateLoc(78);
  B t_20;
  {
    t_20 = dispatch;
  }
  if (t_20) {

    sfUpdateLoc(79);
    {
      art_Bridge_EntryPoints_compute_(SF t_TempControl_i_tcp_tempControl_App_entryPoints(SF_LAST));
    }

    sfUpdateLoc(80);
    {
      t_Process_sleep(SF Z_C(1));
    }
  } else {

    sfUpdateLoc(82);
    {
      t_Process_sleep(SF Z_C(10));
    }
  }
}

Unit t_TempControl_i_tcp_tempControl_App_exit(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "TempControl_i_tcp_tempControl_App.scala", "t.TempControl_i_tcp_tempControl_App", "exit", 0);

  sfUpdateLoc(163);
  {
    t_TempControl_i_tcp_tempControl_App_finalise(SF_LAST);
  }

  sfUpdateLoc(164);
  {
    t_PlatformNix_finalise(SF_LAST);
  }
}

Unit t_TempControl_i_tcp_tempControl_App_touch_printDataContent(STACK_FRAME art_DataContent a) {
  DeclNewStackFrame(caller, "TempControl_i_tcp_tempControl_App.scala", "t.TempControl_i_tcp_tempControl_App.touch", "printDataContent", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(137);
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

Unit t_TempControl_i_tcp_tempControl_App_touch(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "TempControl_i_tcp_tempControl_App.scala", "t.TempControl_i_tcp_tempControl_App", "touch", 0);

  sfUpdateLoc(129);
  B t_0;
  {
    t_0 = F;
  }
  if (t_0) {

    sfUpdateLoc(130);
    {
      t_TranspilerToucher_touch(SF_LAST);
    }

    sfUpdateLoc(133);
    DeclNewMBox2_1CBFC4(_mbox2Boolean_Payload);
    MBox2_1CBFC4 mbox2Boolean_Payload = (MBox2_1CBFC4) &_mbox2Boolean_Payload;
    {
      DeclNewt_Base_Types_Boolean_Payload(t_2);
      t_Base_Types_Boolean_Payload_apply(SF &t_2, T);
      DeclNewMBox2_1CBFC4(t_1);
      MBox2_1CBFC4_apply(SF &t_1, Z_C(0), (art_DataContent) (&t_2));
      Type_assign(mbox2Boolean_Payload, (&t_1), sizeof(struct MBox2_1CBFC4));
    }

    sfUpdateLoc(134);
    DeclNewMBox2_1029D1(_mbox2OptionDataContent);
    MBox2_1029D1 mbox2OptionDataContent = (MBox2_1029D1) &_mbox2OptionDataContent;
    {
      DeclNewNone_964667(t_4);
      None_964667_apply(SF &t_4);
      DeclNewMBox2_1029D1(t_3);
      MBox2_1029D1_apply(SF &t_3, Z_C(0), (Option_8E9F45) (&t_4));
      Type_assign(mbox2OptionDataContent, (&t_3), sizeof(struct MBox2_1029D1));
    }

    sfUpdateLoc(139);
    {
      F32 t_6 = t_Base_Types_Float_32_example(SF_LAST);
      DeclNewt_Base_Types_Float_32_Payload(t_5);
      t_Base_Types_Float_32_Payload_apply(SF &t_5, t_6);
      t_TempControl_i_tcp_tempControl_App_touch_printDataContent(SF (art_DataContent) (&t_5));
    }

    sfUpdateLoc(140);
    {
      DeclNewOption_40D664(t_8);
      t_TemperatureControl_TempUnit_Type_byOrdinal(SF (Option_40D664) &t_8, Z_C(0));
      t_TemperatureControl_TempUnit_Type t_9 = Option_40D664_get_(SF ((Option_40D664) &t_8));
      DeclNewt_TemperatureControl_TempUnit_Payload(t_7);
      t_TemperatureControl_TempUnit_Payload_apply(SF &t_7, t_9);
      t_TempControl_i_tcp_tempControl_App_touch_printDataContent(SF (art_DataContent) (&t_7));
    }

    sfUpdateLoc(141);
    {
      DeclNewt_TemperatureControl_Temperature_i(t_11);
      t_TemperatureControl_Temperature_i_example(SF (t_TemperatureControl_Temperature_i) &t_11);
      DeclNewt_TemperatureControl_Temperature_i_Payload(t_10);
      t_TemperatureControl_Temperature_i_Payload_apply(SF &t_10, (t_TemperatureControl_Temperature_i) ((t_TemperatureControl_Temperature_i) &t_11));
      t_TempControl_i_tcp_tempControl_App_touch_printDataContent(SF (art_DataContent) (&t_10));
    }

    sfUpdateLoc(142);
    {
      DeclNewt_TemperatureControl_SetPoint_i(t_13);
      t_TemperatureControl_SetPoint_i_example(SF (t_TemperatureControl_SetPoint_i) &t_13);
      DeclNewt_TemperatureControl_SetPoint_i_Payload(t_12);
      t_TemperatureControl_SetPoint_i_Payload_apply(SF &t_12, (t_TemperatureControl_SetPoint_i) ((t_TemperatureControl_SetPoint_i) &t_13));
      t_TempControl_i_tcp_tempControl_App_touch_printDataContent(SF (art_DataContent) (&t_12));
    }

    sfUpdateLoc(143);
    {
      DeclNewOption_C5A124(t_15);
      t_TemperatureControl_FanAck_Type_byOrdinal(SF (Option_C5A124) &t_15, Z_C(0));
      t_TemperatureControl_FanAck_Type t_16 = Option_C5A124_get_(SF ((Option_C5A124) &t_15));
      DeclNewt_TemperatureControl_FanAck_Payload(t_14);
      t_TemperatureControl_FanAck_Payload_apply(SF &t_14, t_16);
      t_TempControl_i_tcp_tempControl_App_touch_printDataContent(SF (art_DataContent) (&t_14));
    }

    sfUpdateLoc(144);
    {
      DeclNewOption_2B0611(t_18);
      t_TemperatureControl_FanCmd_Type_byOrdinal(SF (Option_2B0611) &t_18, Z_C(0));
      t_TemperatureControl_FanCmd_Type t_19 = Option_2B0611_get_(SF ((Option_2B0611) &t_18));
      DeclNewt_TemperatureControl_FanCmd_Payload(t_17);
      t_TemperatureControl_FanCmd_Payload_apply(SF &t_17, t_19);
      t_TempControl_i_tcp_tempControl_App_touch_printDataContent(SF (art_DataContent) (&t_17));
    }

    sfUpdateLoc(145);
    {
      DeclNewart_Empty(t_20);
      art_Empty_apply(SF &t_20);
      t_TempControl_i_tcp_tempControl_App_touch_printDataContent(SF (art_DataContent) (&t_20));
    }

    sfUpdateLoc(147);
    {
      DeclNewt_TemperatureControl_TempControl_i_Initialization_Api(t_21);
      Option_BCC9E8_get_(SF (t_TemperatureControl_TempControl_i_Initialization_Api) &t_21, t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_c_initialization_api(SF_LAST));
      t_TemperatureControl_TempControl_i_Initialization_Api_logInfo_(SF ((t_TemperatureControl_TempControl_i_Initialization_Api) &t_21), (String) string(""));
    }

    sfUpdateLoc(148);
    {
      DeclNewt_TemperatureControl_TempControl_i_Initialization_Api(t_22);
      Option_BCC9E8_get_(SF (t_TemperatureControl_TempControl_i_Initialization_Api) &t_22, t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_c_initialization_api(SF_LAST));
      t_TemperatureControl_TempControl_i_Initialization_Api_logDebug_(SF ((t_TemperatureControl_TempControl_i_Initialization_Api) &t_22), (String) string(""));
    }

    sfUpdateLoc(149);
    {
      DeclNewt_TemperatureControl_TempControl_i_Initialization_Api(t_23);
      Option_BCC9E8_get_(SF (t_TemperatureControl_TempControl_i_Initialization_Api) &t_23, t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_c_initialization_api(SF_LAST));
      t_TemperatureControl_TempControl_i_Initialization_Api_logError_(SF ((t_TemperatureControl_TempControl_i_Initialization_Api) &t_23), (String) string(""));
    }

    sfUpdateLoc(150);
    {
      DeclNewt_TemperatureControl_TempControl_i_Operational_Api(t_24);
      Option_3B7208_get_(SF (t_TemperatureControl_TempControl_i_Operational_Api) &t_24, t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_c_operational_api(SF_LAST));
      t_TemperatureControl_TempControl_i_Operational_Api_logInfo_(SF ((t_TemperatureControl_TempControl_i_Operational_Api) &t_24), (String) string(""));
    }

    sfUpdateLoc(151);
    {
      DeclNewt_TemperatureControl_TempControl_i_Operational_Api(t_25);
      Option_3B7208_get_(SF (t_TemperatureControl_TempControl_i_Operational_Api) &t_25, t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_c_operational_api(SF_LAST));
      t_TemperatureControl_TempControl_i_Operational_Api_logDebug_(SF ((t_TemperatureControl_TempControl_i_Operational_Api) &t_25), (String) string(""));
    }

    sfUpdateLoc(152);
    {
      DeclNewt_TemperatureControl_TempControl_i_Operational_Api(t_26);
      Option_3B7208_get_(SF (t_TemperatureControl_TempControl_i_Operational_Api) &t_26, t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_c_operational_api(SF_LAST));
      t_TemperatureControl_TempControl_i_Operational_Api_logError_(SF ((t_TemperatureControl_TempControl_i_Operational_Api) &t_26), (String) string(""));
    }

    sfUpdateLoc(153);
    Option_78CB14 apiUsage_currentTemp;
    DeclNewt_TemperatureControl_TempControl_i_Operational_Api(t_27);
    Option_3B7208_get_(SF (t_TemperatureControl_TempControl_i_Operational_Api) &t_27, t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_c_operational_api(SF_LAST));
    DeclNewOption_78CB14(t_28);
    t_TemperatureControl_TempControl_i_Operational_Api_get_currentTemp_(SF (Option_78CB14) &t_28, ((t_TemperatureControl_TempControl_i_Operational_Api) &t_27));
    apiUsage_currentTemp = (Option_78CB14) ((Option_78CB14) &t_28);

    sfUpdateLoc(154);
    Option_C5A124 apiUsage_fanAck;
    DeclNewt_TemperatureControl_TempControl_i_Operational_Api(t_29);
    Option_3B7208_get_(SF (t_TemperatureControl_TempControl_i_Operational_Api) &t_29, t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_c_operational_api(SF_LAST));
    DeclNewOption_C5A124(t_30);
    t_TemperatureControl_TempControl_i_Operational_Api_get_fanAck_(SF (Option_C5A124) &t_30, ((t_TemperatureControl_TempControl_i_Operational_Api) &t_29));
    apiUsage_fanAck = (Option_C5A124) ((Option_C5A124) &t_30);

    sfUpdateLoc(155);
    Option_EBB396 apiUsage_setPoint;
    DeclNewt_TemperatureControl_TempControl_i_Operational_Api(t_31);
    Option_3B7208_get_(SF (t_TemperatureControl_TempControl_i_Operational_Api) &t_31, t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_c_operational_api(SF_LAST));
    DeclNewOption_EBB396(t_32);
    t_TemperatureControl_TempControl_i_Operational_Api_get_setPoint_(SF (Option_EBB396) &t_32, ((t_TemperatureControl_TempControl_i_Operational_Api) &t_31));
    apiUsage_setPoint = (Option_EBB396) ((Option_EBB396) &t_32);

    sfUpdateLoc(156);
    {
      DeclNewt_TemperatureControl_TempControl_i_Initialization_Api(t_33);
      Option_BCC9E8_get_(SF (t_TemperatureControl_TempControl_i_Initialization_Api) &t_33, t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_c_initialization_api(SF_LAST));
      DeclNewOption_2B0611(t_34);
      t_TemperatureControl_FanCmd_Type_byOrdinal(SF (Option_2B0611) &t_34, Z_C(0));
      t_TemperatureControl_FanCmd_Type t_35 = Option_2B0611_get_(SF ((Option_2B0611) &t_34));
      t_TemperatureControl_TempControl_i_Initialization_Api_put_fanCmd_(SF ((t_TemperatureControl_TempControl_i_Initialization_Api) &t_33), t_35);
    }

    sfUpdateLoc(157);
    {
      DeclNewt_TemperatureControl_TempControl_i_Operational_Api(t_36);
      Option_3B7208_get_(SF (t_TemperatureControl_TempControl_i_Operational_Api) &t_36, t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_c_operational_api(SF_LAST));
      DeclNewOption_2B0611(t_37);
      t_TemperatureControl_FanCmd_Type_byOrdinal(SF (Option_2B0611) &t_37, Z_C(0));
      t_TemperatureControl_FanCmd_Type t_38 = Option_2B0611_get_(SF ((Option_2B0611) &t_37));
      t_TemperatureControl_TempControl_i_Operational_Api_put_fanCmd_(SF ((t_TemperatureControl_TempControl_i_Operational_Api) &t_36), t_38);
    }

    sfUpdateLoc(158);
    Option_C622DB apiUsage_tempChanged;
    DeclNewt_TemperatureControl_TempControl_i_Operational_Api(t_39);
    Option_3B7208_get_(SF (t_TemperatureControl_TempControl_i_Operational_Api) &t_39, t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_c_operational_api(SF_LAST));
    DeclNewOption_C622DB(t_40);
    t_TemperatureControl_TempControl_i_Operational_Api_get_tempChanged_(SF (Option_C622DB) &t_40, ((t_TemperatureControl_TempControl_i_Operational_Api) &t_39));
    apiUsage_tempChanged = (Option_C622DB) ((Option_C622DB) &t_40);
  }
}

Unit t_TempControl_i_tcp_tempControl_App_finalise(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "TempControl_i_tcp_tempControl_App.scala", "t.TempControl_i_tcp_tempControl_App", "finalise", 0);

  sfUpdateLoc(87);
  {
    art_Bridge_EntryPoints_finalise_(SF t_TempControl_i_tcp_tempControl_App_entryPoints(SF_LAST));
  }
}

void t_TempControl_i_tcp_tempControl_App_init_entryPoints(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(13);
  Type_assign(&_t_TempControl_i_tcp_tempControl_App_entryPoints, t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_entryPoints_(t_Arch_TempControlSystem_i_Instance_tcp_tempControl(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
};

void t_TempControl_i_tcp_tempControl_App_init_appPortId(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(14);
  _t_TempControl_i_tcp_tempControl_App_appPortId = t_IPCPorts_TempControl_i_tcp_tempControl_App(SF_LAST);
};

void t_TempControl_i_tcp_tempControl_App_init_appPortIdOpt(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(15);
  DeclNewSome_488F47(t_0);
  Some_488F47_apply(SF &t_0, t_TempControl_i_tcp_tempControl_App_appPortId(SF_LAST));
  Type_assign(&_t_TempControl_i_tcp_tempControl_App_appPortIdOpt, (&t_0), sizeof(struct Some_488F47));
};

void t_TempControl_i_tcp_tempControl_App_init_currentTempPortId(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(16);
  _t_TempControl_i_tcp_tempControl_App_currentTempPortId = art_Port_7B28AF_id_(t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_currentTemp_(t_Arch_TempControlSystem_i_Instance_tcp_tempControl(SF_LAST)));
};

void t_TempControl_i_tcp_tempControl_App_init_currentTempPortIdOpt(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(17);
  DeclNewSome_488F47(t_1);
  Some_488F47_apply(SF &t_1, t_TempControl_i_tcp_tempControl_App_currentTempPortId(SF_LAST));
  Type_assign(&_t_TempControl_i_tcp_tempControl_App_currentTempPortIdOpt, (&t_1), sizeof(struct Some_488F47));
};

void t_TempControl_i_tcp_tempControl_App_init_fanAckPortId(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(18);
  _t_TempControl_i_tcp_tempControl_App_fanAckPortId = art_Port_0A16CC_id_(t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_fanAck_(t_Arch_TempControlSystem_i_Instance_tcp_tempControl(SF_LAST)));
};

void t_TempControl_i_tcp_tempControl_App_init_fanAckPortIdOpt(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(19);
  DeclNewSome_488F47(t_2);
  Some_488F47_apply(SF &t_2, t_TempControl_i_tcp_tempControl_App_fanAckPortId(SF_LAST));
  Type_assign(&_t_TempControl_i_tcp_tempControl_App_fanAckPortIdOpt, (&t_2), sizeof(struct Some_488F47));
};

void t_TempControl_i_tcp_tempControl_App_init_setPointPortId(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(20);
  _t_TempControl_i_tcp_tempControl_App_setPointPortId = art_Port_216126_id_(t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_setPoint_(t_Arch_TempControlSystem_i_Instance_tcp_tempControl(SF_LAST)));
};

void t_TempControl_i_tcp_tempControl_App_init_setPointPortIdOpt(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(21);
  DeclNewSome_488F47(t_3);
  Some_488F47_apply(SF &t_3, t_TempControl_i_tcp_tempControl_App_setPointPortId(SF_LAST));
  Type_assign(&_t_TempControl_i_tcp_tempControl_App_setPointPortIdOpt, (&t_3), sizeof(struct Some_488F47));
};

void t_TempControl_i_tcp_tempControl_App_init_tempChangedPortId(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(22);
  _t_TempControl_i_tcp_tempControl_App_tempChangedPortId = art_Port_9CBF18_id_(t_TemperatureControl_TempControl_i_tcp_tempControl_Bridge_tempChanged_(t_Arch_TempControlSystem_i_Instance_tcp_tempControl(SF_LAST)));
};

void t_TempControl_i_tcp_tempControl_App_init_tempChangedPortIdOpt(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(23);
  DeclNewSome_488F47(t_4);
  Some_488F47_apply(SF &t_4, t_TempControl_i_tcp_tempControl_App_tempChangedPortId(SF_LAST));
  Type_assign(&_t_TempControl_i_tcp_tempControl_App_tempChangedPortIdOpt, (&t_4), sizeof(struct Some_488F47));
};