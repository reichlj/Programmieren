#include <stdio.h>
#define  SIZE   10

/* Deklaration der verwendeten Funktionen */
int    einlesen(void);
void   ausgeben(int n);
double mittelwert(int n);
double maximum(int n);
void   sortiere(int n);

/* Deklaration der globalen Variablen */
double  x[SIZE];

int main(void)
{
   /* Vereinbarung der lokalen Variablen */
   double xmit, xmax;
   int    anzahl;

   anzahl = einlesen();
   ausgeben(anzahl);
   sortiere(anzahl);
   ausgeben(anzahl);
   xmit = mittelwert(anzahl);
   xmax = maximum(anzahl);
   printf ("\n Mittelwert  = %f\n",xmit);
   printf (" Maximalwert = %f\n",xmax);
   return 0;
}


int einlesen(void)
{
   int anzahl, i;

   /* Beispiel aus der Vorlesung */
   anzahl = 5;
   x[0] = 5.0;
   x[1] = 7.0;
   x[2] = 1.0;
   x[3] = 3.0;
   x[4] = 8.0;
/*
   printf("Wieviele Werte ? (maximal %d) :\n",SIZE);
   scanf("%d",&anzahl);
   if ( anzahl > SIZE )
      {
        printf("Programm liest nur %d Werte\n", SIZE);
        anzahl = SIZE;
      }
   for (i=0; i<anzahl; i++)
   {
      printf(" Wert %d eingeben : \n",i);
      scanf("%lf",&x[i]);
   }
*/

   return anzahl;
}


void ausgeben(int n)
{
 int i;
 printf("\n Eingelesene Werte\n\n");
 for (i=0; i<n; i++)
     printf("Wert %d = %f\n",i,x[i]);
}




double  mittelwert(int n)
{
   int i;
   double z = 0.0;

   for (i=0; i<n; i++)
       z = z + x[i];

   z = z/n;

   return z;
}


double maximum(int n)
{
   double max;
   int i;

   max = x[0];      /* Initial. mit x[0] */
   for (i=1; i<n; i++)
   {
      /* x[i] groesser als bisheriges Maximum ?*/
      if (x[i] > max)
         max = x[i];
   }

   return max;
}


void sortiere(int n) /* x[] mittels Bubble-Sort sortieren */
{
  int i; double hilf; char sortiert;
  do   /* Schleife wiederholen, bis Vektor sortiert ist */
  {
    sortiert = 'j';      /* Annahme, x[] ist sortiert */
    for(i=1; i<n; i++)
    {
      if ( x[i]<x[i-1] )
      {
         hilf = x[i];     /* x[i], x[i-1] tauschen */
         x[i] = x[i-1];
         x[i-1] = hilf;
         sortiert = 'n';  /* ...war nicht sortiert */
      }
   }
  }
  while(sortiert == 'n');
}
