/* raddw also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn -mabi=ipl32d -O0" } */

#include <rvp_intrinsic.h>



static __attribute__ ((noinline))
int32_t f0 (int32_t x0, int32_t x1){

    return __rv_raddw(x0, x1);

}


/* { dg-final { scan-assembler-times "raddw" 2 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */

