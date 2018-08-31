#include <stdio.h>
int main(void)
{
  float laenge=2, masse, bmi;
  printf("Groesse in Metern:\n");
  scanf("%f", &laenge);
  printf("Koerpermasse in kg:\n");
  scanf("%f", &masse);
  printf("Groesse : %.2f\n",laenge);
  printf("Koerpermasse in kg: %.2f\n",masse);
  bmi = masse/(laenge*laenge);
  printf("BMI: %f\n", bmi);
  if (bmi <= 19)
  {
      printf("Untergewicht\n");
  }
  else
  {
      if (bmi <= 25)
      {
          printf("Normalgewicht\n");
      }
      else
      {
          if (bmi <= 30)
              printf("Leichtes Uebergewicht\n");
          else
              printf("Uebergewicht\n");
      }
  }

  printf("\n\n*******  Schleife-1  *******\n");
  printf("Groesse Koerpermasse   BMI\n");
  laenge = 1.80;
  masse = 60;
  while ( masse <= 104.0 )
  {
     bmi = masse/(laenge*laenge);
     printf("%5.2f %10.2f %10.2f\n",laenge,masse,bmi);
     if (bmi <= 19)
     {
        printf("   Untergewicht\n");
     }
     else
     {
        if (bmi <= 25)
        {
           printf("   Normalgewicht\n");
        }
        else
        {
           if (bmi <= 30)
              printf("   Leichtes Uebergewicht\n");
           else
              printf("   Uebergewicht\n");
        }
     }
     masse = masse + 3.0;
  }
  printf("Ende Schleife-1\n");

  printf("\n\n*******  Schleife-2  *******\n");
  printf("Groesse Koerpermasse   BMI\n");
  laenge = 1.75;
  masse = 55;
  while ( masse <= 104.0 )
  {
     bmi = masse/(laenge*laenge);
     printf("%5.2f %10.2f %10.2f\n",laenge,masse,bmi);
     fflush(stdout);
     if (bmi <= 19)
     {
        printf("   Untergewicht\n");
     }
     else
     {
        if (bmi <= 25)
        {
           printf("   Normalgewicht\n");
        }
        else
        {
           if (bmi <= 30)
              printf("   Leichtes Uebergewicht\n");
           else
              printf("   Uebergewicht\n");
        }
     }
     laenge = laenge + 0.01;
     masse = masse + 3.0;
  }
  printf("Ende\n");

  return 0;
}
