#include <stdio.h>
#include <math.h>
double stabneu(int n, double laenge, double winkel);

int main(void)
{
  int anzahl,nummer;
  double schenkel,strebe,laenge,gesamtlaenge,alpha;

  printf("Laenge des Stabes eingeben : ");
  scanf("%lf",&schenkel);
  printf("Winkel in Grad eingeben : ");
  scanf("%lf",&alpha);
  printf("Schenkellaenge =%7.3f\n",schenkel);
  printf("Winkel in Grad =%7.3f\n",alpha);

  alpha=M_PI*alpha/180.0;
  if (alpha >= M_PI/2)
  {
     printf("Winkel groesser gleich 90 - keine Streben\n");
     return 0;
  }

  nummer = 1;
  anzahl = 0;
  gesamtlaenge=0.0;
  laenge = schenkel;
  while (1 == 1)
  {
      strebe= stabneu(nummer,laenge,alpha);
      if (nummer == 1)
      {
          if (strebe < 0.01*schenkel)
          {
               printf("Erste Strebe bereits kleiner als 1/100\n");
               break;                 // Schleife verlassen
          }
          else
          {
               printf("Nummer  Strebe  Gesamtlaenge\n");
          }
      }
      if (anzahl < 20)
      {
          if (strebe >= 0.01*schenkel)
          {
               anzahl = anzahl + 1;       // strebe ist zulässig
               gesamtlaenge = gesamtlaenge + strebe;
               printf("%5d%9.4f%14.4f\n",nummer,strebe,gesamtlaenge);
          }
          else
          {
               break;                   // strebe zu kurz; Schleife verlassen
          }
      }
      else
      {                     // bereits 20 Streben ausgegeben
           if (strebe >= 0.01*schenkel)
               printf("Mehr als 20 Streben erforderlich\n");
           else
               printf("Genau 20 Streben erforderlich\n");
           break;           // Schleife verlassen
      }
      nummer++;
      laenge = strebe;
  }
  return 0;
}

double stabneu(int n, double laenge, double winkel)
{
   double strebe;
   if (n == 1)
      strebe=laenge*sin(winkel);
   else
      strebe=laenge*cos(winkel);
   return strebe;
}
