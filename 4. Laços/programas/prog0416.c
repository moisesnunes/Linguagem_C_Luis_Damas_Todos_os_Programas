#include <stdio.h>

main()
{
    int i, j, n;
    printf("Introd. um N°: ");
    scanf("%d", &n);
    for (i = 1, j = n; i <= n; i++, j--)
        printf("%d  %d\n", i, j);
}

/* Com apenas duas variáveis */

#include <stdio.h>

main()
{
    int i, n;
    printf("Introd. um N°: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        printf("%d  %d\n", i, n - i + 1);
}
