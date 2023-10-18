/* smmul also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn -mabi=ipl32d -O0" } */

#include <rvp_intrinsic.h>



static __attribute__ ((noinline))
intXLEN_t f0 (intXLEN_t x0, intXLEN_t x1){

    return __rv_smmul(x0, x1);

}



static __attribute__ ((noinline))
int32x2_t f1 (int32x2_t x0, int32x2_t x1){

    return __rv_v_smmul(x0, x1);

}


/* { dg-final { scan-assembler-times "smmul" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */

