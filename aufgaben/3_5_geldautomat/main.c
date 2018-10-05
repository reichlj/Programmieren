#include <stdio.h>
int main(void)
{
  int n50,n20,n10,n5, betrag;
  do {
     printf("Geben Sie den Betrag ein\n");
     scanf("%d",&betrag);
  } while ((betrag%5 != 0) || (betrag < 0));

  while ( betrag != 0 )
  {
    printf("Betrag : %d\n",betrag);
    n50= betrag/50;
    betrag = betrag%50;
    n20 = betrag/20;
    betrag= betrag%20;
    n10 = betrag/10;
    betrag= betrag%10;
    n5 = betrag/5;
    printf("50er : %d\n",n50);
    printf("20er : %d\n",n20);
    printf("10er : %d\n",n10);
    printf(" 5er : %d\n",n5);
    do {
       printf("Geben Sie den Betrag ein\n");
       scanf("%d",&betrag);
    } while ((betrag%5 != 0) || (betrag < 0));
  }
  return 0;
}
