#include <stdio.h>

main()
{
    int x;
    printf("Introduza um N°: ");
    scanf("%d", &x);
    if (x > 0)
        printf("Número Positivo\n");
    else
        printf("Número Negativo\n");
}
