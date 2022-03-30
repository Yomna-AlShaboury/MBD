/*
 * File: fact.h
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

#ifndef RTW_HEADER_fact_h_
#define RTW_HEADER_fact_h_
#ifndef fact_COMMON_INCLUDES_
# define fact_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* fact_COMMON_INCLUDES_ */

#include "fact_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Input;                        /* '<Root>/Input' */
} ExtU_fact_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
} ExtY_fact_T;

/* Real-time Model Data Structure */
struct tag_RTM_fact_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_fact_T fact_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_fact_T fact_Y;

/* Model entry point functions */
extern void fact_initialize(void);
extern void fact_step(void);
extern void fact_terminate(void);

/* Real-time Model object */
extern RT_MODEL_fact_T *const fact_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'fact'
 * '<S1>'   : 'fact/For Iterator Subsystem1'
 */
#endif                                 /* RTW_HEADER_fact_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
