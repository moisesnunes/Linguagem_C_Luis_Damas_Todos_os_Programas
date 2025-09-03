#include <stdio.h>

linha(int num, char ch)
{
    int i;
    for (i = 1; i <= num; i++)
        putchar(ch);
    putchar('\n');
}

main()
{
    linha(3, '+');
    linha(5, '+');
    linha(7, '-');
    linha(5, '*');
    linha(3, '*');
}

/* O "tipo" void */

/* Como o programa deveria ter sido escrito */

void linha(int num, char ch)
{
    int i;
    for (i = 1; i <= num; i++)
        putchar(ch);
    putchar('\n');
}

main()
{
    linha(3, '+');
    linha(5, '+');
    linha(7, '-');
    linha(5, '*');
    linha(3, '*');
}
