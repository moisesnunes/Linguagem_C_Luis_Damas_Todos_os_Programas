> Capítulo 5 - Exercícios Resolvidos

\> Escreva a função _x_isdigit_, que verifica se um determinado caractere é dígito ou não. Escreva um programa de teste da função.

```c
#include <stdio.h>

int x_isdigit(char ch)
{
    return (ch >= '0' && ch <= '9');
}

/* Escreve todos os caracteres não dígitos */

main()
{
    char c;
    while (1) /* Termina com CTRL-C */
    {
        c = getchar();
        if (!x_isdigit(c)) /* se não for dígito */
            putchar(c);
    }
}
```

Neste exemplo, o programa lê (infinatamente) caracteres do teclado e apenas escreve aqueles que não são dígitos. Ora, um caractere é dígito quando está entre '0' ... '9'. Nota-se que a função poderia ter utilizado os códigos ASCII dos caracteres (48...57); ficaria, no entanto, muito menos legível e só estaria adaptado a computadores que funcionassem com a condificação ASCII.

\> Escreva a função _x_toupper_, que transforma qualquer caractere na maiúscula correspondente. Escreva um programa de teste da função.
