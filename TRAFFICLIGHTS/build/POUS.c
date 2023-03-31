void LOGGER_init__(LOGGER *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MSG,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->LEVEL,LOGLEVEL__INFO,retain)
  __INIT_VAR(data__->TRIG0,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void LOGGER_body__(LOGGER *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  if ((__GET_VAR(data__->TRIG,) && !(__GET_VAR(data__->TRIG0,)))) {
    #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
    #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)

   LogMessage(GetFbVar(LEVEL),(char*)GetFbVar(MSG, .body),GetFbVar(MSG, .len));
  
    #undef GetFbVar
    #undef SetFbVar
;
  };
  __SET_VAR(data__->,TRIG0,,__GET_VAR(data__->TRIG,));

  goto __end;

__end:
  return;
} // LOGGER_body__() 





void PYTHON_EVAL_init__(PYTHON_EVAL *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CODE,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->ACK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESULT,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->STATE,0,retain)
  __INIT_VAR(data__->BUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->PREBUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->TRIGM1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TRIGGED,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PYTHON_EVAL_body__(PYTHON_EVAL *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern void __PythonEvalFB(int, PYTHON_EVAL*);__PythonEvalFB(0, data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // PYTHON_EVAL_body__() 





void PYTHON_POLL_init__(PYTHON_POLL *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CODE,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->ACK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESULT,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->STATE,0,retain)
  __INIT_VAR(data__->BUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->PREBUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->TRIGM1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TRIGGED,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PYTHON_POLL_body__(PYTHON_POLL *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern void __PythonEvalFB(int, PYTHON_EVAL*);__PythonEvalFB(1,(PYTHON_EVAL*)(void*)data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // PYTHON_POLL_body__() 





void PYTHON_GEAR_init__(PYTHON_GEAR *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->N,0,retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CODE,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->ACK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESULT,__STRING_LITERAL(0,""),retain)
  PYTHON_EVAL_init__(&data__->PY_EVAL,retain);
  __INIT_VAR(data__->COUNTER,0,retain)
  __INIT_VAR(data__->_TMP_ADD10_OUT,0,retain)
  __INIT_VAR(data__->_TMP_EQ13_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_SEL15_OUT,0,retain)
  __INIT_VAR(data__->_TMP_AND7_OUT,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PYTHON_GEAR_body__(PYTHON_GEAR *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,_TMP_ADD10_OUT,,ADD__UINT__UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (UINT)__GET_VAR(data__->COUNTER,),
    (UINT)1));
  __SET_VAR(data__->,_TMP_EQ13_OUT,,EQ__BOOL__UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (UINT)__GET_VAR(data__->N,),
    (UINT)__GET_VAR(data__->_TMP_ADD10_OUT,)));
  __SET_VAR(data__->,_TMP_SEL15_OUT,,SEL__UINT__BOOL__UINT__UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (BOOL)__GET_VAR(data__->_TMP_EQ13_OUT,),
    (UINT)__GET_VAR(data__->_TMP_ADD10_OUT,),
    (UINT)0));
  __SET_VAR(data__->,COUNTER,,__GET_VAR(data__->_TMP_SEL15_OUT,));
  __SET_VAR(data__->,_TMP_AND7_OUT,,AND__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->_TMP_EQ13_OUT,),
    (BOOL)__GET_VAR(data__->TRIG,)));
  __SET_VAR(data__->PY_EVAL.,TRIG,,__GET_VAR(data__->_TMP_AND7_OUT,));
  __SET_VAR(data__->PY_EVAL.,CODE,,__GET_VAR(data__->CODE,));
  PYTHON_EVAL_body__(&data__->PY_EVAL);
  __SET_VAR(data__->,ACK,,__GET_VAR(data__->PY_EVAL.ACK,));
  __SET_VAR(data__->,RESULT,,__GET_VAR(data__->PY_EVAL.RESULT,));

  goto __end;

__end:
  return;
} // PYTHON_GEAR_body__() 





void TRAFFICLIGHTS_init__(TRAFFICLIGHTS *data__, BOOL retain) {
  __INIT_VAR(data__->ACTG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ACT,1,retain)
  __INIT_VAR(data__->ACTY,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ACTR,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ACSG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ACSY,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ACSR,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BDTG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BDTY,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PB0,1,retain)
  __INIT_VAR(data__->BDTR,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BDSG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BDSY,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BDSR,__BOOL_LITERAL(FALSE),retain)
  TP_init__(&data__->TP0,retain);
  F_TRIG_init__(&data__->F_TRIG1,retain);
  TP_init__(&data__->TP2,retain);
  F_TRIG_init__(&data__->F_TRIG2,retain);
  R_TRIG_init__(&data__->R_TRIG1,retain);
  TP_init__(&data__->TP3,retain);
  F_TRIG_init__(&data__->F_TRIG4,retain);
  TP_init__(&data__->TP4,retain);
  F_TRIG_init__(&data__->F_TRIG5,retain);
  R_TRIG_init__(&data__->R_TRIG2,retain);
  TP_init__(&data__->TP6,retain);
  F_TRIG_init__(&data__->F_TRIG7,retain);
  TP_init__(&data__->TP7,retain);
  F_TRIG_init__(&data__->F_TRIG8,retain);
  R_TRIG_init__(&data__->R_TRIG4,retain);
  TP_init__(&data__->TP9,retain);
  F_TRIG_init__(&data__->F_TRIG10,retain);
  TP_init__(&data__->TP10,retain);
  F_TRIG_init__(&data__->F_TRIG11,retain);
  R_TRIG_init__(&data__->R_TRIG3,retain);
  R_TRIG_init__(&data__->R_TRIG0,retain);
  RS_init__(&data__->RS0,retain);
  RS_init__(&data__->RS1,retain);
  RS_init__(&data__->RS2,retain);
  RS_init__(&data__->RS3,retain);
  TP_init__(&data__->TP1,retain);
  __INIT_VAR(data__->_TMP_NOT62_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_OR25_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_AND61_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_AND58_OUT,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void TRAFFICLIGHTS_body__(TRAFFICLIGHTS *data__) {
  // Initialise TEMP variables

  __SET_VAR(data__->,_TMP_NOT62_OUT,,!(__GET_VAR(data__->ACT,)));
  __SET_VAR(data__->R_TRIG0.,CLK,,__GET_VAR(data__->PB0,));
  R_TRIG_body__(&data__->R_TRIG0);
  __SET_VAR(data__->R_TRIG3.,CLK,,__GET_VAR(data__->BDSR,));
  R_TRIG_body__(&data__->R_TRIG3);
  __SET_VAR(data__->,_TMP_OR25_OUT,,OR__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->R_TRIG0.Q,),
    (BOOL)__GET_VAR(data__->R_TRIG3.Q,)));
  __SET_VAR(data__->,_TMP_AND61_OUT,,AND__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->_TMP_NOT62_OUT,),
    (BOOL)__GET_VAR(data__->_TMP_OR25_OUT,)));
  __SET_VAR(data__->TP0.,IN,,__GET_VAR(data__->_TMP_AND61_OUT,));
  __SET_VAR(data__->TP0.,PT,,__time_to_timespec(1, 0, 4, 0, 0, 0));
  TP_body__(&data__->TP0);
  __SET_VAR(data__->,ACTG,,__GET_VAR(data__->TP0.Q,));
  __SET_VAR(data__->F_TRIG1.,CLK,,__GET_VAR(data__->ACTG,));
  F_TRIG_body__(&data__->F_TRIG1);
  __SET_VAR(data__->TP2.,IN,,__GET_VAR(data__->F_TRIG1.Q,));
  __SET_VAR(data__->TP2.,PT,,__time_to_timespec(1, 0, 4, 0, 0, 0));
  TP_body__(&data__->TP2);
  __SET_VAR(data__->,ACTY,,__GET_VAR(data__->TP2.Q,));
  __SET_VAR(data__->F_TRIG2.,CLK,,__GET_VAR(data__->ACTY,));
  F_TRIG_body__(&data__->F_TRIG2);
  __SET_VAR(data__->RS0.,S,,__GET_VAR(data__->F_TRIG2.Q,));
  __SET_VAR(data__->RS0.,R1,,__GET_VAR(data__->ACTG,));
  RS_body__(&data__->RS0);
  __SET_VAR(data__->,ACTR,,__GET_VAR(data__->RS0.Q1,));
  __SET_VAR(data__->,_TMP_AND58_OUT,,AND__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->ACT,),
    (BOOL)__GET_VAR(data__->_TMP_OR25_OUT,)));
  __SET_VAR(data__->TP1.,IN,,__GET_VAR(data__->_TMP_AND58_OUT,));
  __SET_VAR(data__->TP1.,PT,,__time_to_timespec(1, 0, 20, 0, 0, 0));
  TP_body__(&data__->TP1);
  __SET_VAR(data__->,ACTG,,__GET_VAR(data__->TP1.Q,));
  __SET_VAR(data__->F_TRIG5.,CLK,,__GET_VAR(data__->ACSY,));
  F_TRIG_body__(&data__->F_TRIG5);
  __SET_VAR(data__->RS1.,S,,__GET_VAR(data__->F_TRIG5.Q,));
  __SET_VAR(data__->RS1.,R1,,__GET_VAR(data__->ACSG,));
  RS_body__(&data__->RS1);
  __SET_VAR(data__->,ACSR,,__GET_VAR(data__->RS1.Q1,));
  __SET_VAR(data__->R_TRIG1.,CLK,,__GET_VAR(data__->ACTR,));
  R_TRIG_body__(&data__->R_TRIG1);
  __SET_VAR(data__->TP3.,IN,,__GET_VAR(data__->R_TRIG1.Q,));
  __SET_VAR(data__->TP3.,PT,,__time_to_timespec(1, 0, 20, 0, 0, 0));
  TP_body__(&data__->TP3);
  __SET_VAR(data__->,ACSG,,__GET_VAR(data__->TP3.Q,));
  __SET_VAR(data__->F_TRIG4.,CLK,,__GET_VAR(data__->ACSG,));
  F_TRIG_body__(&data__->F_TRIG4);
  __SET_VAR(data__->TP4.,IN,,__GET_VAR(data__->F_TRIG4.Q,));
  __SET_VAR(data__->TP4.,PT,,__time_to_timespec(1, 0, 4, 0, 0, 0));
  TP_body__(&data__->TP4);
  __SET_VAR(data__->,ACSY,,__GET_VAR(data__->TP4.Q,));
  __SET_VAR(data__->R_TRIG2.,CLK,,__GET_VAR(data__->ACSR,));
  R_TRIG_body__(&data__->R_TRIG2);
  __SET_VAR(data__->TP6.,IN,,__GET_VAR(data__->R_TRIG2.Q,));
  __SET_VAR(data__->TP6.,PT,,__time_to_timespec(1, 0, 20, 0, 0, 0));
  TP_body__(&data__->TP6);
  __SET_VAR(data__->,BDTG,,__GET_VAR(data__->TP6.Q,));
  __SET_VAR(data__->F_TRIG7.,CLK,,__GET_VAR(data__->BDTG,));
  F_TRIG_body__(&data__->F_TRIG7);
  __SET_VAR(data__->TP7.,IN,,__GET_VAR(data__->F_TRIG7.Q,));
  __SET_VAR(data__->TP7.,PT,,__time_to_timespec(1, 0, 4, 0, 0, 0));
  TP_body__(&data__->TP7);
  __SET_VAR(data__->,BDTY,,__GET_VAR(data__->TP7.Q,));
  __SET_VAR(data__->F_TRIG8.,CLK,,__GET_VAR(data__->BDTY,));
  F_TRIG_body__(&data__->F_TRIG8);
  __SET_VAR(data__->RS2.,S,,__GET_VAR(data__->F_TRIG8.Q,));
  __SET_VAR(data__->RS2.,R1,,__GET_VAR(data__->BDTG,));
  RS_body__(&data__->RS2);
  __SET_VAR(data__->,BDTR,,__GET_VAR(data__->RS2.Q1,));
  __SET_VAR(data__->F_TRIG11.,CLK,,__GET_VAR(data__->BDSY,));
  F_TRIG_body__(&data__->F_TRIG11);
  __SET_VAR(data__->RS3.,S,,__GET_VAR(data__->F_TRIG11.Q,));
  __SET_VAR(data__->RS3.,R1,,__GET_VAR(data__->BDSG,));
  RS_body__(&data__->RS3);
  __SET_VAR(data__->,BDSR,,__GET_VAR(data__->RS3.Q1,));
  __SET_VAR(data__->R_TRIG4.,CLK,,__GET_VAR(data__->BDTR,));
  R_TRIG_body__(&data__->R_TRIG4);
  __SET_VAR(data__->TP9.,IN,,__GET_VAR(data__->R_TRIG4.Q,));
  __SET_VAR(data__->TP9.,PT,,__time_to_timespec(1, 0, 20, 0, 0, 0));
  TP_body__(&data__->TP9);
  __SET_VAR(data__->,BDSG,,__GET_VAR(data__->TP9.Q,));
  __SET_VAR(data__->F_TRIG10.,CLK,,__GET_VAR(data__->BDSG,));
  F_TRIG_body__(&data__->F_TRIG10);
  __SET_VAR(data__->TP10.,IN,,__GET_VAR(data__->F_TRIG10.Q,));
  __SET_VAR(data__->TP10.,PT,,__time_to_timespec(1, 0, 4, 0, 0, 0));
  TP_body__(&data__->TP10);
  __SET_VAR(data__->,BDSY,,__GET_VAR(data__->TP10.Q,));

  goto __end;

__end:
  return;
} // TRAFFICLIGHTS_body__() 





