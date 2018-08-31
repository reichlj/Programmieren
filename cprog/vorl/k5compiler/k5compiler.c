#include <stdio.h>
int main(void)
{
  int i,sum;
  sum = 258;
  for (i=3;i<=9;i++)
      sum = sum + i;
  printf("Sum=%d",sum);
  return 0;
}
