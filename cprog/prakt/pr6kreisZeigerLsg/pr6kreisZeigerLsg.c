#include<stdio.h>
#include<math.h>
int kreisberechnung(double r,double *zu,double *zf,double *zv);
int main(void)
{
    double r,u,fl,vol;
    int ret;

    printf("Radius:\n");
    scanf("%lf",&r);
    printf("Mit Zeigern\n");
    ret = kreisberechnung(r,&u,&fl,&vol);
    if ( ret != 0 ) {
        printf("Umfang  : %.2f\n",u);
        printf("Flaeche : %.2f\n",fl);
        printf("Volumen : %.2f\n",vol);
    } else {
        printf("Berechnung nicht möglich!\n");
    }
    return 0;
}
int kreisberechnung(double r,double *zu,double *zf,double *zv)
{
    if ( r < 0.0)
        return 0;
    *zu = 2.0*M_PI*r;
    *zf = M_PI*r*r;
    *zv = 4.0*M_PI*r*r*r/3.0;
    return 1;
}
