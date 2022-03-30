/*
 * File: LogicOP.h
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

#ifndef RTW_HEADER_LogicOP_h_
#define RTW_HEADER_LogicOP_h_
#ifndef LogicOP_COMMON_INCLUDES_
# define LogicOP_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* LogicOP_COMMON_INCLUDES_ */

#include "LogicOP_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  uint8_T Input;                       /* '<Root>/Input' */
  uint8_T Input1;                      /* '<Root>/Input1' */
} ExtU_LogicOP_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  uint8_T Out1;                        /* '<Root>/Out1' */
  uint8_T Out2;                        /* '<Root>/Out2' */
  uint8_T Out3;                        /* '<Root>/Out3' */
  uint8_T Out4;                        /* '<Root>/Out4' */
  uint8_T Out5;                        /* '<Root>/Out5' */
  uint8_T Out6;                        /* '<Root>/Out6' */
  uint8_T Out7;                        /* '<Root>/Out7' */
} ExtY_LogicOP_T;

/* Real-time Model Data Structure */
struct tag_RTM_LogicOP_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_LogicOP_T LogicOP_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_LogicOP_T LogicOP_Y;

/* Model entry point functions */
extern void LogicOP_initialize(void);
extern void LogicOP_step(void);
extern void LogicOP_terminate(void);

/* Real-time Model object */
extern RT_MODEL_LogicOP_T *const LogicOP_M;

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
 * '<Root>' : 'LogicOP'
 * '<S1>'   : 'LogicOP/Subsystem'
 * '<S2>'   : 'LogicOP/Subsystem/Bitwise XNOR'
 */
#endif                                 /* RTW_HEADER_LogicOP_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
