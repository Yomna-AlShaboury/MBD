/*
 * File: CalcSubSys.c
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

#include "CalcSubSys.h"
#include "CalcSubSys_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_CalcSubSys_T CalcSubSys_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_CalcSubSys_T CalcSubSys_Y;

/* Real-time model */
RT_MODEL_CalcSubSys_T CalcSubSys_M_;
RT_MODEL_CalcSubSys_T *const CalcSubSys_M = &CalcSubSys_M_;
void sMultiWordMul(const uint32_T u1[], int32_T n1, const uint32_T u2[], int32_T
                   n2, uint32_T y[], int32_T n)
{
  int32_T i;
  int32_T j;
  int32_T k;
  int32_T ni;
  uint32_T u1i;
  uint32_T yk;
  uint32_T a1;
  uint32_T a0;
  uint32_T b1;
  uint32_T w10;
  uint32_T w01;
  uint32_T cb;
  boolean_T isNegative1;
  boolean_T isNegative2;
  uint32_T cb1;
  uint32_T cb2;
  isNegative1 = ((u1[n1 - 1] & 2147483648U) != 0U);
  isNegative2 = ((u2[n2 - 1] & 2147483648U) != 0U);
  cb1 = 1U;

  /* Initialize output to zero */
  for (k = 0; k < n; k++) {
    y[k] = 0U;
  }

  for (i = 0; i < n1; i++) {
    cb = 0U;
    u1i = u1[i];
    if (isNegative1) {
      u1i = ~u1i + cb1;
      cb1 = (uint32_T)(u1i < cb1);
    }

    a1 = u1i >> 16U;
    a0 = u1i & 65535U;
    cb2 = 1U;
    ni = n - i;
    ni = n2 <= ni ? n2 : ni;
    k = i;
    for (j = 0; j < ni; j++) {
      u1i = u2[j];
      if (isNegative2) {
        u1i = ~u1i + cb2;
        cb2 = (uint32_T)(u1i < cb2);
      }

      b1 = u1i >> 16U;
      u1i &= 65535U;
      w10 = a1 * u1i;
      w01 = a0 * b1;
      yk = y[k] + cb;
      cb = (uint32_T)(yk < cb);
      u1i *= a0;
      yk += u1i;
      cb += (yk < u1i);
      u1i = w10 << 16U;
      yk += u1i;
      cb += (yk < u1i);
      u1i = w01 << 16U;
      yk += u1i;
      cb += (yk < u1i);
      y[k] = yk;
      cb += w10 >> 16U;
      cb += w01 >> 16U;
      cb += a1 * b1;
      k++;
    }

    if (k < n) {
      y[k] = cb;
    }
  }

  /* Apply sign */
  if (isNegative1 != isNegative2) {
    cb = 1U;
    for (k = 0; k < n; k++) {
      yk = ~y[k] + cb;
      y[k] = yk;
      cb = (uint32_T)(yk < cb);
    }
  }
}

int32_T div_s32_floor(int32_T numerator, int32_T denominator)
{
  int32_T quotient;
  uint32_T absNumerator;
  uint32_T absDenominator;
  uint32_T tempAbsQuotient;
  boolean_T quotientNeedsNegation;
  if (denominator == 0) {
    quotient = numerator >= 0 ? MAX_int32_T : MIN_int32_T;

    /* Divide by zero handler */
  } else {
    absNumerator = numerator < 0 ? ~(uint32_T)numerator + 1U : (uint32_T)
      numerator;
    absDenominator = denominator < 0 ? ~(uint32_T)denominator + 1U : (uint32_T)
      denominator;
    quotientNeedsNegation = ((numerator < 0) != (denominator < 0));
    tempAbsQuotient = absNumerator / absDenominator;
    if (quotientNeedsNegation) {
      absNumerator %= absDenominator;
      if (absNumerator > 0U) {
        tempAbsQuotient++;
      }
    }

    quotient = quotientNeedsNegation ? -(int32_T)tempAbsQuotient : (int32_T)
      tempAbsQuotient;
  }

  return quotient;
}

/* Model step function */
void CalcSubSys_step(void)
{
  uint32_T tmp;
  uint32_T tmp_0;

  /* Outport: '<Root>/Out1' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Sum: '<S1>/Add'
   */
  CalcSubSys_Y.Out1 = CalcSubSys_U.Input + CalcSubSys_U.Input1;

  /* Outport: '<Root>/Out2' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Sum: '<S1>/Subtract'
   */
  CalcSubSys_Y.Out2 = CalcSubSys_U.Input - CalcSubSys_U.Input1;

  /* Product: '<S1>/Product1' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Outport: '<Root>/Out3'
   */
  tmp = (uint32_T)CalcSubSys_U.Input;
  tmp_0 = (uint32_T)CalcSubSys_U.Input1;
  sMultiWordMul(&tmp, 1, &tmp_0, 1, &CalcSubSys_Y.Out3.chunks[0U], 2);

  /* Outport: '<Root>/Out4' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Product: '<S1>/Divide'
   */
  CalcSubSys_Y.Out4 = div_s32_floor(CalcSubSys_U.Input, CalcSubSys_U.Input1);
}

/* Model initialize function */
void CalcSubSys_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void CalcSubSys_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
