#include <stdio.h>
int main(void)
{
  float ps, kw, ps_to_kw;
  int typ;

  ps_to_kw = 0.73549875;

  printf("Umwandlung kW nach PS mit 1\n");
  printf("Umwandlung PS nach kW mit 2\n");
  printf("Auswahl eingeben: ");
  scanf("%d", &typ);

  if ( typ == 1 )
  {
      printf("Leistung in kW eingeben:\n");
      scanf("%f", &kw);
      ps = kw/ps_to_kw;
  }
  else
  {
      printf("Leistung in PS eingeben:\n");
      scanf("%f", &ps);
      kw = ps*ps_to_kw;
  }

  printf("Leistung in kW %f\n", kw);
  printf("Leistung in PS %f\n", ps);
  return 0;
}
