> Capítulo 2 - Exercícios Resolvidos

> Escreva um programa em C que peça ao usúario dois inteiros e apresente o resultado da realização das operações aritméticas tradicionais.

```c
#include <stdio.h>

main()
{
    int a, b;
    printf("Introduza dois Inteiros: ");
    scanf("%d%d", &a, &b);
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);
    printf("%d %% %d = %d\n", a, b, a % b);
}
```

> Escreva um programa em C que solicite um determinado número de segundos e, em seguida, indique quantas horas, minutos e segundos esse valor representa.

```c
#include <stdio.h>

main()
{
    long int n_segundos;
    printf("Introduza n N° de segundos: ");
    scanf("%ld", &n_segundos);
    printf("Horas : %d\n", (int)n_segundos / 3600);
    printf("Minutos : %d\n", (int)n_segundos % 3600 / 60);
    printf("Segundos : %d\n", (int)n_segundos % 60);
}
```

> Escreva um programa em C que solicite um determinado número real e mostre qual a sua parte inteira e a sua parte fracionária.

```c
#include <stdio.h>

main()
{
    float x;
    printf("Introduza um N° real: ");
    scanf("%f", &x);
    printf("Parte Inteira: %d\n", (int)x);
    printf("Parte Fracionaria: %f\n", x - ((int)x));
}
```
