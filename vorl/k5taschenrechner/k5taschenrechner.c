#include <stdio.h>

int  auswahl(void);
void multiplikation(void);
void hexdarstellung(void);

int main (void)
{
  int wahl;

  do
  {
    wahl = auswahl();
    switch (wahl)
    {
       case 1 : multiplikation();
                break;
       case 2 : hexdarstellung();
                break;
    }
  } while(wahl != 0);
  return 0;
}

int auswahl (void)
{
  int  nummer;

  printf("Einfacher Taschenrechner\n");
  printf("(0) Beenden\n") ;
  printf("(1) Multiplikation\n") ;
  printf("(2) Hexumwandlung\n") ;
  printf("Bitte waehlen Sie:\n") ;

  scanf("%d",&nummer);
  while ((nummer < 0)||(nummer > 2))
  {
    printf("Ungueltig! Neue Wahl\n");
    scanf("%d",&nummer);
  }
  return nummer;
}


void  multiplikation(void)
{
  int z1,z2,pr;

  printf("Multiplikation\n");
  printf("Erste Zahl:\n");
  scanf("%d",&z1);
  printf("Zweite Zahl:\n");
  scanf("%d",&z2);

  pr = z1 * z2 ;
  printf("Produkt: %d*%d=%d\n\n",z1,z2,pr);
}

void hexdarstellung (void)
{
  int zahl;

  printf("Hexumwandlung\n");
  printf("Dezimalzahl eingeben:\n");
  scanf("%d",&zahl);
  printf("Dezimal %d Hex %X\n\n",zahl,zahl);
}
