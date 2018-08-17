#include <stdio.h>
int main(void)
{
  float z1, z2, sum;

  printf(" Erste Zahl eingeben :\n");
  scanf("%f", &z1 );
  printf(" Zweite Zahl eingeben :\n");
  scanf("%f", &z2 );
  sum = z1 + z2;
  printf("Zahl1: %f Zahl2: %f\n",z1, z2);

  if ( sum < 0.0 ) {
       printf("Ergebnis ist negativ!");
  } else {
       printf("Summe : %f\n",sum);
       printf("Ergebnis ist positiv!");
  }
  return 0;
}
