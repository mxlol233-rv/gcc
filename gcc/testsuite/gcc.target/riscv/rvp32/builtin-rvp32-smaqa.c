/* smaqa also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn -mabi=ilp32d -O0" } */

#include <rvp_intrinsic.h>
#include <stdint.h>


static __attribute__ ((noinline))
intXLEN_t f0 (intXLEN_t x0, uintXLEN_t x1, uintXLEN_t x2){

    return __rv_smaqa(x0, x1, x2);

}



static __attribute__ ((noinline))
int32_t f1 (int32_t x0, int8x4_t x1, int8x4_t x2){

    return __rv_v_smaqa(x0, x1, x2);

}


/* { dg-final { scan-assembler-times "smaqa" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */

