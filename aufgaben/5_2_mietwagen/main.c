#include <stdio.h>
int berechneKilometer(int groesse,int tage, int kilometer);
int berechneTage(int tage);
int tagesPreis(int groesse);
double kilometerPreis(int groesse);
double vignettenZuschlag(int vignette, int tage);
double auslandsZuschlag(double preis, int ausland);

#define KLEINWAGEN    0
#define MITTELKLASSE  1
#define OBERKLASSE    2

#define VIGNETTE_KEINE        0
#define VIGNETTE_OESTERREICH  1
#define VIGNETTE_SCHWEIZ      2

#define INLAND   0
#define AUSLAND  1

int main(void)
{

 int wagenKategorie;
 int mietTage;        /* Anzahl der Miettage */
 int bezahlteTage;    /* Tage die bezahlt werden */
 int gefahreneKm;     /* gefahrene Kilometer */
 int berechneteKm;
 int ausland;
 int vignette;
 int weiter;

 double preis, preisProTag, preisProKilometer;

 do
 {
   printf("Wagenkategorie \n");
   printf(" %d: Kleinwagen  %d: Mittelklasse  %d: Oberklasse: ",
          KLEINWAGEN, MITTELKLASSE, OBERKLASSE);
   scanf("%d",&wagenKategorie);

   printf("Anzahl der Miettage: ");
   scanf("%d",&mietTage);
   printf("Gefahrene Kilometer eingeben: ");
   scanf("%d",&gefahreneKm);

   printf("Auslandsnutzung: %d Inland, %d Ausland: ",INLAND,AUSLAND);
   scanf("%d",&ausland);
   if (ausland == AUSLAND )
   {
     printf("Vignette: %d keine, %d Oesterreich, %d Schweiz: ",
            VIGNETTE_KEINE,VIGNETTE_OESTERREICH, VIGNETTE_SCHWEIZ);
     scanf("%d",&vignette);
   }
   else
     vignette = VIGNETTE_KEINE;

   preisProTag = tagesPreis(wagenKategorie);
   preisProKilometer = kilometerPreis(wagenKategorie);
   berechneteKm = berechneKilometer(wagenKategorie, mietTage, gefahreneKm);
   bezahlteTage = berechneTage(mietTage);
   preis = preisProTag*bezahlteTage + berechneteKm*preisProKilometer;
   preis = preis + auslandsZuschlag(preis, ausland);
   preis = preis + vignettenZuschlag(vignette, mietTage);

   if (wagenKategorie == KLEINWAGEN)
     printf("Wagenkategorie:   Kleinwagen\n");
   else if (wagenKategorie == MITTELKLASSE)
     printf("Wagenkategorie:   Mittelklasse\n");
   else if (wagenKategorie == OBERKLASSE)
     printf("Wagenkategorie:   Oberklasse\n");
   printf("Gefahrene KM: %d  Berechnete KM: %d\n",gefahreneKm,berechneteKm);
   printf("Miettage: %d  Berechnete Tage: %d\n",mietTage, bezahlteTage);

   if (ausland == INLAND)
     printf("Inland\n");
   else
     printf("Ausland\n");

   if ( vignette == VIGNETTE_KEINE )
     printf("Vignette: keine\n");
   else if ( vignette == VIGNETTE_OESTERREICH )
     printf("Vignette: OESTERREICH\n");
   else if ( vignette == VIGNETTE_SCHWEIZ )
     printf("Vignette: SCHWEIZ\n");
   printf("Preis:  %.2f\n",preis);

   printf("weitermachen = 1\n");
   scanf("%d",&weiter);
 } while (weiter == 1);

   return 0;
}


int berechneKilometer(int kategorie,int tage, int kilometer)
{
  int freiKilometer, berechneteKm;
  if ( kategorie == KLEINWAGEN ) {
     freiKilometer = 60*tage;
  } else if ( kategorie == MITTELKLASSE ) {
     freiKilometer = 75*tage;
  } else {
     freiKilometer = 90*tage;
  }
  if ( kilometer <= freiKilometer )
     berechneteKm = 0;
  else
     berechneteKm = kilometer - freiKilometer;
  return berechneteKm;
}


int berechneTage(int mietTage)
{
  int bezahlteTage;
  bezahlteTage = mietTage - mietTage / 7;
  /* alternativ :                                  */
  /* Anzahl der ganzen Wochen : mietTage/7         */
  /* bezahlteTage = (mietTage/7)*6 + mietTage % 7; */

  return bezahlteTage;
}


int tagesPreis(int kategorie)
{
  int tagesPreis;
  if ( kategorie == KLEINWAGEN ) {
     tagesPreis = 60;
  } else if ( kategorie == MITTELKLASSE ) {
     tagesPreis = 85;
  } else {
     tagesPreis = 110;
  }
  return tagesPreis;
}


double kilometerPreis(int kategorie)
{
  double kilometerPreis;
  if ( kategorie == KLEINWAGEN ) {
     kilometerPreis = 0.40;
  } else if ( kategorie == MITTELKLASSE ) {
     kilometerPreis = 0.50;
  } else {
     kilometerPreis = 0.60;
  }
  return kilometerPreis;
}


double vignettenZuschlag(int vignette, int tage)
{
  double zuschlag;
  if ( vignette == VIGNETTE_OESTERREICH ) {
     zuschlag = 2.0*tage;
  } else if ( vignette == VIGNETTE_SCHWEIZ ) {
     zuschlag = 1.0*tage;
  } else {
     zuschlag = 0.0;
  }
  return zuschlag;
}

double auslandsZuschlag(double inlandsPreis, int ausland)
{
  double zuschlag = 0.0;
  if ( ausland == AUSLAND ) {
     zuschlag =  0.1 * inlandsPreis;
  }
  return zuschlag;
}

