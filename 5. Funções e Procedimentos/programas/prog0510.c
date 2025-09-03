#include <stdio.h>

int x_toupper(char ch)
{
    if (ch >= 'a' && ch <= 'z') /* Se minúscula */
        return ch + 'A' - 'a';
    else
        return ch; /* Devolve a própia */
}

/* Escreve todos os caracteres em maiúsculas */

main()
{
    char c;
    while (1) /* Termina com CTRL_C */
    {
        c = getchar();
        putchar(x_toupper(c));
    }
}
