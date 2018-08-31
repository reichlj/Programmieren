#include <stdio.h>      /* Aufgabe: BODY MASS INDEX */
int main(void)
{
    float laenge, m, bmi;

    printf("Groesse in Metern:\n");
    scanf("%f", &laenge);
    printf("Koerpermasse in kg:\n");
    scanf("%f", &m);
    printf("Groesse : %.2f\n",laenge);
    printf("Koerpermasse in kg: %.2f\n",m);

    bmi = m / (laenge*laenge);
    printf("BMI: %f\n", bmi);

    if (bmi <= 19)
        printf("Untergewicht\n");
    else if (bmi <= 25)
        printf("Normalgewicht\n");
    else if (bmi <= 30)
        printf("Leichtes Uebergewicht\n");
    else
        printf("Uebergewicht\n");
    return 0;
}
