#include <stdio.h>
int main(void)
{
  int i;
  int h=8, m=7, s=31;

  printf("Zahl  Quadrat  3.-te Potenz\n");

  for (i=1; i<=40; i=i+1)
      printf(". . .\n", i, i*i, i*i*i);

  printf("Uhrzeit . . . \n",h,m,s);
  return 0;
}
