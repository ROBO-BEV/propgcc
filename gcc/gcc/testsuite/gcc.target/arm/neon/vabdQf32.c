/* Test the `vabdQf32' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0" } */
/* { dg-add-options arm_neon } */

#include "arm_neon.h"

void test_vabdQf32 (void)
{
  float32x4_t out_float32x4_t;
  float32x4_t arg0_float32x4_t;
  float32x4_t arg1_float32x4_t;

  out_float32x4_t = vabdq_f32 (arg0_float32x4_t, arg1_float32x4_t);
}

/* { dg-final { scan-assembler "vabd\.f32\[ 	\]+\[qQ\]\[0-9\]+, \[qQ\]\[0-9\]+, \[qQ\]\[0-9\]+!?\(\[ 	\]+@\[a-zA-Z0-9 \]+\)?\n" } } */
/* { dg-final { cleanup-saved-temps } } */
