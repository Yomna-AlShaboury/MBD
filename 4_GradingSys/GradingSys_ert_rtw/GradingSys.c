/*
 * File: GradingSys.c
 *
 * Code generated for Simulink model 'GradingSys'.
 *
 * Model version                  : 1.6
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Thu Mar 24 14:50:31 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "GradingSys.h"
#include "GradingSys_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_GradingSys_T GradingSys_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_GradingSys_T GradingSys_Y;

/* Real-time model */
RT_MODEL_GradingSys_T GradingSys_M_;
RT_MODEL_GradingSys_T *const GradingSys_M = &GradingSys_M_;

/* Model step function */
void GradingSys_step(void)
{
  /* If: '<S1>/If' incorporates:
   *  Inport: '<Root>/Input'
   *  Outport: '<Root>/Out1'
   *  StringConstant: '<S2>/String Constant'
   *  StringConstant: '<S3>/String Constant'
   *  StringConstant: '<S4>/String Constant'
   *  StringConstant: '<S5>/String Constant'
   *  StringConstant: '<S6>/String Constant'
   */
  if (GradingSys_U.Input >= 85.0) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    strncpy(&GradingSys_Y.Out1[0], &GradingSys_ConstP.StringConstant_String[0],
            255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem' */
    GradingSys_Y.Out1[255] = '\x00';
  } else if (GradingSys_U.Input >= 75.0) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    strncpy(&GradingSys_Y.Out1[0], &GradingSys_ConstP.StringConstant_String_e[0],
            255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem1' */
    GradingSys_Y.Out1[255] = '\x00';
  } else if (GradingSys_U.Input >= 65.0) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    strncpy(&GradingSys_Y.Out1[0], &GradingSys_ConstP.StringConstant_String_n[0],
            255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem2' */
    GradingSys_Y.Out1[255] = '\x00';
  } else if (GradingSys_U.Input >= 50.0) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S5>/Action Port'
     */
    strncpy(&GradingSys_Y.Out1[0], &GradingSys_ConstP.StringConstant_String_f[0],
            255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem3' */
    GradingSys_Y.Out1[255] = '\x00';
  } else {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem4' incorporates:
     *  ActionPort: '<S6>/Action Port'
     */
    strncpy(&GradingSys_Y.Out1[0], &GradingSys_ConstP.StringConstant_String_i[0],
            255U);

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem4' */
    GradingSys_Y.Out1[255] = '\x00';
  }

  /* End of If: '<S1>/If' */
}

/* Model initialize function */
void GradingSys_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void GradingSys_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
