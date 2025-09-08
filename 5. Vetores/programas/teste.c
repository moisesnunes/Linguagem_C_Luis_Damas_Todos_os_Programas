#include <stdio.h>
#define DIM 3

main()
{
    char Velha[DIM][DIM] = {{' ', ' ', ' '},
                            {' ', ' ', ' '},
                            {' ', ' ', ' '}};
    int i, j;

    Velha[0][0] = 'X';
    Velha[1][1] = 'X';
    Velha[0][2] = '0';
    Velha[2][2] = '0';

    for (i = 0; i < DIM; i++)
    {
        for (j = 0; j < DIM; j++)
            printf(" %c %c", Velha[i][j], j == DIM - 1 ? ' ' : '|');
        if (i != DIM)
            printf("\n-----------\n");
    }
}
