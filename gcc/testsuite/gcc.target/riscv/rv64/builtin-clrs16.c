/* clrs16 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn -mabi=pl64d -O0" } */

#include <rvp_intrinsic.h>



static __attribute__ ((noinline))
uintXLEN_t f0 (uintXLEN_t x0){

    return __rv_clrs16(x0);

}



static __attribute__ ((noinline))
uint16x4_t f2 (int16x4_t x0){

    return __rv_v_clrs16(x0);

}


/* { dg-final { scan-assembler-times "clrs16" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */

