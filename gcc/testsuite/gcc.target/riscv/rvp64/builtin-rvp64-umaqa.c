/* umaqa also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn -mabi=lp64d -O0" } */

#include <rvp_intrinsic.h>
#include <stdint.h>


static __attribute__ ((noinline))
uintXLEN_t f0 (uintXLEN_t x0, uintXLEN_t x1, uintXLEN_t x2){

    return __rv_umaqa(x0, x1, x2);

}



static __attribute__ ((noinline))
uint32x2_t f2 (uint32x2_t x0, uint8x8_t x1, uint8x8_t x2){

    return __rv_v_umaqa(x0, x1, x2);

}


/* { dg-final { scan-assembler-times "umaqa" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */

