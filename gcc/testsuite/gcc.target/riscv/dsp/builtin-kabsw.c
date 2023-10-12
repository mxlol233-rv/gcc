/* { dg-do compile } */

void test_kabsw(int a)
{
  int b = __builtin_riscv_kabsw (a);
}

/* { dg-final { scan-assembler "kabsw" } } */

