#include <stdio.h>

main()
{
    int n;
    do
    {
        printf("Introd. um N°: ");
        scanf("%d", &n);
    } while (n < 1 || n > 100);
    printf("Foi Introduzido o n° %d\n", n);
}
