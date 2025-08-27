#include <stdio.h>

main()
{
    int x;
    printf("Introduza um N°: ");
    scanf("%d", &x);
    if (x != 0)
        printf("%d não e zero!!!\n");
    else
        printf("%d é igual a zero!!!\n");
}

/* O programa também pode ser escrito desta forma */

main()
{
    int x;
    printf("Introduza um N°: ");
    scanf("%d", &x);
    if (x) /* em vez de if (x!=0) */
        printf("%d não e zero!!!\n");
    else
        printf("%d é igual a zero!!!\n");
}
