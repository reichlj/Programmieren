#include <stdio.h>
#include <math.h>
double singrad(double);
int main(void)
{
  double y;
  int i;

  i=30;
  y=sqrt(2.0);
  printf("wurzel aus 2= %f\n",y);
  y=sin(i*M_PI/180);
  printf("sin(%d)= %f\n",i,y);
  y=singrad(i);
  printf("sin(%d)= %f\n",i,y);
  y=pow(5.0,3.0);
  printf("5 hoch 3 = %f\n",y);
  y=log10(100);
  printf("N-Log von 100= %f\n",y);
  return 0;
}
double singrad(double grad)
{
  double x,y;
  x=grad*M_PI/180.0;
  y=sin(x);
  return y;
}
