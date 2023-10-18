/* srai.u also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn -mabi=ipl32d -O0" } */

#include <rvp_intrinsic.h>



static __attribute__ ((noinline))
intXLEN_t f0 (intXLEN_t x0, uint32_t x1){

    return __rv_sra_u(x0, x1);

}


/* { dg-final { scan-assembler-times "srai.u" 2 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */

