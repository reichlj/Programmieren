#include <stdio.h>
int main(void)
{
  double x1,x2,x3,x4,z;
  int k;
  x1 = 1234567;
  x2 = 1234567891;
  x3 = 36028797018963966;
  x4 = 2345602879701896389;
  k = 1;
  while (k > 0)
  {
      z = x1 + k;
      if (z != x1)
      {
          printf("x1: k=%d\n", k);
          break;
      }
      k = k + 1;
  }
  k = 1;
  while (k > 0)
  {
      z = x2 + k;
      if (z != x2)
      {
          printf("x2: k=%d\n", k);
          break;
      }
      k = k + 1;
  }
  k = 1;
  while (k > 0)
  {
      z = x3 + k;
      if (z != x3)
      {
          printf("x3: k=%d\n",k);
          break;
      }
      k = k + 1;
  }
  k = 1;
  while (k > 0)
  {
      z = x4 + k;
      if (z != x4)
      {
          printf("x4: k=%d\n",k);
          break;
      }
      k = k + 1;
  }

  return 0;
}
