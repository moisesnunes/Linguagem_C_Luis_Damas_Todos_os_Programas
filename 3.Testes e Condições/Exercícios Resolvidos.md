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
