/*
  Verschachtelte For-Schleifen
*/
#include <stdio.h>
int main(void)
{
  int i, j;

  for(i = 1; i < 5; i = i + 1)
  {
    // aeussere Schleife
    for(j = 1; j < 6; j = j + 1)
    {
      // innere Schleife
      printf("i%d/j%d\t", i, j);
    }
    printf("\n");
  }
  return 0;
}

