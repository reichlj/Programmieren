#include <stdio.h>
double power(double x, int k);

int main(void)
{
  double x1, x2, z, t;
  int n;

  x1 = 3.0;
  n = 4;
  z = power(x1,n);
  printf("ergebnis= %f\n",z);
  x2 = 3.75;
  t = power(x2,5);
  printf("ergebnis= %f\n",t);
  return 0;
}

double power(double x,int k)
{
  int i;
  float y;
  y = 1.0;
  for (i=1; i<=k; i++)
  {
     y = y*x;
  }
  return y;
}
