/* Kap3 : Quadratzahlen ausgeben
          Loesung mit Zaehlschleife
*/
#include <stdio.h>
int main(void)
{
  int  i;          /* i Zaehler */
  int  k;

  for ( i=1; i <= 15; i=i+1 )
  {
    k= i*i;
    printf("i= %d Quadrat = %d\n", i, k);
  }

  return 0;
}
