#include <stdio.h>

main()
{
    float salario;
    printf("Qual o Salário: ");
    scanf("%f", &salario);
    if (salario <= 0)
        printf("Salário: Valor Inválido\n");
    if (salario > 1000)
        printf("Imposto =  %.2f\n", salario * 0.10);
    else
        printf("Imposto =  %.2f\n", salario * 0.05);
}

/* O programa deveria ter sido escrito desta forma */

main()
{
    float salario;
    printf("Qual o Salário: ");
    scanf("%f", &salario);
    if (salario <= 0)
        printf("Salário: Valor Inválido\n");
    else if (salario > 1000)
        printf("Imposto =  %.2f\n", salario * 0.10);
    else
        printf("Imposto =  %.2f\n", salario * 0.05);
}
