#include <stdio.h>
#include <string.h>
int main(void)
{
  char str[51];
  int k, isPalindrom,n;
  printf("Zeichenkette eingeben:\n");
  scanf("%50s", str);    /* "%s" wäre gefährlich! */
  printf("->%s<-\n",str);

  n = strlen(str);
  isPalindrom = 1;
  k = 0;
  while (k < n/2)
  {
      if (str[k] != str[n-1-k])
      {
          isPalindrom = 0;
          break;
      }
      k = k +1;
  }
  if (isPalindrom == 1)
     printf("Palindrom\n");
  else
     printf("kein Palindrom\n");
  return 0;
}
