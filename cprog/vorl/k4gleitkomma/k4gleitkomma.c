#include <stdio.h>
int main(void)
{
  float  f = 1.1234567890123456789;
  double d = 1.1234567890123456789;

  printf("%.20f\n%.20f\n", f, d);
  f = 0.000011234567890123456789;
  d = 0.000011234567890123456789;
  printf("%.20f\n%.20f\n", f, d);
  return 0;
}

