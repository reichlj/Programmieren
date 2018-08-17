/* Kap7 : Auswertung von Messergebnissen
          Sortiere Messwerte nach der Groesse
          Programm verwendet keinen globalen Vektor
          verwende die Vektornotation

          vergleiche : k6messw.c
          vergleiche : k7messw1.c

   Datei : k7messw.c
   letzte Aenderung : 26.09.2002
*/
#include <stdio.h>
#define  DIM   10

/* Deklaration der verwendeten Funktionen */
int    einlesen(float x[]);
void   ausgeben(float x[],int n);
float  mittelwert(float x[],int n);
float  maximum(float x[],int n);
void   sortiere(float x[],int n);

int main(void)
{
   float  x[DIM];
   /* Vereinbarung der lokalen Variablen */
   float  x_mittel, x_max;
   int    anzahl;

   anzahl = einlesen(x);
   sortiere(x,anzahl);
   ausgeben(x,anzahl);
   x_mittel = mittelwert(x,anzahl);
   x_max    = maximum(x,anzahl);
   printf ("\n\n  Mittelwert  = %f\n",x_mittel);
   printf ("  Maximalwert = %f\n",x_max);

   return 0;
}


int  einlesen(float x[])
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
   printf(" Wieviele Werte ? (maximal %d) :\n",DIM);
   scanf("%d",&anzahl);
   if ( anzahl > DIM )
   {
      printf("Programm liest nur %d Werte\n", DIM);
      anzahl = DIM;
   }
   for ( i = 0; i < anzahl; i++ )
   {
      printf(" Wert %d eingeben : \n",i);
      scanf("%f",&x[i]);
   }
*/

   return anzahl;
}


void   ausgeben(float x[],int n)
{
   int i;
   printf("\n Eingelesene Werte\n\n");
   for ( i = 0; i < n; i++)
       printf("  Wert %d = %f\n",i,x[i]);
}




float  mittelwert(float x[],int n)
{
   int i;
   float z = 0.0;

   for ( i = 0; i < n; i++)
       z = z + x[i];

   z = z / ( (float) n );

   return z;
}


float  maximum(float x[],int n)
{
   float max_wert;
   int i;

   max_wert = x[0];      /* Initial. mit x[0] */
   for ( i = 1; i < n; i++ )
   {
     /* x[i] groesser als bisheriges Maximum ?*/
     if ( x[i] > max_wert )
        max_wert = x[i];
   }

   return max_wert;
}


void  sortiere(float x[],int n)
{
   int i, k, imax;
   float xmax;

   for ( i = 0; i <= n-2; i++ )
   {
      /* Initialisierung */
      xmax = x[i];
      imax = i;

      for ( k = i+1; k <= n-1; k++ )
      {
        if ( x[k] > xmax )
        {
          /* neues Maximum gefunden */
          xmax = x[k];
          imax = k;
        }
      }

      /* vertauschen; x[i] wird neues Maximum */
      x[imax] = x[i];
      x[i] = xmax;
   }
}
