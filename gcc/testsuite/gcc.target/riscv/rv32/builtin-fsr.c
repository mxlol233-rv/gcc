/* fsr also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zbpbo -mabi=ipl32d -O0" } */

#include <rvp_intrinsic.h>



static __attribute__ ((noinline))
uint32_t f0 (uint32_t x0, uint32_t x1, uint32_t x2){

    return __rv_fsr(x0, x1, x2);

}


/* { dg-final { scan-assembler-times "fsr" 2 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */

