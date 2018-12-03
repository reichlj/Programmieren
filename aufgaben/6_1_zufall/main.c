#include <stdio.h>
#define SIZE 1000000
int zz[SIZE];
int anzahleinlesen(void);
void belegen(int n);
double mittelwert(int n);
int aufeinfolgendgleich(int n);

int main()
{
    int anzahl,d;
    double y;
    anzahl = anzahleinlesen();
    belegen(anzahl);
    y = mittelwert(anzahl);
    printf("Mittelwert: %.3f\n", y);
    d = aufeinfolgendgleich(anzahl);
    printf("Aufeinanderfolgend gleich: %d\n\n",d);
    return 0;
}

int anzahleinlesen(void)
{
    int n;
    do {
        printf("Zahl zwischen 1 und %d : \n",SIZE);
        scanf("%d",&n);

    } while ((n < 1) || (n>SIZE));
    return n;
}

void belegen(int n)
{
    int i;
    for (i=0;i<n;i++)
        zz[i] = rand();
}

double mittelwert(int n)
{
    int i;
    double y = 0;
    for (i=0; i<n; i++)
    {
        y = y + zz[i];
    }
    return y/n;
}

int aufeinfolgendgleich(int n)
{
    int i,count;
    count = 0;
    for (i=1; i<n; i++)
    {
        if (zz[i-1] == zz[i])
            count++;
    }
    return count;
}
