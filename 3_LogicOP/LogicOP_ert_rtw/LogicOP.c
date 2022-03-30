/*
 * File: LogicOP.c
 *
 * Code generated for Simulink model 'LogicOP'.
 *
 * Model version                  : 1.8
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Thu Mar 24 14:59:05 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "LogicOP.h"
#include "LogicOP_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_LogicOP_T LogicOP_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_LogicOP_T LogicOP_Y;

/* Real-time model */
RT_MODEL_LogicOP_T LogicOP_M_;
RT_MODEL_LogicOP_T *const LogicOP_M = &LogicOP_M_;

/* Model step function */
void LogicOP_step(void)
{
  /* Outport: '<Root>/Out1' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  S-Function (sfix_bitop): '<S1>/Bitwise NOR'
   *  S-Function (sfix_bitop): '<S1>/Bitwise OR'
   */
  LogicOP_Y.Out1 = (uint8_T)(LogicOP_U.Input | LogicOP_U.Input1);

  /* Outport: '<Root>/Out2' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  S-Function (sfix_bitop): '<S1>/Bitwise AND'
   */
  LogicOP_Y.Out2 = (uint8_T)(LogicOP_U.Input & LogicOP_U.Input1);

  /* Outport: '<Root>/Out3' incorporates:
   *  S-Function (sfix_bitop): '<S1>/Bitwise NOR'
   */
  LogicOP_Y.Out3 = (uint8_T)~LogicOP_Y.Out1;

  /* Outport: '<Root>/Out4' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  S-Function (sfix_bitop): '<S1>/Bitwise XOR'
   *  S-Function (sfix_bitop): '<S2>/Bitwise NOT2'
   */
  LogicOP_Y.Out4 = (uint8_T)(LogicOP_U.Input ^ LogicOP_U.Input1);

  /* Outport: '<Root>/Out5' incorporates:
   *  S-Function (sfix_bitop): '<S2>/Bitwise NOT2'
   */
  LogicOP_Y.Out5 = (uint8_T)~LogicOP_Y.Out4;

  /* Outport: '<Root>/Out6' incorporates:
   *  Inport: '<Root>/Input'
   *  S-Function (sfix_bitop): '<S1>/Bitwise NOT'
   */
  LogicOP_Y.Out6 = (uint8_T)~LogicOP_U.Input;

  /* Outport: '<Root>/Out7' incorporates:
   *  Inport: '<Root>/Input1'
   *  S-Function (sfix_bitop): '<S1>/Bitwise NOT1'
   */
  LogicOP_Y.Out7 = (uint8_T)~LogicOP_U.Input1;
}

/* Model initialize function */
void LogicOP_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void LogicOP_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
