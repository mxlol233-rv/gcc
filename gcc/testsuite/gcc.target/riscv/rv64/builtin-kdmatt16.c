/* kdmatt16 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn -mabi=pl64d -O0" } */

#include <rvp_intrinsic.h>



static __attribute__ ((noinline))
int64_t f0 (int64_t x0, uint64_t x1, uint64_t x2){

    return __rv_kdmatt16(x0, x1, x2);

}



static __attribute__ ((noinline))
int32x2_t f1 (int32x2_t x0, int16x4_t x1, int16x4_t x2){

    return __rv_v_kdmatt16(x0, x1, x2);

}


/* { dg-final { scan-assembler-times "kdmatt16" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */

