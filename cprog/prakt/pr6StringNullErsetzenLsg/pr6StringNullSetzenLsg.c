#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[51];
    int n,k;
    printf("Zeichenkette eingeben:\n");
    scanf("%50s", str);
    printf("->%s<-\n",str);
    n = strlen(str);
    printf("Laenge=%d\n",n);
    printf("Index %d Zeichen ->%c<- ASCII-Code %d\n",n-1,str[n-1],str[n-1]);
    printf("Index %d Zeichen ->%c<- ASCII-Code %d\n",n,str[n],str[n]);
    str[n] = 'A';
    printf("->%s<-\n",str);
    for (k=0; k<51;k++)
    {
        printf("Index %d Zeichen ->%c<- ASCII-Code %d\n",k,str[k],str[k]);
    }
    return 0;
}
