> Capítulo 6 - Exercícios Resolvidos

\> Escreva um programa que declare um vetor com n=10 números reais e coloque na _i-ésima_ posição o resultado de i \* (n-i).

```c
#include <stdio.h>

const int n = 10;

main()
{
    float v[n];
    int i;
    for (i = 0; i < n; i++)
        v[i] = i * (n - i);

    for (i = 0; i < n; i++)
        printf("%f\n", v[i]);
}
```

\> Implemente a função

```
char * memset(char *[], char ch, int n)
```

que coloca nas n primeiras posições do vetor v o caractere ch, devolvendo o própio vetor v.

```c
char * memset(char *[], char ch, int n)
{
    int i;
    for (i = 0; i < n; i++)
        v[i] = ch;
    return v;
}
```

\> Escreva um programa que permita gerar uma jogada para um tipo de sena, indicando os números a apostar, os quais deverão ser criados aleatoriamente.

**Exemplo**:

    Quantos números quer apostar (0 - Terminar): 6
         1   2   3   4   5   6   7
         8   9  10  11  12  XX  14
        15  16  17  18  19  20  21
        XX  23  24  25  XX  27  28
        XX  XX  31  32  33  34  35
        36  37  38  39  XX  41  42
        43  44  45  46  47  48  49

    Quantos números quer apostar (0 - Terminar): 10
        XX   2   3   4   5  XX   7
        XX   9  10  11  12  13  14
        15  XX  17  18  19  20  XX
        22  23  24  25  26  27  28
        29  30  31  32  33  34  XX
        36  XX  38  39  XX  41  XX
        43  XX  45  46  47  48  49

    Quantos números quer apostar (0 - Terminar): 0

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMS 49      /* Total de N° do Jogo */
#define MIN_APOSTA 6 /* Aposta Minima - 6 N°s */
#define NUM_LIN 7    /* N° de n°s apres. por linha no volante */

/* Declaração de Funções */

void Inic_Random();
void Inic(int v[NUMS]);
int Ler_Ns_Apostar();
void Gerar(int *v, int n);
void Apresentar(int res[]);

/* Inicia o gerador de n°s aleatórios com um n° que depende da hora que se executa a
função */
void Inic_Random()
{
    long ultime;
    time(&ultime);
    srand((unsigned)ultime);
}

/* Inic. com Zero o vetor de controle dos n°s selecionados */

void Inic(int v[NUMS])
{
    int i;
    for (i = 0; i < NUMS; i++)
        v[i] = 0;
}

/* Lê o n° de Números a apostar. Aceita valores entre MIN_APOSTA e NUMS. Aceita o valor ZERO para indicar que se quer terminar o Prog. */

int Ler_Ns_Apostar()
{
    int n;
    do
    {
        printf("Quantos N°s quer apostar (0 - Terminar): ");
        scanf("%d", &n);
    } while ((n < MIN_APOSTA || n > NUMS) && n != 0);
    return n;
}

/* Gera n números aleat. e coloca a respectiva posição do vetor com o valor 1 que indica que esse n° foi selecionado. */

void Gerar(int *v, int n)
{
    int i, indice;
    for (i = 1; i <= n; i++)
    {
        indice = rand() % NUMS; /* Devolve n° aleatório entre 0 e NUMS-1 */
        if (v[indice] == 0)
            v[indice] = 1;
        else     /* Este n° já tinha sido selecionado, */
            i--; /* logo decrementa-se o contador para voltar a calcular mais uma vez o i-ésimo n° aleatório */
    }
}

/* Apresenta o formato do volante colocando XX nos n°s selecionados para a aposta. */

void Apresentar(int res[])
{
    int i;
    for (i = 0; i < NUMS; i++)
    {
        if (res[i] == 0)
            printf("  %2d", i + 1);
        else
            printf("  XX");
        if ((i + 1) % NUM_LIN == 0)
            putchar('\n');
    }
    putchar('\n');
}

main()
{
    int vetor[NUMS];
    int n_nums; /* N° de Números para Jogar no jogo 6..49 */

    Inic_Random();
    while (1)
    {
        Inic(vetor);
        if ((n_nums = Ler_Ns_Apostar()) == 0)
            break;
        Gerar(vetor, n_nums); /* Gerar os N° a Apostar */
        Apresentar(vetor);
    }
}
```

A primeira dificuldade associada a esse problema é a geração de números aleatórios.

A linguagem C fornece uma função _standard_(isto é, que existe em todos os compiladores e em todas as plataformas de desenvolvimento) denominada **rand**, sem parâmetros, que devolve um número aleatório entre _0_ e _RAND_MAX_(uma constante).
