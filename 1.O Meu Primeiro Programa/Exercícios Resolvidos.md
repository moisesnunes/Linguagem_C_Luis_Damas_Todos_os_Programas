> Capítulo 1 - Exercícios Resolvidos

> Escreva um programa em C que apresente a seguinte saída:

1 - Clientes
2 - Fornecedores
3 - Faturas

0 - Sair

```c
#include <stdio.h>
main()
{
    printf("1 - \tClientes\n"); /* \t para colocar uma tabulação */
    printf("2 - \tFornecedores\n");
    printf("3 - \tFaturas\n\n"); /* Mais uma linha em Branco */
    printf("0 - \tSair\n");
}
```

> Escreva um programa em C que apresente duas linhas com a _string_ "Aqui vai um Apito", ouvindo-se ao final de cada _string_ um sinal sonoro.

```c
#include <stdio.h>

main()
{
    printf("Aqui vai um Apito\a\n"); /* \a sinal sonoro */
    printf("Aqui vai um Apito\7\n"); /* \7 ou \a representam o mesmo caractere */
}
```

> Escreva um programa em C que indique qual o significado dos seguintes caracteres especiais: \n, \\, \t, %%.

```c
#include <stdio.h>

main()
{
    printf("Programa que apresenta os Caracteres Especiais\n\n");
    printf("\\n\t-\t<ENTER>\n"); /* Saída: \n - <ENTER> */
    printf("\\\\\t-\t\\\n");     /* Saída: \\ - \       */
    printf("\\t\t-\t<TAB>\n");   /* Saída: \t - <TAB>   */
    printf("%%%%\t-\t%%\n");     /* Saída: %% - % */
}
```
