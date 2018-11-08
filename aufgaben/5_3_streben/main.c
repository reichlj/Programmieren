#include <stdio.h>
#include <math.h>
double stabneu(int n, double laenge, double winkel);

int main(void)
{
  int anzahl;
  double schenkel,strebe,gesamtlaenge,alpha;

  printf("Laenge des Stabes eingeben : ");
  scanf("%lf",&schenkel);
  printf("Winkel in Grad eingeben : ");
  scanf("%lf",&alpha);
  printf("Schenkellaenge =%7.3f\n",schenkel);
  printf("Winkel in Grad =%7.3f\n",alpha);

  alpha=M_PI*alpha/180.0;

  if (alpha >= M_PI/2) {
     printf("Winkel groesser gleich 90 - keine Streben\n");
     return 0;
  }
  anzahl=1;
  strebe= stabneu(anzahl,schenkel,alpha);
  if ( strebe < 0.01*schenkel ) {
     printf("Erste Strebe bereits kleiner als 1/100\n");
     return 0;
  }
  gesamtlaenge=0.0;
  printf("Nummer  Strebe  Gesamtlaenge\n");
  while ( (strebe>0.01*schenkel) && (anzahl <=20) )
  {
     gesamtlaenge = gesamtlaenge + strebe;
     printf("%5d%9.4f%14.4f\n",anzahl,strebe,gesamtlaenge);
     anzahl++;
     strebe=stabneu(anzahl,strebe,alpha);
  }
  if ( (strebe>0.01*schenkel) && (anzahl == 20) )
     printf("Mehr als 20 Streben erforderlich\n");
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
