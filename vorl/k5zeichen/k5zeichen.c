#include <stdio.h>
#include <ctype.h>
void pruefe(char z);

int main(void)
{
  char z='a';

  while ( z != 'e' ) {
   printf("Zeichen eingeben :\n");
   scanf("%c",&z);
   fflush(stdin);
   printf("  ASCII-Code    z= ->%d<-\n",z);
   printf("  ASCII-Zeichen z= ->%c<-\n",z);
   pruefe(z);
  }

  strcpy("a","b");
return 0;
}
void pruefe(char z)
{
  if ( isalnum(z) )
     printf("  alnum\n");
  if ( isdigit(z) )
     printf("  Ziffer\n");
  if ( iscntrl(z) )
     printf("  Steuerzeichen\n");
  z=toupper(z);
  printf("  %c ASCII-Code %d\n",z,z);
}


