#include <stdio.h>

double trapez(double , double , int );
double f(double x);

int main(void)
{
  double xl, xr, fn;
  int n;

  printf("untere Grenze xl :\n");
  scanf("%lf",&xl);
  printf("obere  Grenze xr :\n");
  scanf("%lf",&xr);
  printf("Zahl der Intervalle\n");
  scanf("%d",&n);

  fn = trapez(xl,xr,n);

  printf("untere Grenze xl=%8.5f\n",xl);
  printf("obere Grenze  xr=%8.5f\n",xr);
  printf("Zahl der Intervalle n=%d\n",n);
  printf("Integral =%12.8f\n", fn);
  return 0;
}

double trapez(double a, double b, int n)
{
   double x, Fn, h;
   int i;
   h = ( b - a )/ n;
   Fn = 0.5*( f(a) + f(b) );  /*Initialisierung*/
   x = a;
   for (i=1; i<n; i++)
   {
      x = x + h;
      Fn = Fn +  f(x);
      /* alternativ :  Fn = Fn + f(a+i*h); */
   }
   return Fn*h ;
}

double f(double x)
{
   return 5*x*x*x*x;
}

