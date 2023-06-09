TYPE
  LOGLEVEL : (CRITICAL, WARNING, INFO, DEBUG) := INFO;
END_TYPE

FUNCTION_BLOCK LOGGER
  VAR_INPUT
    TRIG : BOOL;
    MSG : STRING;
    LEVEL : LOGLEVEL := INFO;
  END_VAR
  VAR
    TRIG0 : BOOL;
  END_VAR

  IF TRIG AND NOT TRIG0 THEN
  {{
   LogMessage(GetFbVar(LEVEL),(char*)GetFbVar(MSG, .body),GetFbVar(MSG, .len));
  }}
  END_IF;
  TRIG0:=TRIG;
END_FUNCTION_BLOCK



FUNCTION_BLOCK python_eval
  VAR_INPUT
    TRIG : BOOL;
    CODE : STRING;
  END_VAR
  VAR_OUTPUT
    ACK : BOOL;
    RESULT : STRING;
  END_VAR
  VAR
    STATE : DWORD;
    BUFFER : STRING;
    PREBUFFER : STRING;
    TRIGM1 : BOOL;
    TRIGGED : BOOL;
  END_VAR

  {extern void __PythonEvalFB(int, PYTHON_EVAL*);__PythonEvalFB(0, data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK python_poll
  VAR_INPUT
    TRIG : BOOL;
    CODE : STRING;
  END_VAR
  VAR_OUTPUT
    ACK : BOOL;
    RESULT : STRING;
  END_VAR
  VAR
    STATE : DWORD;
    BUFFER : STRING;
    PREBUFFER : STRING;
    TRIGM1 : BOOL;
    TRIGGED : BOOL;
  END_VAR

  {extern void __PythonEvalFB(int, PYTHON_EVAL*);__PythonEvalFB(1,(PYTHON_EVAL*)(void*)data__);}
END_FUNCTION_BLOCK

FUNCTION_BLOCK python_gear
  VAR_INPUT
    N : UINT;
    TRIG : BOOL;
    CODE : STRING;
  END_VAR
  VAR_OUTPUT
    ACK : BOOL;
    RESULT : STRING;
  END_VAR
  VAR
    py_eval : python_eval;
    COUNTER : UINT;
    _TMP_ADD10_OUT : UINT;
    _TMP_EQ13_OUT : BOOL;
    _TMP_SEL15_OUT : UINT;
    _TMP_AND7_OUT : BOOL;
  END_VAR

  _TMP_ADD10_OUT := ADD(COUNTER, 1);
  _TMP_EQ13_OUT := EQ(N, _TMP_ADD10_OUT);
  _TMP_SEL15_OUT := SEL(_TMP_EQ13_OUT, _TMP_ADD10_OUT, 0);
  COUNTER := _TMP_SEL15_OUT;
  _TMP_AND7_OUT := AND(_TMP_EQ13_OUT, TRIG);
  py_eval(TRIG := _TMP_AND7_OUT, CODE := CODE);
  ACK := py_eval.ACK;
  RESULT := py_eval.RESULT;
END_FUNCTION_BLOCK


PROGRAM TRAFFICLIGHTS
  VAR
    ACTG : BOOL;
  END_VAR
  VAR_INPUT
    ACT : BOOL := 1;
  END_VAR
  VAR
    ACTY : BOOL;
    ACTR : BOOL;
    ACSG : BOOL;
    ACSY : BOOL;
    ACSR : BOOL;
    BDTG : BOOL;
    BDTY : BOOL;
  END_VAR
  VAR_INPUT
    PB0 : BOOL := 1;
  END_VAR
  VAR
    BDTR : BOOL;
    BDSG : BOOL;
    BDSY : BOOL;
    BDSR : BOOL;
    TP0 : TP;
    F_TRIG1 : F_TRIG;
    TP2 : TP;
    F_TRIG2 : F_TRIG;
    R_TRIG1 : R_TRIG;
    TP3 : TP;
    F_TRIG4 : F_TRIG;
    TP4 : TP;
    F_TRIG5 : F_TRIG;
    R_TRIG2 : R_TRIG;
    TP6 : TP;
    F_TRIG7 : F_TRIG;
    TP7 : TP;
    F_TRIG8 : F_TRIG;
    R_TRIG4 : R_TRIG;
    TP9 : TP;
    F_TRIG10 : F_TRIG;
    TP10 : TP;
    F_TRIG11 : F_TRIG;
    R_TRIG3 : R_TRIG;
    R_TRIG0 : R_TRIG;
    RS0 : RS;
    RS1 : RS;
    RS2 : RS;
    RS3 : RS;
    TP1 : TP;
    _TMP_NOT62_OUT : BOOL;
    _TMP_OR25_OUT : BOOL;
    _TMP_AND61_OUT : BOOL;
    _TMP_AND58_OUT : BOOL;
  END_VAR

  _TMP_NOT62_OUT := NOT(ACT);
  R_TRIG0(CLK := PB0);
  R_TRIG3(CLK := BDSR);
  _TMP_OR25_OUT := OR(R_TRIG0.Q, R_TRIG3.Q);
  _TMP_AND61_OUT := AND(_TMP_NOT62_OUT, _TMP_OR25_OUT);
  TP0(IN := _TMP_AND61_OUT, PT := T#4s);
  ACTG := TP0.Q;
  F_TRIG1(CLK := ACTG);
  TP2(IN := F_TRIG1.Q, PT := T#4s);
  ACTY := TP2.Q;
  F_TRIG2(CLK := ACTY);
  RS0(S := F_TRIG2.Q, R1 := ACTG);
  ACTR := RS0.Q1;
  _TMP_AND58_OUT := AND(ACT, _TMP_OR25_OUT);
  TP1(IN := _TMP_AND58_OUT, PT := T#20s);
  ACTG := TP1.Q;
  F_TRIG5(CLK := ACSY);
  RS1(S := F_TRIG5.Q, R1 := ACSG);
  ACSR := RS1.Q1;
  R_TRIG1(CLK := ACTR);
  TP3(IN := R_TRIG1.Q, PT := T#20s);
  ACSG := TP3.Q;
  F_TRIG4(CLK := ACSG);
  TP4(IN := F_TRIG4.Q, PT := T#4s);
  ACSY := TP4.Q;
  R_TRIG2(CLK := ACSR);
  TP6(IN := R_TRIG2.Q, PT := T#20s);
  BDTG := TP6.Q;
  F_TRIG7(CLK := BDTG);
  TP7(IN := F_TRIG7.Q, PT := T#4s);
  BDTY := TP7.Q;
  F_TRIG8(CLK := BDTY);
  RS2(S := F_TRIG8.Q, R1 := BDTG);
  BDTR := RS2.Q1;
  F_TRIG11(CLK := BDSY);
  RS3(S := F_TRIG11.Q, R1 := BDSG);
  BDSR := RS3.Q1;
  R_TRIG4(CLK := BDTR);
  TP9(IN := R_TRIG4.Q, PT := T#20s);
  BDSG := TP9.Q;
  F_TRIG10(CLK := BDSG);
  TP10(IN := F_TRIG10.Q, PT := T#4s);
  BDSY := TP10.Q;
END_PROGRAM


CONFIGURATION Config0

  RESOURCE Res0 ON PLC
    TASK task0(INTERVAL := T#20ms,PRIORITY := 0);
    PROGRAM instance0 WITH task0 : TRAFFICLIGHTS;
  END_RESOURCE
END_CONFIGURATION
