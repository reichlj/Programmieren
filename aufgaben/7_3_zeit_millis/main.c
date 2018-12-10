#include <stdio.h>
void berechne(double t, int* z_m, int* z_s, int* z_ms);
int main()
{
    int m,s,ms;
    double t;
    t = 312.1234;
    berechne(t,&m,&s,&ms);
    printf("t=%7.5f : m=%d s=%d ms=%d\n",t,m,s,ms);
    t = 312.1238;
    berechne(t,&m,&s,&ms);
    printf("t=%7.5f : m=%d s=%d ms=%d\n",t,m,s,ms);
    return 0;
}
void berechne(double t, int* z_m, int* z_s, int* z_ms)
{
    int sek;
    double rest;
    sek = (int) t;
    *z_m = sek/60;
    *z_s = sek%60;
    //rest = t - (int)t;
    rest = 0.0005 + t - (int)t;
    *z_ms = (int) ( rest*1000);
}
