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

```c
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
```

\> Implemente a função

```c
float Pot(float x, int n)
```

Devolva o valor de x^n

```
x^0 = 1.0
x^n = x*x* ... *x (n vezes)
```

```c
#include <stdio.h>

float Pot(float x, int n)
{
    float res;
    int i;

    for (i = 1, res = 1.0; i <= n; i++)
        res *= x; /* res = res * x; */
    return res;
}

main()
{
    printf("%f %f %f\n", Pot(2.0, 4), Pot(1.234, 3), Pot(3.0, 0));
}
```
