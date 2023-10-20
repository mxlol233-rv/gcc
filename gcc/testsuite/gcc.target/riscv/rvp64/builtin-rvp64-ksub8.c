/* ksub8 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn -mabi=lp64d -O0" } */

#include <rvp_intrinsic.h>
#include <stdint.h>


static __attribute__ ((noinline))
uintXLEN_t f0 (uintXLEN_t x0, uintXLEN_t x1){

    return __rv_ksub8(x0, x1);

}



static __attribute__ ((noinline))
int8x8_t f2 (int8x8_t x0, int8x8_t x1){

    return __rv_v_ksub8(x0, x1);

}


/* { dg-final { scan-assembler-times "ksub8" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */

