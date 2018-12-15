#include <stdio.h>

#define SIZE 31
int ziffern[SIZE];
int zahlEinlesen(void);
int basisEinlesen(void);
void ausgabe(int zahl, int basis,int n);
int umwandlung (int zahl,int basis);

int main(void)
{
   int z,basis,stellenZahl;
   z = zahlEinlesen();
   basis = basisEinlesen();
   stellenZahl = umwandlung(z,basis);
   ausgabe(z,basis,stellenZahl);
   return 0;
}

int umwandlung (int zahl,int basis)
{
   int n=0;
   do {
       ziffern[n] = zahl%basis;
       n = n + 1;
       zahl = zahl/basis;
   }  while (zahl != 0);
   return n;
}

void ausgabe(int zahl,int basis, int n)
{
   int i;
   printf("Darstelllung von %d Basis %d\n",zahl,basis);
   for (i=n-1; i>=0; i--)
   {
       if (ziffern[i] <10)
           printf("%1d",ziffern[i]);
       else
           printf("%c",'A'+ziffern[i]-10);
   }
   printf("\n\n\n");
}

int zahlEinlesen(void)
{
   int zahl;
   do {
       printf("Zahl 0 <= zahl <= 2000000000 eingeben\n");
       scanf("%d",&zahl);
   } while ( (zahl<0) || (zahl>2000000000) );
   return zahl;
}

int basisEinlesen(void)
{
   int basis;
   do {
       printf("Basis 2<=basis<=36 eingeben\n");
       scanf("%d",&basis);
   } while ( (basis<2) || (basis>36) );
   return basis;
}

