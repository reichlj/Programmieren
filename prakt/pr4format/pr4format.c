#include <stdio.h>
int main(void)
{int a, b, i;
for(a = 1; a <= 12; a=a+1)
{switch(a)
{case 2: b = 28; break;
case 4: case 6: case 9: case 11: b = 30; break;
default: b = 31; break;}
printf("Monat: %d\n", a);
for(i = 1; i <= b; i=i+1)
{printf("%2d ", i);
if(i % 10 == 0)
printf("\n");}
printf("\n\n");}
return 0;}
