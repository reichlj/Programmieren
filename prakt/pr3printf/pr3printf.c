#include <stdio.h>
int main(void)
{
  int i,j,k,n,m;
  float y;
  double x;
  char c;
  char* str;

  printf("Dies ist ein einfaches Beispiel\n");
  printf("Hier werden \n zwei Zeilen ausgegeben!\n\n");

  k = 10;
  printf("Wert %d wurde der Variablen k zugewiesen\n\n",k);

  n = 123;
  m = 234;
  printf("n = %d und m = %d\n\n", n, m);

  i = 10;
  x = 12.34;
  c = 'X';
  str = "abcdefg...";
  printf("Beispiel zu printf:\n");
  printf("%d, %f, %e, %c\n", i, x, x, c);
  printf("%s\n\n", str);

  j = 123;
  k = 6;
  printf("->%d<-\n", j);
  printf("->%4d<-\n", j);
  printf("->%5d<-\n", j);
  printf("->%*d<-\n\n",k, j);

  y = 123.625;
  printf("->%f<-\n", y);
  printf("->%.2f<-\n", y);
  printf("->%10.0f<-\n", y);
  printf("->%10.1f<-\n", y);
  printf("->%10.2f<-\n", y);
  printf("->%10.3f<-\n", y);
  printf("->%10.4f<-\n\n", y);

  /* Formatbuchstaben */
  printf("Formatbuchstaben\n");
  printf("->%i<-\n", 12345);
  printf("->%d<-\n", 12345);
  printf("->%f<-\n", 123.45);
  printf("->%e<-\n", 123.45);
  printf("->%E<-\n", 123.45);
  printf("->%c<-\n", 'E');
  printf("->%c<-\n\n", 69);

  /* Feldweite und Genauigkeit */
  printf("\nFeldweite und Genauigkeit\n");
  printf("->%10d<-\n", 12345);
  printf("->%3d<-\n", 12345);
  printf("->%12.4f<-\n", 123.45);
  printf("->%12.4e<-\n", 123.45);
  printf("->%8.3e<-\n", 123.45);
  printf("->%15.10e<-\n\n", 123.45);

  /* Flag - : linksbuendig */
  printf("\nFlag - : linksbuendig\n");
  printf("->%-10d<-\n", 12345);
  printf("->%-12.4f<-\n", 123.45);
  printf("->%-12.4e<-\n\n", 123.45);

  /* Flag + : Vorzeichen */
  printf("\nFlag + : Vorzeichen\n");
  printf("->%+d<-\n\n", 12345);

  /* Flag o : fuehrende Nullen */
  printf("\nFlag o : fuehrende Nullen\n");
  printf("->%010d<-\n", 12345);
  printf("->%012.4f<-\n\n", 123.45);

  /* Flag # : Praefix */
  printf("\nFlag # : Praefix\n");
  printf("->%d<-\n", 32);
  printf("->%x<-\n", 32);
  printf("->%X<-\n", 255);
  printf("->%#x<-\n", 32);
  printf("->%#X<-\n", 32);
  printf("->%#x<-\n", 255);
  printf("->%#X<-\n", 255);
  return 0;
}
