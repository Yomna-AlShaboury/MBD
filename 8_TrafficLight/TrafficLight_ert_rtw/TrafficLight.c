/*
 * File: TrafficLight.c
 *
 * Code generated for Simulink model 'TrafficLight'.
 *
 * Model version                  : 1.14
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Wed Mar 30 16:38:53 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TrafficLight.h"
#include "TrafficLight_private.h"

/* Named constants for Chart: '<Root>/Chart' */
#define TrafficLight_IN_go             ((uint8_T)1U)
#define TrafficLight_IN_stop           ((uint8_T)2U)
#define TrafficLight_IN_wait           ((uint8_T)3U)

/* Block states (default storage) */
DW_TrafficLight_T TrafficLight_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_TrafficLight_T TrafficLight_Y;

/* Real-time model */
RT_MODEL_TrafficLight_T TrafficLight_M_;
RT_MODEL_TrafficLight_T *const TrafficLight_M = &TrafficLight_M_;

/* Model step function */
void TrafficLight_step(void)
{
  /* Chart: '<Root>/Chart' */
  if (TrafficLight_DW.temporalCounter_i1 < 15U) {
    TrafficLight_DW.temporalCounter_i1++;
  }

  if (TrafficLight_DW.is_active_c3_TrafficLight == 0U) {
    TrafficLight_DW.is_active_c3_TrafficLight = 1U;
    TrafficLight_DW.is_c3_TrafficLight = TrafficLight_IN_stop;
    TrafficLight_DW.temporalCounter_i1 = 0U;

    /* Outport: '<Root>/red' */
    TrafficLight_Y.RED = 0U;

    /* Outport: '<Root>/yellow' */
    TrafficLight_Y.YELLOW = 0U;

    /* Outport: '<Root>/green' */
    TrafficLight_Y.GREEN = 0U;
  } else {
    switch (TrafficLight_DW.is_c3_TrafficLight) {
     case TrafficLight_IN_go:
      if (TrafficLight_DW.temporalCounter_i1 >= 15U) {
        TrafficLight_DW.is_c3_TrafficLight = TrafficLight_IN_stop;
        TrafficLight_DW.temporalCounter_i1 = 0U;

        /* Outport: '<Root>/red' */
        TrafficLight_Y.RED = 0U;

        /* Outport: '<Root>/yellow' */
        TrafficLight_Y.YELLOW = 0U;

        /* Outport: '<Root>/green' */
        TrafficLight_Y.GREEN = 0U;
      } else {
        /* Outport: '<Root>/red' */
        TrafficLight_Y.RED = 0U;

        /* Outport: '<Root>/yellow' */
        TrafficLight_Y.YELLOW = 0U;

        /* Outport: '<Root>/green' */
        TrafficLight_Y.GREEN = 1U;
      }
      break;

     case TrafficLight_IN_stop:
      if (TrafficLight_DW.temporalCounter_i1 >= 15U) {
        TrafficLight_DW.is_c3_TrafficLight = TrafficLight_IN_wait;
        TrafficLight_DW.temporalCounter_i1 = 0U;

        /* Outport: '<Root>/red' */
        TrafficLight_Y.RED = 1U;

        /* Outport: '<Root>/yellow' */
        TrafficLight_Y.YELLOW = 0U;

        /* Outport: '<Root>/green' */
        TrafficLight_Y.GREEN = 0U;
      } else {
        /* Outport: '<Root>/red' */
        TrafficLight_Y.RED = 1U;

        /* Outport: '<Root>/yellow' */
        TrafficLight_Y.YELLOW = 0U;

        /* Outport: '<Root>/green' */
        TrafficLight_Y.GREEN = 0U;
      }
      break;

     default:
      /* case IN_wait: */
      if (TrafficLight_DW.temporalCounter_i1 >= 15U) {
        TrafficLight_DW.is_c3_TrafficLight = TrafficLight_IN_go;
        TrafficLight_DW.temporalCounter_i1 = 0U;

        /* Outport: '<Root>/red' */
        TrafficLight_Y.RED = 0U;

        /* Outport: '<Root>/yellow' */
        TrafficLight_Y.YELLOW = 1U;

        /* Outport: '<Root>/green' */
        TrafficLight_Y.GREEN = 0U;
      } else {
        /* Outport: '<Root>/red' */
        TrafficLight_Y.RED = 0U;

        /* Outport: '<Root>/yellow' */
        TrafficLight_Y.YELLOW = 1U;

        /* Outport: '<Root>/green' */
        TrafficLight_Y.GREEN = 0U;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */
}

/* Model initialize function */
void TrafficLight_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void TrafficLight_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
