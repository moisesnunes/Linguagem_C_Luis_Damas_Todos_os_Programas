#include <stdio.h>

main()
{
    int i;
    for (i = 1; i <= 10; i = i + 1)
        printf("%2d\n", 2 * i);
}

/* Outra forma de escrever o programa */
main()
{
    int i;
    for (i = 2; i <= 20; i = i + 2)
        printf("%2d\n", i);
}
