/* kdmabb also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn -mabi=ilp32d -O0" } */

#include <rvp_intrinsic.h>
#include <stdint.h>


static __attribute__ ((noinline))
int32_t f0 (int32_t x0, uint32_t x1, uint32_t x2){

    return __rv_kdmabb(x0, x1, x2);

}



static __attribute__ ((noinline))
int32_t f1 (int32_t x0, int16x2_t x1, int16x2_t x2){

    return __rv_v_kdmabb(x0, x1, x2);

}


/* { dg-final { scan-assembler-times "kdmabb" 3 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */

