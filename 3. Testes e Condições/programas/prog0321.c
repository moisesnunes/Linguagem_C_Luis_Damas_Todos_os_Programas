#include <stdio.h>
/* Versão 1 */
main()
{
    int n;
    printf("Introd. um N°: ");
    scanf("%d", &n);
    if (n == 0)
        printf("Número é igual a zero\n");
    else
        printf("Número não é igual a zero\n");
}

#include <stdio.h>
/* Versão 2 */
main()
{
    int n;
    printf("Introd. um N°: ");
    scanf("%d", &n);
    if (!n)
        printf("Número é igual a zero\n");
    else
        printf("Número não é igual a zero\n");
}

#include <stdio.h>
/* Versão 3 */
main()
{
    int n;
    printf("Introd. um N°: ");
    scanf("%d", &n);
    if (n != 0)
        printf("Número é igual a zero\n");
    else
        printf("Número não é igual a zero\n");
}

#include <stdio.h>
/* Versão 4 */
main()
{
    int n;
    printf("Introd. um N°: ");
    scanf("%d", &n);
    if (n)
        printf("Número é igual a zero\n");
    else
        printf("Número não é igual a zero\n");
}
