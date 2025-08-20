> Capítulo 2 - Exercícios Propostos

1. Indique quais das seguintes declarações estão corretas.

   - a) y int;
   - b) int;
   - c) integer x;
   - d) inta , b;
   - e) float f, g, c;
   - f) char ch1=ch2='A';
   - g) char ch1 = 'A', ch2 = 'A';

2. Uma variável inteira, quando é declarada, é sempre iniciada com ...

   - a) 0 (Zero)
   - b) 1 (Um)
   - c) Um valor aleatório
   - d) Um valor negativo

3. Indique, na seguinte lista, quais os identificadores corretos e incorretos de variáveis:

   - a) Valor
   - b) &xvar
   - c) dez%
   - d) a+b
   - e) \_Kabonga
   - f) MENOS
   - g) 10a
   - h) a10
   - i) main
   - j) F1

4. O nome de uma variável ...

   - a) deve indicar aquilo que ela armazena
   - b) deve ser o menor possível
   - c) deve ser o maior possível
   - d) deve ser o mais explícito possível
   - e) deve ser todo escrito em maiúsculas
   - f) pode, mas não deve, começar por underscore(\_)
   - g) pode conter mais do que um caractere

5. Associe os seguintes tipos aos correspondentes formatos de leitura e escrita.

```c
    int                 %e
    float               %ld
    char                %f
    short int           %d
    long int            %hd
    signed long int     %c
```

6. Indique quais das seguintes afirmações são verdadeiras e quais são falsas

   - a) O tipo float reserva espaço em memória para um real com precisão simples, enquanto o tipo double reserva espaço para uma viriável com precisão dupla.
   - b) O tipo char pode ter os prefixos long e short.
   - c) O tipo char pode ter os prefixos signed e unsigned.
   - d) Uma variável declarada como unsigned pode comportar valores superiores a uma outra que seja declarada como signed.
   - e) Uma variável do tipo char pode armazenar caracteres individuais ou conjuntos de caracteres também denominados por strings.
   - f) Uma variável do tipo char pode armazenar vários caracteres, desde que todos eles sejam caracteres ASCII.
   - g) Uma variável do tipo char pode armazenar vários caracteres, desde que sejam caracteres especiais.
   - h) O operador módulo (%) não pode ser utilizado em reais.

7. Identifique os erros de compilação que seriam detectados nos seguintes programas:

- 7.1

```c
#include <stdio.h>
main()
{
    int x, y, x;
}
```

- 7.2

```c
#include <stdio.h>
main()
{
    int x, y;
    float int = 5.23;
    printf("%f", int)
}
```

- 7.3

```c
#include <stdio.h>
main()
{
    int x=y=z=0;
    printf("%d %d %d \n",x,y,z);
}
```

8. Embora os programas que se seguem não tenham erros de compilação, identifique as causas de seu possível mau funcionamento.

- 8.1

```c
#include <stdio.h>
main()
{
            int n;
    scanf("Introduza um N° %d", &n);
    printf("O n° = %d\n", n);
}
```

- 8.2

```c
#include <stdio.h>
main()
{
            int n;
    printf("Introduza um N°");
    scanf("%d\n", &n);
    printf("O n° = %d\n", n);
}
```

- 8.3

```c
#include <stdio.h>
main()
{
            int n;
    printf("Introduza um N°");
    scanf("%f", &n);
    printf("O n° = %f\n", n);
}
```

9. Escreva um programa que solicite ao usúario uma determinada data e a mostre em seguida no formato dd/mm/aaaa.

10. Escreva um programa que solicite ao usúario uma determinada data no formato aaaa-mm-dd e a mostre em seguida no formato dd/mm/aaaa.
