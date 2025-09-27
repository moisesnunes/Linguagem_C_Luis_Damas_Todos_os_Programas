#include <stdio.h>

unsigned fat(int n)
{
    unsigned i, res = 1; /* Pois vamos realizar multiplicações */
    for (i = 1; i <= n; i++)
        res *= i; /* res = res * i */
    return res;
}

main()
{
    int k;
    while (scanf("%d", &k)) /* Enquanto Introduzir números */
        printf("%d! = %u\n", k, fat(k));
}
