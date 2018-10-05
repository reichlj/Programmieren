#include <stdio.h>
int main(void)
{
   int auswahl;
   float kilometer,verbrauch,verbrauchPro100;
   float tankvolumen,reichweite;

   printf("Kraftstoffverbrauch berechnen mit 1\n");
   printf("Reichweite berechnen mit 2\n");
   printf("Auswahl eingeben\n");
   scanf("%d", &auswahl);

   if ( auswahl == 1) {
     printf("Gefahrene Kilometer eingeben\n");
     scanf("%f",&kilometer);
     printf("Kraftstoffverbrauch eingeben\n");
     scanf("%f",&verbrauch);
     verbrauchPro100 = 100*verbrauch/kilometer;
     printf("Gefahrene Kilometer   : %.2f\n",kilometer);
     printf("Kraftstoffverbrauch   : %.2f\n",verbrauch);
     printf("Verbrauch pro 100 km  : %.2f\n",verbrauchPro100);
   } else {
     printf("Tankvolumen in Litern\n");
     scanf("%f",&tankvolumen);
     printf("Kraftstoffverbrauch pro 100km\n");
     scanf("%f",&verbrauchPro100);
     reichweite = 100*tankvolumen/verbrauchPro100;
     printf("Tankvolumen in Litern : %.2f\n",tankvolumen);
     printf("Verbrauch pro 100km   : %.2f\n",verbrauchPro100);
     printf("Reichweite in km      : %.2f\n",reichweite);
   }
   return 0;
}
