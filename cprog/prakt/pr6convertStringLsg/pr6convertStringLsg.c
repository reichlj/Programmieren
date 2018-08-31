#include<stdio.h>
#include<ctype.h>

int main(void)
{
    char str[51];
    int i, g2k,k2g,ident;

    printf("Zeichenkette eingeben:\n");
    scanf("%50s", str);  /* "%s" wäre gefährlich! */
    g2k = 0;
    k2g = 0;
    ident = 0;
    i=0;
    while (str[i] != 0)
    {
        if ( isalpha(str[i]) ) {
            if ( isupper(str[i]) ) {
                str[i] = tolower(str[i]);
                g2k++;
            } else if ( islower(str[i]) ) {
                str[i] = toupper(str[i]);
                k2g++;
            }
        } else{
            ident++;
        }
        i++;
    }
    printf("%s\n",str);
    printf("gross -> klein: %d\n",g2k);
    printf("klein -> gross: %d\n",k2g);
    printf("unveraendert  : %d\n",ident);

    return 0;

}
