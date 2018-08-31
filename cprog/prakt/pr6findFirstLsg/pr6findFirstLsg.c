#include <stdio.h>

int find_first(char *str,char zeichen);
int find_first2(char str[],char zeichen);

int main(void)
{
    int pos;
    char s[51],z;

    printf("Zeichenkette:\n");
    scanf("%50s",s);
    printf("Zeichen: ");
    fflush(stdin);
    scanf("%c",&z);
    pos = find_first(s,z);   // find_first(&s[0],z);
    if ( pos>=0 )
        printf("Zeichen '%c' an Position %d\n\n",z,pos);
    else
        printf("Zeichen '%c' nicht gefunden\n\n",z);

    pos = find_first2(s,z);  // find_first2(&s[0],z);
    if ( pos>=0 )
        printf("Zeichen '%c' an Position %d\n",z,pos);
    else
        printf("Zeichen '%c' nicht gefunden\n",z);
    return 0;
}

// Variante 1 : Zeigernotation
int find_first(char *str,char zeichen)
{
    int i=0;
    while (str[i] != 0) {        // *(str+i) != 0
        if ( str[i] == zeichen)  // *(str+i) == zeichen
            return i;
        i++;
    }
    return -1;
}

// Variante 2 : Vektornotation
int find_first2(char str[],char zeichen)
{
    int i=0;
    while (str[i] != 0) {
        if ( str[i] == zeichen)
            return i;
        i++;
    }
    return -1;
}
