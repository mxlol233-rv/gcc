/* smbt16 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn -mabi=pl64d -O0" } */

#include <rvp_intrinsic.h>



static __attribute__ ((noinline))
intXLEN_t f0 (uintXLEN_t x0, uintXLEN_t x1){

    return __rv_smbt16(x0, x1);

}



static __attribute__ ((noinline))
int32x2_t f2 (int16x4_t x0, int16x4_t x1){

    return __rv_v_smbt16(x0, x1);

}


/* { dg-final { scan-assembler-times "smbt16" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */

