#include <stdio.h>

#define DIM 3
#define ESPACO ' '

void inic(char s[][DIM]) /* Omitir uma dimensão */
{
    int i, j;
    for (i = 0; i < DIM; i++)
        for (j = 0; j < DIM; j++)
            s[i][j] = ESPACO;
}

void mostra(char s[DIM][DIM]) /* Ambas as Dimensões */
{
    int i, j;
    for (i = 0; i < DIM; i++)
    {
        for (j = 0; j < DIM; j++)
            printf(" %c %c", s[i][j], j == DIM - 1 ? ' ' : '|');
        if (i != DIM)
            printf("\n-----------");
        putchar('\n');
    }
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
        posx--; /* Pois os índices do vetor começam com 0 */
        posy--;
        if (Velha[posx][posy] == ESPACO) /* Casa Livre */
        {
            Velha[posx][posy] = ch = (ch == '0') ? 'X' : '0';
            n_jogadas++;
        }
        else
            printf("Posição já ocupada\nJogue Novamente!!!\n");
        if (n_jogadas == DIM * DIM)
            break; /* Acabar o Programa */
    }
    mostra(Velha);
}
