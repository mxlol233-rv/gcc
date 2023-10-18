/* bpick also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn -mabi=ipl32d -O0" } */

#include <rvp_intrinsic.h>



static __attribute__ ((noinline))
uintXLEN_t f0 (uintXLEN_t x0, uintXLEN_t x1, uintXLEN_t x2){

    return __rv_bpick(x0, x1, x2);

}


/* { dg-final { scan-assembler-times "bpick" 2 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */

