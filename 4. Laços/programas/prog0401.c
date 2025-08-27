#include <stdio.h>

main()
{
    int i;
    i = 1;
    while (i <= 10)
    {
        printf("%d\n", i);
        i = i + 1;
    }
}

/* Operadores ++ e -- */

main()
{
    int i;
    i = 1;
    while (i <= 10)
    {
        printf("%d\n", i);
        i++;
    }
}

/* Outra forma */

main()
{
    int i;
    i = 1;
    while (i <= 10)
        printf("%d\n", i++);
}
