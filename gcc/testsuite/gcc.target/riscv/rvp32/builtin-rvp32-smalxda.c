/* smalxda also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpsfoperand -mabi=ilp32d -O0" } */

#include <rvp_intrinsic.h>
#include <stdint.h>


static __attribute__ ((noinline))
int64_t f0 (int64_t x0, uintXLEN_t x1, uintXLEN_t x2){

    return __rv_smalxda(x0, x1, x2);

}



static __attribute__ ((noinline))
int64_t f1 (int64_t x0, int16x2_t x1, int16x2_t x2){

    return __rv_v_smalxda(x0, x1, x2);

}


/* { dg-final { scan-assembler-times "smalxda" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */

