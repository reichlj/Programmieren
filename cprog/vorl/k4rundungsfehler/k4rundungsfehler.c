#include <stdio.h>
int main(void)
{
  float  f = 1.0 / 7.0, fsum = 0.0;
  double d = 1.0 / 7.0, dsum = 0.0;
  int i;

  for(i = 1; i <= 7000000; i = i + 1)
  {
    fsum = fsum + f;
    dsum = dsum + d;
  }
  printf("fsum= %.7f\n", fsum);
  printf("dsum= %.7f\n", dsum);

  if (fsum == 1000000.0)
      printf("fsum korrekt\n");
  else
      printf("fsum nicht korrekt\n");

  if (dsum == 1000000.0)
      printf("dsum korrekt\n");
  else
      printf("dsum nicht korrekt\n");

  if ( i == 7000001 )
      printf("i ist korrekt\n");
  else
      printf("i ist nicht korrekt\n");

  return 0;
}
