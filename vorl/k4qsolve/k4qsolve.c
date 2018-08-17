#include <stdio.h>
#include <math.h>
double x1,x2;
int qsolve(double,double,double);
int main(void)
{
  double a,b,c;
  int ret;

  printf("    2              \n");
  printf(" a*x  + b*x + c = 0\n\n");
  printf("a eingeben:\n");
  scanf("%lf", &a);
  printf("b eingeben:\n");
  scanf("%lf", &b);
  printf("c eingeben: ");
  scanf("%lf", &c);
  ret = qsolve(a,b,c);
  if ( ret != 0 )
     printf("Nullstellen: %f, %f\n", x1, x2);
  else
     printf("Keine Nullstellen!\n");
  return 0;
}
int qsolve(double a, double b, double c)
{
  int i;
  double y;
  y = b*b-4.0*a*c;
  if ( y < 0.0 )
     return 0;
  y = sqrt(y);
  x1 = 0.5*(-b+y)/a;
  x2 = 0.5*(-b-y)/a;
  return 1;
}
