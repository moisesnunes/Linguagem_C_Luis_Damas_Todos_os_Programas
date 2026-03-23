#include <stdio.h>

/* Troca: Exemplo Não correto */

void troca(int a, int b); /* Protótipo da função */

main()
{
    int n, k;
    puts("Introd. dois N°s Inteiros:");
    scanf("%d %d", &n, &k);
    printf("Antes da troca n = %d e k = %d\n", n, k);
    troca(n, k); /* Trocar n com k */
    printf("Depois da troca n = %d e k = %d\n", n, k);
}

void troca(int a, int b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}
