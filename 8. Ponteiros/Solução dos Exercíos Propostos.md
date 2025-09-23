> Capítulo 8 - Soluções

1.

|  **Usando s**   |   **Usando ptr**    | **Valor** |
| :-------------: | :-----------------: | :-------: |
| s[2] ou \*(s+2) | ptr[2] ou \*(ptr+2) |    'r'    |
|   s ou &s[0]    |         ptr         |   1000    |
|  s+1 ou &s[1]   |        ptr+1        |   1001    |
| (não aplicável) |        &ptr         |   5000    |

2.

- 2.1 - O operador **&**(Endereço de).
- 2.2 - O caractere asterisco **\***.
- 2.3 - Coloca-se entre o tipo para o qual aponta e o nome da variável.
- 2.4 - Um endereço.
- 2.5 - NULL
- 2.6 - Designa-se por _Apontado por_ e representa-se através de um asterisco **\***.
- 2.7 - \*(&ptr) == ptr
- 2.8 - v[0] ou _v ou _(v+0)
- 2.9 - Porque os elementos de qualquer vetor ocupam sempre posições contíguas de memória.
- 2.10 - float \*\*var;

3.

```c
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
```

4.

```c
char *strstr(char *str1, char *str2)
{
    int i, ii, j, len = strlen(str1) - strlen(str2);
    for (i = 0; i <= len; i++)
    {
        for (ii = i, j = 0; str1[ii] == str2[j] && str2[j] != '\0'; j++, ii++)
            if (str2[j] == '\0')
                return str1 + i;
        return NULL;
    }
}
```
