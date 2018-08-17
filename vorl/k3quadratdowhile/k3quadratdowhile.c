/* Kap3 : Quadratzahlen ausgeben
          Loesung mit nachfolgender Bedingungspruefung*/
#include <stdio.h>
int main(void)
{
  int  i,k;

  i = 1;
  do
  {
     k = i * i;
     printf("i= %d  Quadrat = %d\n", i, k);
     i = i + 1;
  }
  while ( i <=15 );
  return 0;
}
