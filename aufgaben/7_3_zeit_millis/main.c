#include <stdio.h>
void berechne(double t, int* z_m, int* z_s, int* z_ms);
int main()
{
    int m,s,ms;
    double t;
    t = 312.1064;
    berechne(t,&m,&s,&ms);
    printf("t=%7.5f : m=%d s=%d ms=%d\n",t,m,s,ms);
    t = 312.1068;
    berechne(t,&m,&s,&ms);
    printf("t=%7.5f : m=%d s=%d ms=%d\n",t,m,s,ms);
    return 0;
}
void berechne(double t, int* z_m, int* z_s, int* z_ms)
{
    int sek;
    double restInMillis;
    sek = (int) t;  // Castoperator
    *z_m = sek/60;
    *z_s = sek%60;
    restInMillis = 1000 * ( t - (int)t );
    *z_ms = (int) restInMillis; // abschneiden
    *z_ms = (int) (0.5 + restInMillis); // runden
}
