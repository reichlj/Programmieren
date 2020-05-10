#include <stdio.h>
int main(void)
{
   int i, n, quadrat, sum, sum_alt;
   sum_alt = -1;
   n= 1;
   while (n < 100000)
   {
      sum = 0;
      for (i=0; i <= n; i= i+1)
      {
         quadrat = i*i;
         sum = sum + quadrat;
      }
      if (sum < sum_alt)
      {
          printf("Ueberlauf bei n=%d\n",n);
          printf("1 bis %d: %d\n", n-1, sum_alt);
          printf("1 bis %d: %d\n", n, sum);
          break;
      }
      sum_alt = sum;
      n = n + 1;
   }
   return 0;
}
