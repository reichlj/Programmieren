#include <stdio.h>
#include <string.h>
#define SIZE 26
int main(void)
{
    int count[SIZE],k,anzahl,index;
    char str[51];
    printf("Zeichenkette eingeben:\n");
    scanf("%50s", str);    /* "%s" wäre gefährlich! */
    printf("->%s<-\n", str);

    for (k=0; k<SIZE; k++)
    {
        count[k] = 0;
    }
    k=0; //k hatte den Wert 26
    while (str[k] != 0)
    {
        index = str[k] - 'A';
        count[index] = count[index] + 1;
        k++;
    }
    anzahl = 0;
    for (k=0; k<SIZE; k++)
    {
        if (count[k] != 0)
        {
            anzahl = anzahl + 1;
        }
    }
    printf("Anzahl: %d\n",anzahl);
    return 0;
}
