#include <stdio.h>
int stunden, minuten, sekunden;
int sekundenAufteilen(int);
int main()
{
    int sek, ret;
    printf("Sekunden eingeben: ");
    scanf("%d",&sek);
    ret = sekundenAufteilen(sek);
    if ( ret > 0)
    {
        printf("Stunden : %d\n",stunden);
        printf("Minuten : %d\n",minuten);
        printf("Sekunden: %d\n\n\n",sekunden);
    }
    else
    {
        printf("Sekundenzahl negativ!\n\n\n");
    }
    return 0;
}
int sekundenAufteilen(int s)
{
    int rest;
    if (s< 0)
       return -1;
    stunden = s/3600;
    rest = s%3600;
    minuten = rest/60;
    sekunden = rest%60;
    return 1;
}
