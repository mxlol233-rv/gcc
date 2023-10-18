/* umulx16 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpsfoperand -mabi=ipl32d -O0" } */

#include <rvp_intrinsic.h>



static __attribute__ ((noinline))
uint64_t f0 (uint32_t x0, uint32_t x1){

    return __rv_umulx16(x0, x1);

}



static __attribute__ ((noinline))
uint32x2_t f1 (uint16x2_t x0, uint16x2_t x1){

    return __rv_v_umulx16(x0, x1);

}


/* { dg-final { scan-assembler-times "umulx16" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */

