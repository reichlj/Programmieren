/* Kap3 : wurzel.c
          lese Gleitkommazahl und Startwert ein
          berechne die Quadratwurzel
*/
#include <stdio.h>
int main(void)
{
  int i;           /* i : Zaehler fuer Iterationen */
  float x,         /* x : Zahl fuer die Wurzel berechnet wird */
        xstart,    /* xstart : Startwert fer Iteration */
        xa,        /* xa : alter Iterationswert */
        xn,        /* xn : neuer Iterationswert */
        eps;       /* eps : relative Genauigkeit */

  /* x einlesen und Startwert einlesen */
  printf("Zahl eingeben, fuer die die Wurzel berechnet wird\n");
  scanf("%f",&x);
  printf("Startwert fuer Beginn der Iteration eingeben\n");
  scanf("%f",&xstart);

  /* eingelesene Werte ausgeben */
  printf("        x = %f\n",x);
  printf("Startwert = %f\n\n\n",xstart);

  /* Iteration */
  xa = xstart;
  i = 0;
  do
  {
    i = i + 1;
    xn = 0.5 * (xa + x/xa);
    eps = (xn - xa)/xn;
    if ( eps < 0.0 )
       eps = -eps;
    printf(" i=%d  xn= %f  eps=%f\n",i, xn, eps);
    xa=xn;
  }
  while ( (i<20) && (eps > 0.000001) );

  printf("\n\n     x = %f\n",x);
  printf(" xn*xn = %f\n",xn*xn);

  return 0;
}
