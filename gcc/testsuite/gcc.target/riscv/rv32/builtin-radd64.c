/* radd64 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpsfoperand -mabi=ipl32d -O0" } */

#include <rvp_intrinsic.h>



static __attribute__ ((noinline))
int64_t f0 (int64_t x0, int64_t x1){

    return __rv_radd64(x0, x1);

}


/* { dg-final { scan-assembler-times "radd64" 2 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */

