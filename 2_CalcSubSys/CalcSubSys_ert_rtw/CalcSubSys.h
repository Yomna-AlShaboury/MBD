/*
 * File: CalcSubSys.h
 *
 * Code generated for Simulink model 'CalcSubSys'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Thu Mar 24 15:01:40 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_CalcSubSys_h_
#define RTW_HEADER_CalcSubSys_h_
#ifndef CalcSubSys_COMMON_INCLUDES_
# define CalcSubSys_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* CalcSubSys_COMMON_INCLUDES_ */

#include "CalcSubSys_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  int32_T Input;                       /* '<Root>/Input' */
  int32_T Input1;                      /* '<Root>/Input1' */
} ExtU_CalcSubSys_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  int32_T Out1;                        /* '<Root>/Out1' */
  int32_T Out2;                        /* '<Root>/Out2' */
  int64m_T Out3;                       /* '<Root>/Out3' */
  int32_T Out4;                        /* '<Root>/Out4' */
} ExtY_CalcSubSys_T;

/* Real-time Model Data Structure */
struct tag_RTM_CalcSubSys_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_CalcSubSys_T CalcSubSys_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_CalcSubSys_T CalcSubSys_Y;

/* Model entry point functions */
extern void CalcSubSys_initialize(void);
extern void CalcSubSys_step(void);
extern void CalcSubSys_terminate(void);

/* Real-time Model object */
extern RT_MODEL_CalcSubSys_T *const CalcSubSys_M;

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
 * '<Root>' : 'CalcSubSys'
 * '<S1>'   : 'CalcSubSys/Subsystem'
 */
#endif                                 /* RTW_HEADER_CalcSubSys_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
