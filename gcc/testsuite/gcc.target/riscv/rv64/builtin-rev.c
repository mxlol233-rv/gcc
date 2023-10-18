/* rev also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv64*-*-* } } */
/* { dg-options "-march=rv64gc_zbpbo -mabi=pl64d -O0" } */

#include <rvp_intrinsic.h>



static __attribute__ ((noinline))
uintXLEN_t f0 (uintXLEN_t x0){

    return __rv_rev(x0);

}


/* { dg-final { scan-assembler-times "rev" 2 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */

