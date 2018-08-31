#include<stdio.h>
#include<math.h>
int kreisberechnung(double r);
// globale Variablen
double gu,gfl,gvol;
int main(void)
{
    double r;
    int ret;

    printf("Radius:\n");
    scanf("%lf",&r);
    ret = kreisberechnung(r);
    if ( ret != 0 ) {
        printf("Umfang  : %.2f\n",gu);
        printf("Flaeche : %.2f\n",gfl);
        printf("Volumen : %.2f\n",gvol);
    } else {
        printf("Berechnung nicht möglich!\n");
    }

    return 0;
}

int kreisberechnung(double r)
{
    if ( r < 0.0)
        return 0;
    gu = 2.0*M_PI*r;
    gfl = M_PI*r*r;
    gvol = 4.0*M_PI*r*r*r/3.0;
    return 1;
}
