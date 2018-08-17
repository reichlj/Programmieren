#include <stdio.h>
#define DEBUG 0
int main(void)
{
  int i, quadr, sum;

  i=0;
  while (i <=15)
  {
    quadr= i*i;
    sum = sum + quadr;
    if (DEBUG == 1)
       printf("i=%d sum=%d\n",i,sum);
    i = i + 1;
  }
  printf("Summe = %d\n",sum);
  return 0;
}
