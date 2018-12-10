#include <stdio.h>
int zerlege(int zahl,int teiler,int* zg_ganz,int* zg_rest);
int main()
{
    int n,k,ret;
    zerlege(19,4,&n,&k);
    printf("19/4 : n=%d k=%d\n",n,k);
    ret = zerlege(19,4,&n,&k);
    if (ret < 0)
        printf("Teiler is 0\n");
    else
       printf("19/4 : n=%d k=%d\n",n,k);
    ret = zerlege(19,0,&n,&k);
    if (ret < 0)
        printf("19/0 : Teiler is 0\n");
    else
       printf("19/0 : n=%d k=%d\n",n,k);
    zerlege(-7,4,&n,&k);
    printf("-7/4 : n=%d k=%d\n",n,k);
    return 0;
}

int zerlege(int zahl,int teiler,int* zg_ganz,int* zg_rest)
{
    if (teiler == 0)
       return -1;
    *zg_ganz = zahl/teiler;
    *zg_rest = zahl%teiler;
    return 0;
}
