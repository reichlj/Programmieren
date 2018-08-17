#include<stdio.h>
#include<ctype.h>
#include<string.h>

void convert(char s[]);
void convert2(char s[],int *pg2k,int *pk2g,int *pident);
int g2k,k2g,ident;

int main(void)
{
    int lokg2k,lokk2g,lokident;
    char str[51];
    printf("Zeichenkette eingeben:\n");
    scanf("%50s", str);  /* "%s" wäre gefährlich! */

    convert(str);
    printf("%s\n",str);
    printf("gross -> klein: %d\n",g2k);
    printf("klein -> gross: %d\n",k2g);
    printf("unveraendert  : %d\n",ident);

    convert2(str,&lokg2k,&lokk2g,&lokident);
    printf("%s\n",str);
    printf("gross -> klein: %d\n",lokg2k);
    printf("klein -> gross: %d\n",lokk2g);
    printf("unveraendert  : %d\n",lokident);

    return 0;

}

void convert(char s[])
{
    int i;
    g2k = 0;
    k2g = 0;
    ident = 0;
    i=0;
    while (s[i] != 0)
    {
        // isalpha liefert 0 (falsch), wenn das uebergebene
        // Zeichen kein alphanumerisches Zeichen ist
        // isalpha liefert 1 (wahr), wenn das uebergebene
        // Zeichen ein alphanumerisches ist
        if ( isalpha(s[i]) ) {
            if ( isupper(s[i]) ) {
                s[i] = tolower(s[i]);
                g2k++;
            } else if ( islower(s[i]) ) {
                s[i] = toupper(s[i]);
                k2g++;
            }
        } else{
            ident++;
        }
        i++;
    }
}

void convert2(char s[],int *pg2k,int *pk2g,int *pident)
{
    int i;
    *pg2k = 0;  // Initialisierung
    *pk2g = 0;
    *pident = 0;
    i=0;
    while (s[i] != 0)
    {
        if ( isalpha(s[i]) ) {
            if ( isupper(s[i]) ) {
                s[i] = tolower(s[i]);
                (*pg2k)++;
            } else if ( islower(s[i]) ) {
                s[i] = toupper(s[i]);
                (*pk2g)++;
            }
        } else{
            (*pident)++;
        }
        i++;
    }
}

void convert2a(char s[],int *pg2k,int *pk2g,int *pident)
{
    // diese Variante arbeitet zunaechst ohne Zeiger
    int i, g2k,k2g,ident;
    g2k = 0;  // Initialisierung
    k2g = 0;
    ident = 0;
    i=0;
    while (s[i] != 0)
    {
        if ( isalpha(s[i]) ) {
            if ( isupper(s[i]) ) {
                s[i] = tolower(s[i]);
                pg2k++;
            } else if ( islower(s[i]) ) {
                s[i] = toupper(s[i]);
                pk2g++;
            }
        } else{
            ident++;
        }
        i++;
    }
    *pg2k = g2k;  // Rueckgabe
    *pk2g = k2g;
    *pident = ident;
}
