#include <stdio.h>
int main (void)
{
  int erster;
  int letzter;  /* Anzahl der Tage im Monat */
  int count;    /* zaehlt die Kaestchen     */
  int tag;      /* Tag der ausgegeben wird  */
  int weiter;
  do
  {
     printf("Mit welchem Wochentag beginnt der Monat?\n");
     printf("Sonntag=0 Montag=1 ... :\n");
     scanf("%d",&erster);
     printf("Wieviel Tage besitzt der Monat?\n");
     scanf("%d",&letzter);

     printf("  So  Mo  Di  Mi  Do  Fr  Sa\n");
     count= 0;
     tag= 0;
     while (tag < letzter)
     {
        if ( count < erster )
        {
           /* Monatserster noch nicht erreicht */
           printf("    ");
        }
        else
        {
           tag = tag + 1;
           printf("%4d",tag);
        }
        count = count + 1;
        if (count%7 == 0)
           printf("\n");
     }
     printf("\nWeitermachen? (1=weiter,sonst Abbruch)");
     scanf("%d",&weiter);
  }
  while( weiter == 1);
  return 0;
}

