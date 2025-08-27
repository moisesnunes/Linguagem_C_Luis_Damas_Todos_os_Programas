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
