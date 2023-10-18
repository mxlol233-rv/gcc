/* ksll8 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn -mabi=ipl32d -O0" } */

#include <rvp_intrinsic.h>



static __attribute__ ((noinline))
uintXLEN_t f0 (uintXLEN_t x0, uint32_t x1){

    return __rv_ksll8(x0, x1);

}



static __attribute__ ((noinline))
int8x4_t f1 (int8x4_t x0, uint32_t x1){

    return __rv_v_ksll8(x0, x1);

}


/* { dg-final { scan-assembler-times "ksll8" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */

