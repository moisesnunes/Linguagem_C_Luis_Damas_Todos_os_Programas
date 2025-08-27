> Capítulo 3 - Exercícios Resolvidos

> Escreva um programa que indique quantos segundos tem um determinado número de horas.

```c
#include <stdio.h>

main()
{
    int n_horas;
    long n_seg; /* pode ser muito grande */
    printf("N° de horas: ");
    scanf("%d", &n_horas);
    n_seg = n_horas < 0 ? 0 : n_horas * 3600L;
    printf("%d Horas tem %ld segundos\n", n_horas, n_seg);
}
```

Nota-se que o número de segundos pode ser obtido através da multiplicação do número de horas por 3600 segundos (número de segundos em uma hora). No entanto, a multiplicação entre dois inteiros devolve sempre um número inteiro e não um _long_, como era desejado. Para tal, temos que fazer o _casting_ com pelo menos um do valores operados.
Escolhemos a constante 3600 para promover a _long_. Essa promoção pode ser realizada através de (long) 3600 ou colocando **L** imediatamente após a constante.

```c
 n_seg = n_horas < 0 ? 0 : n_horas * 3600L;
```

Notar que esse tipo de _casting_ só pode ser realizado com constantes. Para variáveis teremos que realizar o _casting_ normal (long) var, pois um **L** junto ao nome da variável iria alterar o nome desta.

> Altere o programa anterior de tal forma que permita indicar, a partir de um determinado número de horas, quais os minutos, os segundos ou mesmo os décimos de segundo que esse número de horas contém.

```c
#include <stdio.h>

main()
{
    int n_horas;
    long res;
    char tipo;
    printf("N° de Horas: ");
    scanf("%d", &n_horas);
    printf("O que mostar (m/ s/ d): ");
    scanf(" %c", &tipo);
    if (tipo == 'm' || tipo == 'M')
        res = n_horas < 0 ? 0 : n_horas * 60L;
    else if (tipo == 's' || tipo == 'S')
        res = n_horas < 0 ? 0 : n_horas * 3600L;
    else if (tipo == 'd' || tipo == 'D')
        res = n_horas < 0 ? 0 : n_horas * 36000L;
    printf("%d --> %ld%c\n", n_horas, res, tipo);
}
```

> Resolva o mesmo enunciado utilizando um switch.

```c
#include <stdio.h>

main()
{
    int n_horas;
    long res;
    char tipo;
    printf("N° de Horas: ");
    scanf("%d", &n_horas);
    printf("O que mostar (m/ s/ d): ");
    scanf(" %c", &tipo);
    switch (tipo)
    {
    case 'm':
    case 'M':
        res = n_horas < 0 ? 0 : n_horas * 60L;
        break;
    case 's':
    case 'S':
        res = n_horas < 0 ? 0 : n_horas * 3600L;
        break;
    case 'd':
    case 'D':
        res = n_horas < 0 ? 0 : n_horas * 36000L;
        break;
    }
    printf("%d --> %ld%c\n", n_horas, res, tipo);
}
```

> Resolva o mesmo enunciado utilizando o switch, mas sem qualquer break. Suponha que o número de horas está corretamente escrito.

```c
#include <stdio.h>

main()
{
    int n_horas;
    long res;
    char tipo;
    printf("N° de Horas: ");
    scanf("%d", &n_horas);
    printf("O que mostar (m/ s/ d): ");
    scanf(" %c", &tipo);
    res = n_horas;
    switch (tipo)
    {
    case 'm':
    case 'M':
        res = res * 60;
    case 's':
    case 'S':
        res = res * 60;
    case 'd':
    case 'D':
        res = res * 10;
    }
    printf("%dh --> %ld%c\n", n_horas, res, tipo);
}
```
