#include <stdio.h>
int main(void)
{
  int i, z, s;

  for (i=0; i<20; i=i+1)
  {
      z = i/5 + 1;
      s = i%5 + 1 ;
      printf("z%d/s%d\t", z, s);
      if (s == 5)
         printf("\n");
  }
  return 0;
}

