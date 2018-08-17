#include <stdio.h>
#include <math.h>
#define EPSILON 1.0e-5
double integral(double a,double b);
double trapez(double a, double b, int n);
double f(double x);

int main(void)
{
    double x1, x2, flaeche;

    printf("Integration von x1 =\n");
    scanf("%lf", &x1);
    printf("Integration bis x2 =\n");
    scanf("%lf", &x2);
    flaeche = integral(x1, x2);
    printf("Integral = %.4f\n", flaeche);
    return 0;
}

double integral(double a,double b)
{
  int n;
  double f_alt,f_neu,delta;
  n=1;
  f_neu = trapez(a,b,n);
  do
  {
    f_alt = f_neu;
    n=2*n;
    f_neu = trapez(a,b,n);
    delta = fabs((f_neu-f_alt)/f_neu);
  }
  while ( (delta>EPSILON) && (n<5000) );
  return f_neu;
}

double trapez(double a, double b, int n)
{
    int i;
    double fn,dx;
    fn = 0.0;
    dx = (b-a)/n;
    for (i=1;i<=n;i++)
    {
        fn = fn + f(a+(i-1)*dx)+f(a+i*dx);
    }
    fn = fn*dx/2;
    return fn;
}

double f(double x)
{
    return 5*x*x*x*x;
}
