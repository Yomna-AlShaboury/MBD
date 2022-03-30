/*
 * File: fact.c
 *
 * Code generated for Simulink model 'fact'.
 *
 * Model version                  : 1.20
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Wed Mar 30 14:43:50 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "fact.h"
#include "fact_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_fact_T fact_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_fact_T fact_Y;

/* Real-time model */
RT_MODEL_fact_T fact_M_;
RT_MODEL_fact_T *const fact_M = &fact_M_;

/* Model step function */
void fact_step(void)
{
  int32_T tmp;
  int32_T s1_iter;
  real_T UnitDelay_DSTATE;

  /* Outputs for Iterator SubSystem: '<Root>/For Iterator Subsystem1' incorporates:
   *  ForIterator: '<S1>/For Iterator'
   */
  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
  UnitDelay_DSTATE = 1.0;

  /* Inport: '<Root>/Input' */
  if (fact_U.Input < 2.147483648E+9) {
    if (fact_U.Input >= -2.147483648E+9) {
      tmp = (int32_T)fact_U.Input;
    } else {
      tmp = MIN_int32_T;
    }
  } else {
    tmp = MAX_int32_T;
  }

  /* End of Inport: '<Root>/Input' */
  if (tmp > 2147483646) {
    tmp = 2147483646;
  } else {
    if (tmp < 0) {
      tmp = 0;
    }
  }

  for (s1_iter = 1; s1_iter <= tmp; s1_iter++) {
    /* Outport: '<Root>/Out1' incorporates:
     *  Product: '<S1>/Product'
     *  UnitDelay: '<S1>/Unit Delay'
     */
    fact_Y.Out1 = (real_T)s1_iter * UnitDelay_DSTATE;

    /* Update for UnitDelay: '<S1>/Unit Delay' incorporates:
     *  Outport: '<Root>/Out1'
     */
    UnitDelay_DSTATE = fact_Y.Out1;
  }

  /* End of Outputs for SubSystem: '<Root>/For Iterator Subsystem1' */
}

/* Model initialize function */
void fact_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void fact_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
