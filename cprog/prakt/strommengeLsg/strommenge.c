#include <stdio.h>
int main(void)
{
  float menge, betrag, stufe1,stufe2;
  stufe1 = 250*0.15;
  stufe2 = 250*( 0.15 + 0.12 );
  printf("Geben Sie den Betrag ein\n");
  scanf("%f", &betrag);
  if ( betrag < stufe1 )  {
     menge = betrag/0.15;
  } else if ( betrag < stufe2 )  {
     menge = (betrag-stufe1)/0.12 + 250.0;
  } else  {
     menge = (betrag-stufe2)/0.11 + 500.0;
  }
  printf("Betrag     = %.2f Euro\n", betrag);
  printf("Strommenge = %.2f kWh\n", menge);
  return 0;
}
