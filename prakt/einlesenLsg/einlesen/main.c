#include <stdio.h>
int main(void)
{
  int z1, z2, sum;

  printf("Erste Zahl eingeben:\n");
  scanf("%d", &z1 );
  printf("Zweite Zahl eingeben:\n");
  scanf("%d", &z2 );
  sum = z1 + z2;
  printf("Z1=%d Z2=%d\n",z1, z2);
  printf("Z1 + Z2 = %d\n",sum);
  printf("Z1 * Z2 = %d\n",z1*z2);
  printf("Z1 / Z2 = %d\n",z1/z2);
  printf("Z1 %% Z2 = %d\n",z1%z2);
  if ( z1 > z2 )
      printf("Maximum: %d Minimum: %d\n",z1,z2);
  else
      printf("Maximum: %d Minimum: %d\n",z2,z1);
  return 0;
}
