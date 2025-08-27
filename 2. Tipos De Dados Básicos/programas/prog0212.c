#include <stdio.h>

main()
{
    char ch1, ch2;
    printf("Introduza um Caractere: ");
    scanf("%c", &ch1);
    printf("Introduza outro Caractere: ");
    scanf("%c", &ch2);
    printf("Os caracteres introduzidos foram '%c' e '%c'\n", ch1, ch2);
}

/* programa correto */

#include <stdio.h>

main()
{
    char ch1, ch2;
    printf("Introduza um Caractere: ");
    scanf("%c", &ch1);
    printf("Introduza outro Caractere: ");
    scanf(" %c", &ch2); /* espaço em branco */
    printf("Os caracteres introduzidos foram '%c' e '%c'\n", ch1, ch2);
}
