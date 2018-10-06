#include <stdio.h>
int main (void)
{
  int erster, tageImMonat, zelle, tag, weiter;
  do
  {
     printf("Mit welchem Wochentag beginnt der Monat?\n");
     printf("Sonntag=0 Montag=1 ... :\n");
     scanf("%d",&erster);
     printf("Wieviel Tage besitzt der Monat?\n");
     scanf("%d",&tageImMonat);

     printf("  So  Mo  Di  Mi  Do  Fr  Sa\n");
     zelle= 0;
     tag= 0;
     while (tag < tageImMonat)
     {
        if ( zelle < erster )
        {
           /*Monatserster noch nicht erreicht*/
           printf("    ");
        }
        else
        {
           tag = tag + 1;
           printf("%4d",tag);
        }
        zelle = zelle + 1;
        if (zelle%7 == 0)
           printf("\n");
     }
     printf("\nWeitermachen? (1=weiter,sonst Abbruch)");
     scanf("%d",&weiter);
  }
  while( weiter == 1);
  return 0;
}

