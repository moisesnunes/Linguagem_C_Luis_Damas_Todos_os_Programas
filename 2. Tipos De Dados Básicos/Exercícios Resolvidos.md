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

**Nota**: Note que, para escrever o caractere % num printf(pois é um caractere com um significado especial) é necessário escrever %%.

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

**Nota**: Nesse programa o número de horas é calculado através do quociente da divisão inteira entre o número total de segundos e o número de segundos contidos em uma hora (3600).
O número de minutos é calculado através do quociente da divisão dos seguntos restantes (os quais podem ser obtidos através do resto da divisão anterior) dividido pelo número de segundos contidos em um minuto (60).
O número de segundos é simplesmente obtido pelo resto da divisão entre o número total de segundos e 60 (pois são apenas aqueles segundos que não cabem num minuto).

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

**Nota**: Para obter a parte inteira de um número real é necessário fazer a sua alteração para inteiro, fazendo o casting para o tipo int. Assim, se x tivesse o valor 12.34, (int) x indicaria a parte inteira do float x (12). Para obter a parte fracionária, seria necessário retirar do valor x a sua parte inteira x - ((int) x).
x - ((int) x) é equivalente a 12.34 - ((int) 12.34), é equivalente a 12.32 - 12, que é igual a 0,34, que corresponde à parte fracionária do número real de x.
