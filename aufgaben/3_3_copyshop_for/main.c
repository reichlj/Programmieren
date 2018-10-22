#include <stdio.h>
int main(void)
{
  int anzahl;
  float preis;
        /*12345612345678901234567*/
  printf("Anzahl    Preis in Euro\n");
  for (anzahl=200; anzahl <=3000; anzahl = anzahl + 200)
  {
      if  (anzahl < 500 )
          preis = anzahl * 0.05;
      else if  (anzahl < 1500 )
          preis = anzahl * 0.04;
      else
          preis = anzahl * 0.03;
      printf("%6d%17.2f\n",anzahl,preis);
  }
  return 0;
}
