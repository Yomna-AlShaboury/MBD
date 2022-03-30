/*
 * File: GradingSys.h
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

#ifndef RTW_HEADER_GradingSys_h_
#define RTW_HEADER_GradingSys_h_
#include <string.h>
#ifndef GradingSys_COMMON_INCLUDES_
# define GradingSys_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* GradingSys_COMMON_INCLUDES_ */

#include "GradingSys_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Constant parameters (default storage) */
typedef struct {
  /* Computed Parameter: StringConstant_String
   * Referenced by: '<S2>/String Constant'
   */
  char_T StringConstant_String[256];

  /* Computed Parameter: StringConstant_String_e
   * Referenced by: '<S3>/String Constant'
   */
  char_T StringConstant_String_e[256];

  /* Computed Parameter: StringConstant_String_n
   * Referenced by: '<S4>/String Constant'
   */
  char_T StringConstant_String_n[256];

  /* Computed Parameter: StringConstant_String_f
   * Referenced by: '<S5>/String Constant'
   */
  char_T StringConstant_String_f[256];

  /* Computed Parameter: StringConstant_String_i
   * Referenced by: '<S6>/String Constant'
   */
  char_T StringConstant_String_i[256];
} ConstP_GradingSys_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Input;                        /* '<Root>/Input' */
} ExtU_GradingSys_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  char_T Out1[256];                    /* '<Root>/Out1' */
} ExtY_GradingSys_T;

/* Real-time Model Data Structure */
struct tag_RTM_GradingSys_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_GradingSys_T GradingSys_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_GradingSys_T GradingSys_Y;

/* Constant parameters (default storage) */
extern const ConstP_GradingSys_T GradingSys_ConstP;

/* Model entry point functions */
extern void GradingSys_initialize(void);
extern void GradingSys_step(void);
extern void GradingSys_terminate(void);

/* Real-time Model object */
extern RT_MODEL_GradingSys_T *const GradingSys_M;

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
 * '<Root>' : 'GradingSys'
 * '<S1>'   : 'GradingSys/Subsystem'
 * '<S2>'   : 'GradingSys/Subsystem/If Action Subsystem'
 * '<S3>'   : 'GradingSys/Subsystem/If Action Subsystem1'
 * '<S4>'   : 'GradingSys/Subsystem/If Action Subsystem2'
 * '<S5>'   : 'GradingSys/Subsystem/If Action Subsystem3'
 * '<S6>'   : 'GradingSys/Subsystem/If Action Subsystem4'
 */
#endif                                 /* RTW_HEADER_GradingSys_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
