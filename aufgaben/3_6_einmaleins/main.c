#include <stdio.h>
int main(void)
{
  int zeile,spalte,produkt,n;

  do
  {
     printf("Wert 1<=n<=15 eingeben :");
     scanf("%d", &n);
  }
  while ( n<1 || n>15 );

  printf("Einmaleins-Tabelle bis %d\n",n);
  for (zeile=1; zeile<=n; zeile=zeile+1)
  {
     for (spalte=1; spalte<=n; spalte=spalte+1)
     {
         produkt = zeile*spalte;
         printf("%4d", produkt);
     }
     printf("\n");
  }
  printf("\n");
  return 0;
}
