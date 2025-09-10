> Capítulo 6 - Resoluções

1

- 1.1 Os índices do vetor variam entre 0 e 9, e não entre 1 e 10.

- 1.2 Depois de terminado o laço, o valor de i é 10, logo v[10] = 101; vai causar problemas, pois o vetor termina no índice 9.

- 1.3 A dimensão do vetor tem que ser uma constante ou expressão constante.

- 1.4 A declaração de um vetor obriga que todas as dimensões sejam explicitadas. (Erro de compilação). **Não se pode declarar vetores sem dimensão**.

- 1.5 O número de elementos que dá a carga inicial do vetor é superior à dimensão do vetor. (Erro de compilação).

- 1.6 Se colocar um ; após o #define, todas as ocorrências de MAX serão substituídas por 30;, isso irá provocar erros de sintaxe. Exemplo: int v[30;].

2.

```c
#include <stdio.h>

float max(float v[], int n); /* Declaração da Função */

float max(float v[], int n)
{
    int i;
    float maior = v[0];
    for (i = 0; i < n; i++)
        if (v[i] > maior)
            maior = v[i];
    return maior;
}

main() /* Programa de Teste */
{
    float x[] = {10.0, 20.0, 15.0, 50.0, 27.0};

    printf("O maior dos 3 primeiros elementos = %f\n", max(x, 3));
    printf("O maior dos 5 primeiros elementos = %f\n", max(x, 5));
}
```

3.

```c
#include <stdio.h>
#define MAX 3 /* Para test vamos o 3 */

void transpor(int v[MAX][MAX])
{
    int i, j, tmp;

    for (i = 0; i < MAX; i++)
        for (j = i + 1; j < MAX; j++)
        {
            tmp = v[i][j];
            v[i][j] = v[j][i];
            v[j][i] = tmp;
        }
}

void imprime(int v[][MAX])
{
    int i, j;

    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
            printf("%d ", v[i][j]);
        putchar('\n');
    }
}

main()
{
    int x[][MAX] = {{1, 2, 3},
                    {4, 5, 6},
                    {6, 7, 8}}; /* Matriz de 3x3 */

    puts("MATRIZ INCIAL");
    imprime(x);
    transpor(x);
    puts("DEPOIS DA INVERSÃO");
    imprime(x);
}
```

Notar que a troca de elementos num vetor deve ser realizada apenas para a metade dos valores, pois em cada troca são deslocados dois valores.

4.

```c
#include <stdio.h>

#define DIM 3
#define ESPACO ' '

void inic(char s[][DIM]);
void mostra(char s[DIM][DIM]);
int Linha(char v[], char c);
int Coluna(char g[DIM][DIM], int col, char ch);
int Diagonal(char g[DIM][DIM], char ch);
int Ganhou(char g[DIM][DIM], char ch);

/* Inicia o Tabuleiro */
void inic(char s[][DIM])
{
    int i, j;
    for (i = 0; i < DIM; i++)
        for (j = 0; j < DIM; j++)
            s[i][j] = ESPACO;
}

/* Mostra o aspecto do tabuleiro */
void mostra(char s[DIM][DIM])
{
    int i, j;
    for (i = 0; i < DIM; i++)
    {
        for (j = 0; j < DIM; j++)
            printf(" %c %c", s[i][j], j == DIM - 1 ? ' ' : '|');
        if (i != DIM - 1)
            printf("\n-----------");
        putchar('\n');
    }
}

/* Verifica se a n-ésima linha está preenchida com o char c */
int Linha(char v[], char c)
{
    return v[0] == v[1] && v[1] == v[2] && v[0] == c;
}

/* Verifica se a coluna col está toda preenchida com o char ch */
int Coluna(char g[DIM][DIM], int col, char ch)
{
    return g[0][col] == g[1][col] && g[1][col] == g[2][col] && g[0][col] == ch;
}

/* Verefica se alguma das diogonais está preenchida totalmente com o char ch */
int Diagonal(char g[DIM][DIM], char ch)
{
    return (g[0][0] == g[1][1] && g[2][2] == g[1][1] && g[0][0] == ch) ||
           (g[0][2] == g[1][1] && g[2][0] == g[1][1] && g[0][2] == ch);
}

/* Verifica se o jogador do caractere ch ganhou o jogo */
int Ganhou(char g[DIM][DIM], char ch)
{
    if (Linha(g[0], ch) || Linha(g[1], ch) || Linha(g[2], ch))
        return 1;
    if (Coluna(g, 0, ch) || Coluna(g, 1, ch) || Coluna(g, 2, ch))
        return 1;
    if (Diagonal(g, ch))
        return 1;
    return 0; /* Não ganhou o Jogo */
}

main()
{
    char Velha[DIM][DIM];
    int posx, posy;
    char ch = '0'; /* Caractere para jogar */
    int n_jogadas = 0;

    inic(Velha);
    while (1) /* Laço Infinito */
    {
        mostra(Velha);
        printf("\nIntroduza a Posição de Jogo Linha Coluna: ");
        scanf("%d %d", &posx, &posy);
        if (posx > DIM || posy > DIM)
        {
            printf("\n\n**** Valores Inválidos ****\n\n");
            continue; /* Proxima iteração */
        }
        posx--; /*Os índices do vetor começam em ZERO */
        posy--;
        if (Velha[posx][posy] == ESPACO) /* Casa Livre */
        {
            Velha[posx][posy] = ch = (ch == '0') ? 'X' : '0';
            n_jogadas++;
            if (Ganhou(Velha, ch)) /* Basta vereficar o jogador corrente */
            {
                printf("\n\n**** Ganhou o Jogador %c ****\n\n", ch);
                break;
            }
        }
        else
            printf("Posição já ocupada\nJogue Novamente!!!\n");
        if (n_jogadas == DIM * DIM)
        {
            printf("\n\n**** EMPATE TÉCNICO ****\n\n");
            break; /* Acabar o Laço */
        }
    }
    mostra(Velha);
}
```

5.

```c
char *memcpy(char *dest, char *orig, int n)
{
    int i;
    for (i = 0; i < n; i++)
        dest[i] = orig[i];
    return dest;
}
```

6. Notar que essa função terá que devolver um valor lógico indicando se os valores possuem os mesmos elementos nas n primeiras posições.

```c
int memcmp(char *s1, char *s2, int n)
{
    int i;
    for (i = 0; i < n; i++)
        if( s1[i] != s2[i])
            return 0; /* Não são iguais */
    return 1; /* Terminou o laço e todos os elementos são iguais */
}
```

7. Esta solução é semelhante à anterior. A única diferença é que devemos ignorar se cada um dos caracteres se encontra em maiúsculas ou minúsculas. Recorremos para tal à função toupper, que converte qualquer caractere para maiúsculas.

Nota: para ter acesso a essa função, o seu arquivo deverá conter _#include <ctype.h>_

```c
#include <ctype.h>

int memcmp(char *s1, char *s2, int n)
{
    int i;
    for (i = 0; i < n; i++)
        if( s1[i] != toupper(s2[i]))
            return 0; /* Não são iguais */
    return 1; /* Terminou o laço e todos os elementos são iguais */
}
```
