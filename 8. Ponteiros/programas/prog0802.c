#include <stdio.h>

main()
{
    char s[100];
    char *ptr = s; /* Aponta para o primeiro caractere de s */

    printf("Introduza uma String: ");
    gets(s);

    if (*ptr == '\0') /* String Vazia */
        return;       /* ou return 0 se der erro de compilação */

    /* Imprimir a string normalmente */

    while (*ptr != '\0')
        putchar(*ptr++);

    /* Imprimir a string ao contrário */

    ptr--; /* Por causa do '\0' */

    while (ptr >= s) /* Enquanto ptr for >= que &s[0] */
        putchar(*ptr--);
}
