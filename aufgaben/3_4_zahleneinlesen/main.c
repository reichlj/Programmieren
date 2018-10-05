#include <stdio.h>
int main(void)
{
  int count=0, kleiner10=0, zw10und50=0, ueber50=0;
  float sum=0.0, max=0.0, min, zahl;
  printf("Zahl eingeben, Abbruch falls Zahl <= 0 :\n");
  scanf("%f", &zahl);
  while ( zahl > 0 ) {
     count = count + 1;
     sum = sum + zahl;
     if ( zahl > max )
        max = zahl;
     if ( count == 1 )
        min = zahl;
     if ( zahl < min )
        min = zahl;
     if ( zahl < 10.0 )
        kleiner10 = kleiner10 + 1;
     else if ( zahl < 50.0 )
        zw10und50 = zw10und50 + 1;
     else
        ueber50 = ueber50 + 1;
     printf("Zahl eingeben, Abbruch falls Zahl <= 0 :\n");
     scanf("%f", &zahl);
  }
  if ( count == 0 )
     printf("Keine positive Zahl eingegeben !\n");
  else  {
     printf("Minimum    = %f\n", min);
     printf("Maximum    = %f\n", max);
     printf("Mittelwert = %f\n", sum/count);
     printf("Kleiner als 10     : %d\n", kleiner10);
     printf("Zwischen 10 und 50 : %d\n", zw10und50);
     printf("Ueber50            : %d\n", ueber50);
  }
  return 0;
}
