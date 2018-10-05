/* Kap3 : Summe der Quadrate von 1 bis n
          Loesung mit abweisenden Schleife */
#include <stdio.h>
int main(void)
{
  int i;          /* i Zaehler */
  int n;          /* Anzahl der Quadrate*/
  int quadrat;    /* Quadrat von i */
  int sum;        /* Summer der Quadrate */
  printf("Anzahl der Quadratzahlen\n");
  scanf("%d", &n);
  sum = 0;
  i = 0;
  while ( i < n )
  {
    i = i + 1;
    quadrat = i*i;
    sum = sum + quadrat;
  }
  printf("Summe der Quadrate bis %d : %d\n", n, sum);

  return 0;
}
