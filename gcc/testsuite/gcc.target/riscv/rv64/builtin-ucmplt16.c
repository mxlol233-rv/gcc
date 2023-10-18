/* ucmplt16 also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zpn -mabi=pl64d -O0" } */

#include <rvp_intrinsic.h>



static __attribute__ ((noinline))
uintXLEN_t f0 (uintXLEN_t x0, uintXLEN_t x1){

    return __rv_ucmplt16(x0, x1);

}



static __attribute__ ((noinline))
uint16x4_t f2 (uint16x4_t x0, uint16x4_t x1){

    return __rv_v_ucmplt16(x0, x1);

}


/* { dg-final { scan-assembler-times "ucmplt16" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */

