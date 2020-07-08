#include <stdio.h>

int main(void)
{
  char str[51];
  int i=0, g2k=0,k2g=0,ident=0;
  printf("Zeichenkette eingeben:\n");
  scanf("%50s", str);    /* "%s" wäre gefährlich! */
  while (str[i] != 0)
  {
     if ( 'A' <= str[i] && str[i] <= 'Z' )
     {
        str[i] = str[i] + 32;
        g2k++;
     }
     else if ( 'a' <= str[i] && str[i] <= 'z' )
     {
        str[i] = str[i] - 32;
        k2g++;
     }
     else
     {
        ident++;
    }
    i++;
  }
  printf("%s\n", str);
  printf("gross -> klein: %d\n", g2k);
  printf("klein -> gross: %d\n", k2g);
  printf("unveraendert  : %d\n", ident);
}
