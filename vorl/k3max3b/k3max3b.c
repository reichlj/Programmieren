/* Kap3 : lese drei Gleitkommazahlen ein
          bestimme das Maximum
*/
#include <stdio.h>
int main(void)
{
  float z1, z2, z3, max;

  /* Zahlen einlesen */
  printf(" Erste Zahl eingeben :\n");
  scanf("%f", &z1 );
  printf(" Zweite Zahl eingeben :\n");
  scanf("%f", &z2 );
  printf(" Dritte Zahl eingeben :\n");
  scanf("%f", &z3 );

  /* Zahlen ausgeben */
  printf(" 1.te Zahl = %f\n",z1);
  printf(" 2.te Zahl = %f\n",z2);
  printf(" 3.te Zahl = %f\n",z3);

  /* bestimme Maximum von z1 und z2 */
  if (  z1 > z2 )
     max = z1;
  else
     max = z2;

  /* pruefe, ob z3 groesser als bisheriges Maximum */
  if (  z3 > max )
     max = z3;

  /* Maximum ausgeben*/
  printf (" Maximum = %f\n",max);

  return 0 ;
}

