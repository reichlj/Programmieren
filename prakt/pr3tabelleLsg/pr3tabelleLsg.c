#include <stdio.h>
int main(void)
{
  int i;
  int h, m, s;
  h=8;
  m=7;
  s=31;

  printf("Zahl  Quadrat  3.-te Potenz\n");

  for (i=1; i<=40; i=i+1)
      printf("%4d%8d%8d\n", i, i*i, i*i*i);

  printf("Uhrzeit %02d:%02d:%02d\n",h,m,s);
  return 0;
}

