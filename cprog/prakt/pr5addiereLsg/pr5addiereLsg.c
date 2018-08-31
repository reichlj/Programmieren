#include <stdio.h>
int addiere(int param1, int param2);
int main(void)
{
    int x = 10, y = 20, erg;

    erg = addiere(x, y);
    printf("Funktion 'main':\n");
    printf("erg: %d\n\n", erg);
    return 0;
}
int addiere(int param1, int param2)
{
    int ret;
    ret = param1 + param2;
    printf("Funktion 'addiere'\n");
    printf("param1: %d, param2: %d\n", param1, param2);
    printf("ret: %d\n\n", ret);
    return ret;
}
