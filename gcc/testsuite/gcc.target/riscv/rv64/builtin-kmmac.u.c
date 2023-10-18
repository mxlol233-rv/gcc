/* kmmac.u also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn -mabi=pl64d -O0" } */

#include <rvp_intrinsic.h>



static __attribute__ ((noinline))
intXLEN_t f0 (intXLEN_t x0, intXLEN_t x1, intXLEN_t x2){

    return __rv_kmmac_u(x0, x1, x2);

}



static __attribute__ ((noinline))
int32x2_t f1 (int32x2_t x0, int32x2_t x1, int32x2_t x2){

    return __rv_v_kmmac_u(x0, x1, x2);

}


/* { dg-final { scan-assembler-times "kmmac.u" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */

