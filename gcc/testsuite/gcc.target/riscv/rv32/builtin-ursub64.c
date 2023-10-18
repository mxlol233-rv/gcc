/* ursub64 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpsfoperand -mabi=ipl32d -O0" } */

#include <rvp_intrinsic.h>



static __attribute__ ((noinline))
uint64_t f0 (uint64_t x0, uint64_t x1){

    return __rv_ursub64(x0, x1);

}


/* { dg-final { scan-assembler-times "ursub64" 2 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */

