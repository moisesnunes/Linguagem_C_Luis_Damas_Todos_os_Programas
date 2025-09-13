#include <stdio.h>

main()
{
    char Nome[50];
    while (1) /* Laço Infinito */
    {
        puts("Nome:");
        gets(Nome);
        if (Nome[0] == '\0') /* Se a string estiver vazia */
            break;           /* Terminar o laço */
        else
            printf("Nome Introduzido: %s\n", Nome);
    }
}
