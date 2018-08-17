#include <stdio.h>
int main(void)
{
  float menge, preis;

  printf("Stromverbrauch eingeben\n");
  scanf("%f", &menge);
  if ( menge < 250.0 )
    preis = menge*0.15;
  else
  {
    if ( menge < 500.0 )
      preis = 250.0*0.15 + (menge-250.0)*0.12;
    else
      preis = 250.0*(0.15+0.12) + (menge-500.0)*0.11;
  }
  printf("Stromverbrauch=%f kWh\n",menge);
  printf("Preis=%.2f Euro\n",preis);
  return 0;
}
