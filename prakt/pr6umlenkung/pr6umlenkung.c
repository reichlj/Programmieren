#include <stdio.h>
#include <math.h>
int main(void)
{
  double y;
  int grad;

  scanf("%d", &grad);
  y = sin(grad*M_PI/180);
  printf("sin(%d) = %5.3f\n", grad, y);
  printf("Grad  Sinuswert\n");
  for (grad=0; grad<=90;grad=grad+10) {
      y = sin(grad*M_PI/180);
      printf("%5d%11.4f\n",grad,y);
  }
  return 0;
}
