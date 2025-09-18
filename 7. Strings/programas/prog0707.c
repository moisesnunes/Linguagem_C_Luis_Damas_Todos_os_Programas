#define OP_SAIR "SAIR"

/* Coloca no Parâmetro Sobrenome a última palavra da string Nome. */
/* Em seguida, retira essa palavra da string Nome colocando '\0' */

void Separa(char *Nome, char *Sobrenome)
{
    int i, j;
    if (strcountc(Nome, ' ') == 0) /* Existe apenas uma ou zero palavras no nome */
    {
        Sobrenome[0] = '\0';
        return;
    }

    /* Existe a garantia que há um sobrenome */
    for (i = strlen(Nome) - 1, j = 0; Nome[i] != ' ';)
        Sobrenome[j++] = Nome[i--];
    Sobrenome[j] = '\0'; /* Terminar a string Sobrenome */
    Nome[i] = '\0';      /* Retirar o sobrenome da String nome */

    /* Como a string Sobrenome foi colocada do fim para o princípio é necessário invertê-la */
    strrev(Sobrenome);
}

main()
{
    char Nome[100], Sobrenome[20];

    for (;;) /* Equivalente a while(1) */
    {
        printf("Nome: ");
        gets(Nome);
        if (stricmp(Nome, OP_SAIR) == 0)
            break; /* Sair do programa */
        Separa(Nome, Sobrenome);
        printf("%s, %s\n", wordupr(Sobrenome), wordupr(Nome));
    }
}
