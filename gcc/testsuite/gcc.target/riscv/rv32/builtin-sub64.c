/* sub64 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpsfoperand -mabi=ipl32d -O0" } */

#include <rvp_intrinsic.h>



static __attribute__ ((noinline))
int64_t f0 (int64_t x0, int64_t x1){

    return __rv_ssub64(x0, x1);

}



static __attribute__ ((noinline))
uint64_t f1 (uint64_t x0, uint64_t x1){

    return __rv_usub64(x0, x1);

}


/* { dg-final { scan-assembler-times "sub64" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */

