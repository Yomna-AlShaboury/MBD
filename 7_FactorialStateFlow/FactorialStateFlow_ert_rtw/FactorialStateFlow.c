/*
 * File: FactorialStateFlow.c
 *
 * Code generated for Simulink model 'FactorialStateFlow'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Wed Mar 30 15:46:18 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "FactorialStateFlow.h"
#include "FactorialStateFlow_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_FactorialStateFlow_T FactorialStateFlow_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_FactorialStateFlow_T FactorialStateFlow_Y;

/* Real-time model */
RT_MODEL_FactorialStateFlow_T FactorialStateFlow_M_;
RT_MODEL_FactorialStateFlow_T *const FactorialStateFlow_M =
  &FactorialStateFlow_M_;
void mul_wide_u32(uint32_T in0, uint32_T in1, uint32_T *ptrOutBitsHi, uint32_T
                  *ptrOutBitsLo)
{
  uint32_T outBitsLo;
  uint32_T in0Lo;
  uint32_T in0Hi;
  uint32_T in1Lo;
  uint32_T in1Hi;
  uint32_T productHiLo;
  uint32_T productLoHi;
  in0Hi = in0 >> 16U;
  in0Lo = in0 & 65535U;
  in1Hi = in1 >> 16U;
  in1Lo = in1 & 65535U;
  productHiLo = in0Hi * in1Lo;
  productLoHi = in0Lo * in1Hi;
  in0Lo *= in1Lo;
  in1Lo = 0U;
  outBitsLo = (productLoHi << /*MW:OvBitwiseOk*/ 16U) + /*MW:OvCarryOk*/ in0Lo;
  if (outBitsLo < in0Lo) {
    in1Lo = 1U;
  }

  in0Lo = outBitsLo;
  outBitsLo += /*MW:OvCarryOk*/ productHiLo << /*MW:OvBitwiseOk*/ 16U;
  if (outBitsLo < in0Lo) {
    in1Lo++;
  }

  *ptrOutBitsHi = (((productLoHi >> 16U) + (productHiLo >> 16U)) + in0Hi * in1Hi)
    + in1Lo;
  *ptrOutBitsLo = outBitsLo;
}

uint32_T mul_u32_sat(uint32_T a, uint32_T b)
{
  uint32_T result;
  uint32_T u32_chi;
  mul_wide_u32(a, b, &u32_chi, &result);
  if (u32_chi) {
    result = MAX_uint32_T;
  }

  return result;
}

/* Model step function */
void FactorialStateFlow_step(void)
{
  uint8_T counter;

  /* Chart: '<Root>/Chart' incorporates:
   *  Inport: '<Root>/Input'
   */
  FactorialStateFlow_Y.fact = 1U;
  for (counter = FactorialStateFlow_U.Input; counter > 1; counter--) {
    /* NEW_PATTERN */
    FactorialStateFlow_Y.fact = mul_u32_sat(FactorialStateFlow_Y.fact, counter);
  }

  /* End of Chart: '<Root>/Chart' */
}

/* Model initialize function */
void FactorialStateFlow_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void FactorialStateFlow_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
