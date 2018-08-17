/* numerische Integration nach der Simpson-Formel
   Das Programm berechnet die Schwingungsdauer eines Pendels
   in Einheiten von sqrt(L/g) für verschiedene Auslenkungen
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double integralsimpson(double a, double b, double eps);
double simpson(double a, double b, int n);
double f(double x);

double k;  // globale Variable : verwendet in main und f

int main(void)
{
  double exakt,fehler,nh;
  int i;

  nh = 2.0 * M_PI;
  printf("Winkel exakt. Wert Naeherung rel.Fehler\n");
  for (i=0; i < 180; i=i+10) {
     /* setze die globale Variable k */
     k = sin(i*M_PI/360);
     exakt = 4.0*integralsimpson(0, M_PI/2, 1.E-8);
     fehler = (exakt - nh) / exakt;
     printf("%4d%12.5f%11.5f%10.5f\n",i,exakt,nh,fehler);
  }

  return 0;
}

double f(double x)
{
  double xh;
  // beachte k wird in main gesetzt
  xh = k*sin(x);
  return 1.0/sqrt(1.0-xh*xh);
}


double integralsimpson(double a, double b, double eps)
{
  int i,        /* Zaehler fuer die Zahl der Intervallhalbierungen */
      n;        /* Zahl der Intervalle                             */
  double falt,  /* Wert des Integrals bei n Teilintervallen        */
         fneu,  /* Wert des Integrals bei 2*n Teilintervallen      */
         diff;  /* relative Genauigkeit                            */

  i=0;
  n=2;          /* Intervall [a,b] in 2 Teile teilen */

  fneu = simpson(a,b,n);
  do
  {
    falt=fneu;
    i = i + 1;
    n=2*n;    /* Zahl der Intervalle verdoppeln */
    fneu = simpson(a,b,n);
    diff = fabs( (fneu-falt)/fneu );
  }
  while ( (i<30) && (diff > eps) );

  if ( diff>eps ) {
     printf(" Integral nicht konvergiert !\n");
     exit(-1);
  }

  return fneu;
}


double simpson(double a, double b, int n)
{
  double x,       /* x-Wert x = a + i*h */
         y,
         h;       /* Schrittweite */
  int i;
  h = (b-a)/((double)n);
  y = f(a) + f(b);
  x = a;
  for (i=1; i< n; i++)
  {
     x=x+h;
     if ( (i%2) == 1)
        y = y + 4.0*f(x);
     else
        y = y + 2.0*f(x);
  }
  return y*h/3.0;
}

