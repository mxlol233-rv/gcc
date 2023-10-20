/* uraddw also appears on filename, so scan-assembler-times plus 1 */
/* This is a test program for add16 instruction.  */
/* { dg-do compile { target riscv32*-*-* } } */
/* { dg-options "-march=rv32gc_zpn -mabi=ilp32d -O0" } */

#include <rvp_intrinsic.h>
#include <stdint.h>


static __attribute__ ((noinline))
uint32_t f0 (uint32_t x0, uint32_t x1){

    return __rv_uraddw(x0, x1);

}


/* { dg-final { scan-assembler-times "uraddw" 2 } } */
/* { dg-final { scan-assembler-times "builtin_riscv" 0 } } */

