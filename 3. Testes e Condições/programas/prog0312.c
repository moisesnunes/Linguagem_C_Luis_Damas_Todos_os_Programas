#include <stdio.h>

/* Programa com má implementação */

main()
{
    char Est_Civil;
    puts("Qual o Estado Civil: ");
    scanf(" %c", &Est_Civil); /* ou Est_Civil = getchar(); */
    switch (Est_Civil)
    {
    case 'C':
        printf("Casado\n");
    case 'S':
        printf("Solteiro\n");
    case 'D':
        printf("Divorciado\n");
    case 'V':
        printf("Viúvo\n");
    default:
        printf("Estado Civil Incorreto\n");
    }
}

/* Programa com implementação correta */

main()
{
    char Est_Civil;
    puts("Qual o Estado Civil: ");
    scanf(" %c", &Est_Civil); /* ou Est_Civil = getchar(); */
    switch (Est_Civil)
    {
    case 'C':
        printf("Casado\n");
        break;
    case 'S':
        printf("Solteiro\n");
        break;
    case 'D':
        printf("Divorciado\n");
        break;
    case 'V':
        printf("Viúvo\n");
        break;
    default:
        printf("Estado Civil Incorreto\n");
    }
}
