/*
  Verschachtelte For-Schleifen
*/
#include <stdio.h>
int main(void)
{
  int z, s;

  for(z = 1; z < 5; z = z + 1)
  {
    // aeussere Schleife
    for(s = 1; s < 6; s = s + 1)
    {
      // innere Schleife - Element in einer Zeile ausgeben
      printf("i%d/j%d\t", z, s);
    }
    printf("\n"); /* neue Zeile beginnen */
  }
  return 0;
}

