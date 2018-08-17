#include <stdio.h>
double power(double, int);
double wurzel(double x);
double wurzel2(double x, int n);
int main(void)
{
  double x1=3.0, x2=3.75, z, t;
  int n=4;

  z = power(x1,n);
  printf("%.0f hoch %d =%f\n",x1,n,z);
  t = power(x2,5);
  printf("%.2f hoch 5 =%f\n",x2,t);
  t = wurzel(x2);
  printf("Wurzel aus %.2f  =%f\n",x2,t);
  t = wurzel2(x2,30);
  if ( t < 0.0 )
     printf("Nicht konvergiert nach 30 Iterationen\n");
  else
     printf("Wurzel aus %.2f  =%f\n",x2,t);

  t = wurzel2(x2,3);
  if ( t < 0.0 )
     printf("Nicht konvergiert nach 3 Iterationen\n");
  else
     printf("Wurzel aus %.2f  =%f\n",x2,t);

  return 0;
}

double power(double x,int k)
{
  int i;
  double y;
  y = 1.0;
  for (i=1; i<=k; i++)
  {
      y = y*x;
  }
  return y;
}

double wurzel(double x)
{
 int i=0;
 double xn, xa, eps;
 xa=5.0;

 do {
   i = i + 1;
   xn = 0.5*(xa + x/xa);
   eps = (xn-xa)/xn;
   if (eps < 0)
       eps = -eps;
   xa = xn;
 } while ((i< 50)&&(eps>1e-6));

 return xn;
}

/*
   x  : Wert, fuer Wurzelberechnung
   n  : maximale Anzahl der Iterationen
*/
double wurzel2(double x,int n)
{
 int i=0;
 double xn,xa,eps;

 xa= 17.0;

 do {
   i = i + 1;
   xn = 0.5*(xa + x/xa);
   eps = (xn-xa)/xn;
   if (eps < 0)
       eps = -eps;
   xa = xn;
 } while ((i< n)&&(eps>1e-6));

 if ( eps > 1e-6 )
    return -1.0;
 else
     return xn;
}
