#include <stdio.h>
int berechnehms(int t, int* z_h, int* z_m, int* z_s);
int berechnehms_1(int t, int* z_h, int* z_m, int* z_s);
int main()
{
    int h,m,s,t, ret;
    t = 7388;
    ret = berechnehms(t,&h,&m,&s);
    if (ret < 0)
        printf("t=%d : Sekundenzahl negativ!\n",t);
    else
        printf("t=%d : h=%d m=%d s=%d\n",t,h,m,s);
    t = -7388;
    ret = berechnehms(t,&h,&m,&s);
    if (ret < 0)
        printf("t=%d : Sekundenzahl negativ!\n",t);
    else
        printf("t=%d : h=%d m=%d s=%d\n",t,h,m,s);
    return 0;
}
int berechnehms(int t, int* z_h, int* z_m, int* z_s)
{
    int rest;
    if (t< 0)
       return -1;
    *z_h = t/3600;
    rest = t%3600;
    *z_m = rest/60;
    *z_s = rest%60;
    return 0;
}
int berechnehms_1(int t, int* z_h, int* z_m, int* z_s)
{
    int h,m,s,rest;
    if (t< 0)
       return -1;
    h = t/3600;
    rest = t%3600;  // Berechnung ohne Zeiger
    m = rest/60;
    s = rest%60;
    *z_h = h;
    *z_m = m;       // Ergebnisse "zurückgeben"
    *z_s = s;
    return 0;
}
