#include <stdio.h>

int Ler_Inteiro(char *Prompt)
{
    int n;
    do
    {
        printf(Prompt);
        scanf("%d", &n);
    } while (n < 0);
    return n;
}

main()
{
    int Idade, Total;
    Idade = Ler_Inteiro("Introd. a Idade: ");
    Total = Ler_Inteiro("Qual o Total a Depositar?\n\t");
}

/* #include <stdio.h>

int Ler_Inteiro(char *Prompt)
{
    int n;
    char buf[100];
    do
    {
        printf("%s", Prompt);
        if (!fgets(buf, sizeof(buf), stdin))
            return 0; // EOF: return 0 como fallback
if (sscanf(buf, "%d", &n) != 1)
{
    printf("Entrada inválida. Digite um inteiro.\n");
    n = -1; // força repetição
}
else if (n < 0)
{
    printf("Por favor insira um número não-negativo.\n");
}
}
while (n < 0)
    ;
return n;
}

int main(void)
{
    int Idade, Total;
    Idade = Ler_Inteiro("Introd. a Idade: ");
    Total = Ler_Inteiro("Qual o Total a Depositar?\n\t");
    printf("Idade lida: %d\nTotal lido: %d\n", Idade, Total);
    return 0;
}
*/
