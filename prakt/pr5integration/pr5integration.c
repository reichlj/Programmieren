#include <stdio.h>

double integral(double a, double b, double eps);
double trapez(double a, double b, int n);
double f(double x);

int main(void)
{
  double xl, xr, fn,eps;

  printf("untere Grenze xl\n");
  scanf("%lf",&xl);
  printf("obere  Grenze xr\n");
  scanf("%lf",&xr);
  printf("Genauigkeit\n");
  scanf("%lf",&eps);

  fn = integral(xl,xr,eps);

  printf("untere Grenze xl=%8.5f\n",xl);
  printf("obere Grenze  xr=%8.5f\n",xr);
  printf("Genauigkeit eps=%10.4e\n",eps);
  printf("Integral=%12.8f\n",fn);
  return 0;
}

double integral(double a,double b,double eps)
{
  int i,             /* zaehlt Intervallhalbierungen*/
      n;             /* Zahl der Intervalle         */
  double falt,       /* alter Wert - n Intervalle   */
         fneu,       /* neuer Wert - 2*n Intervalle */
         diff;       /* relative Genauigkeit        */

}

double trapez(double a, double b, int n)
{
  double x, Fn, h;
  int i;
  h = (b-a)/n;
  Fn = 0.5*(f(a) + f(b));
  x = a;
  for (i=1; i< n; i++)
  {
     x = x + h;
     Fn = Fn + f(x);
  }
  return Fn*h;
}

double f(double x)
{
  return 5*x*x*x*x;
}
