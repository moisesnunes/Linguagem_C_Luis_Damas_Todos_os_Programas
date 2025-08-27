#include <stdio.h>

main()
{
    char ch1 = 'X', ch2 = 'y';
    printf("Introduza um Inteiro: ");
    scanf("%hhd", &ch2); /* no lugar de %d coloque %hhd para o gcc */
    printf("O valor de ch1 = '%c' e ch2 = '%c'\n", ch1, ch2);
}
