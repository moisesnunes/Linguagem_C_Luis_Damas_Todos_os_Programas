#include <stdio.h>
#include <string.h>

char *strrchr0(char *str, char ch) /* Versão 1 */
{
    int i;
    char *ptr = NULL;
    for (i = 0; str[i] != '\0'; i++)
        if (str[i] == ch)
            ptr = &str[i];
    return ptr;
}

char *strrchr1(char *str, char ch) /* Versão 2 */
{
    char *ptr = str + strlen(str) - 1; /* Colocar no ult. char da string */
    while (ptr >= str)
        if (*ptr == ch)
            return ptr;
        else
            ptr--;
    return NULL;
}

main()
{
    char Nome[100];
    char *Sobrenome;
    printf("Introd. uma string: ");
    gets(Nome);

    Sobrenome = strrchr0(Nome, ' ');
    if (Sobrenome == NULL) /* Não tem sobrenome. Não existe o espaço */
        Sobrenome = Nome;
    else
        Sobrenome++; /* Pois estava apontado o espaço em branco */
    puts(Sobrenome);
}

char *StrDelStr(char *s1, char *s2)
{
    char *loc = strstr(s1, s2);
    if (loc != NULL) /* Se s2 existir em s1 */
        strcpy(loc, loc + strlen(s2));
    return s1;
}
