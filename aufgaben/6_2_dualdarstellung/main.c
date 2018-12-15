#include <stdio.h>

#define SIZE 31
int dual[SIZE];
int einlesenZahl(void);
void ausgeben(int zahl, int n);
int umwandlung (int zahl);

int main(void)
{
   int i,stellen;
   i = einlesenZahl();
   stellen = umwandlung(i);
   ausgeben(i,stellen);
   return 0;
}

int umwandlung (int zahl)
{
   int n=0;
   do {
       dual[n] = zahl%2;
       n = n + 1;
       zahl = zahl/2;
   }  while (zahl != 0);
   return n;
}

void ausgeben(int zahl,int n)
{
   int i;
   printf("Dualdarstellung von %d\n",zahl);
   for (i=n-1; i>=0; i--)
   {
       printf("%1d",dual[i]);
   }
   printf("\n\n\n");
}

int einlesenZahl(void)
{
   int zahl;
   do {
       printf("Zahl 0 <= zahl <= 2000000000 eingeben\n");
       scanf("%d",&zahl);
   } while ( (zahl<0) || (zahl>2000000000) );
   return zahl;
}

