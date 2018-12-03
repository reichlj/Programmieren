#include <stdio.h>

#define DIM 3

int a[DIM][DIM] = { { 1, 2, 3 },
                    { 4, 5, 6 },
                    { 7, 8, 9 } };

int b[DIM][DIM] = { { 1, 4, 7 },
                    { 2, 5, 8 },
                    { 3, 6, 9 } };

int istransponiert (void);

int main(void)
{
    int erg;

    erg = istransponiert ();
    if (erg == 0)
       printf("a ist nicht b transponiert!\n");
    else
       printf("a ist b transponiert!\n");
    b[1][2] = 13;
    erg = istransponiert();
    if (erg == 1)
       printf("a ist b transponiert!\n");
    else
       printf("a ist nicht b transponiert!\n");
    return 0;
}

int istransponiert(void)
{
    int row, col;
    for (row = 0; row < DIM; row++)
    {
        for (col = 0; col < DIM; col++)
        {
            if (a[row][col] != b[col][row])
                return 0;
        }
    }
    return 1;
}
