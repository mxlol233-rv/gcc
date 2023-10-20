/* ksll16 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn -mabi=lp64d -O0" } */

#include <rvp_intrinsic.h>
#include <stdint.h>


static __attribute__ ((noinline))
uintXLEN_t f0 (uintXLEN_t x0, uint32_t x1){

    return __rv_ksll16(x0, x1);

}



static __attribute__ ((noinline))
int16x4_t f2 (int16x4_t x0, uint32_t x1){

    return __rv_v_ksll16(x0, x1);

}



static __attribute__ ((noinline))
int16x2_t f3 (int16x2_t x0, uint32_t x1){

    return __rv_v_ksll16(x0, x1);

}



static __attribute__ ((noinline))
int16x4_t f4 (int16x4_t x0, uint32_t x1){

    return __rv_v_ksll16(x0, x1);

}


/* { dg-final { scan-assembler-times "ksll16" 5 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */

