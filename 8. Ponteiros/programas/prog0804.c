#include <stdio.h>

int strlen(char *s)
{
    char *ptr = s;     /* Guarda o endereço inicial */
    while (*s != '\0') /* Enquanto não chegamos ao fim */
        s++;           /* Incrementar o ponteiro */
    return (int)(s - ptr);
}

main()
{
    char Nome[100];

    printf("Introduza uma String: ");
    gets(Nome);

    printf("%d\n", strlen(Nome));
}
