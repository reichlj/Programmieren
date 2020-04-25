#include <stdio.h>
int main(void)
{
  int zahl, qsumme;
  
  print("Zahl eingeben: ");
  scanf("%d",&zahl);
  print("eingelesene Zahl: %d\n",zahl);
  do
  {
     qsumme = 0;
	 while (zahl!=0)
 	 {
	   lz = zahl%10;
	   qsumme = qsumme + lz;
	   zahl = zahl /10;
	   printf("zahl=%d qsumme=%d\n",zahl,qsumme);
	 }
	 if (qsumme%2 == 0)
 	    print("Quersumme gerade\n");
	 else
 	    print("Quersumme gerade\n");
     print("Zahl eingeben: ");
     scanf("%d",&zahl);
     print("eingelesene Zahl: %d\n",zahl);
  }  while (zahl != 0);
  return 0;
}