#include <stdio.h>
int main(void)
{
  int i,of,uf;
  unsigned u,ofu,ufu;

  i = 2147483647;
  of = i + 1;
  printf("of= %d\n",of);
  i = -2147483648;
  uf = i - 1;
  printf("uf= %d\n",uf);
  u = 4294967295;
  ofu = u + 1;
  printf("ofu= %u\n",ofu);
  u = 0;
  ufu = u - 1;
  printf("ufu= %u\n",ufu);
  return 0;
}
