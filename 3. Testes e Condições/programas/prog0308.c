#include <stdio.h>

/* Programa com má indentação */

main()
{
    int a, b;
    printf("Introduza dois n°s: ");
    scanf("%d%d", &a, &b);
    if (a >= 0)
        if (b > 10)
            printf("B é muito grande\n");
        else
            printf("A tem um valor negativo\n");
}

/* Programa com indentação correta */

main() 
{
    int a, b;
    printf("Introduza dois n°s: ");
    scanf("%d%d", &a, &b);
    if (a >= 0)
    {
        if (b > 10)
            printf("B é muito grande\n");
    }
    else
        printf("A tem um valor negativo\n");
}
