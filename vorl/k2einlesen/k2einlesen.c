#include <stdio.h>
int main(void)
{
  int z1, z2, sum;

  printf("Erste Zahl eingeben:\n");
  scanf("%d", &z1 );
  printf("Zweite Zahl eingeben:\n");
  scanf("%d", &z2 );
  sum = z1 + z2;
  printf("Zahl1: %d  Zahl2: %d\n",z1, z2);
  printf("Summe : %d\n",sum);
  return 0;
}
