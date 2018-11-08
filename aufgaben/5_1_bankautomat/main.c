#include <stdio.h>
int betrag_einlesen(void);
void ausgabe(int z50, int z20, int z10, int z5);
int main(void)
{
   int n50,n20,n10,n5, betrag;

   betrag = betrag_einlesen();
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
      ausgabe(n50,n20,n10,n5);
      betrag = betrag_einlesen();
   }
   printf("Programmende\n");
   return 0;
}

int betrag_einlesen(void)
{
   int betrag;
   do
   {
      printf("Geben Sie den Betrag ein\n");
      scanf("%d",&betrag);
   }
   while ( (betrag%5 != 0) || (betrag < 0) );
   return betrag;
}

void ausgabe(int z50, int z20, int z10, int z5)
{
   printf("  50er : %d\n",z50);
   printf("  20er : %d\n",z20);
   printf("  10er : %d\n",z10);
   printf("   5er : %d\n",z5);
}

