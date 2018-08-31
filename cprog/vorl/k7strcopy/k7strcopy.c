#include <stdio.h>
#include <string.h>
int main (void)
{
  char name[8];
  char save[4];

  printf("Name eingeben :\n");
  scanf("%s", name);
  strcpy(save, name);
  printf("name ->%s<-\n",save);
  printf("save ->%s<-\n",save);
  return 0;
}
