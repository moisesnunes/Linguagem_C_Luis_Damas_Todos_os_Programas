#include <stdio.h>

main()
{
    int num = 1000;
    printf("Introduza um Caractere: ");
    scanf("%lc", &num); /* no lugar de %c coloque lc para o gcc */
    printf("O valor de num = %d cujo caractere = '%c'\n", num, (char)num);
}
