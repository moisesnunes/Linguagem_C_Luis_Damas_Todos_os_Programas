#include <stdio.h>

/* Devolve o soma de dois inteiros */
int soma(int a, int b)
{
    return a + b;
}

/* Devolve o dobro de qualquer inteiro */
int dobro(int x)
{
    return 2 * x;
}

main()
{
    int n, i, total;
    printf("Introd dois Números: ");
    scanf("%d%d", &n, &i);
    total = soma(n, i); /* Atribuição do resultado da função a uma variável */
    printf("%d+%d=%d\n", n, i, total);
    printf("2*%d=%d e 2*%d=%d\n", n, dobro(n), i, dobro(i));
}
