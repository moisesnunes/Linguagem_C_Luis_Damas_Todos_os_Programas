#include <stdio.h>

main()
{
    int i, j, n;

    printf("Qual o N° de Ramos: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
            putchar('*');
        putchar('\n');
    }
}
