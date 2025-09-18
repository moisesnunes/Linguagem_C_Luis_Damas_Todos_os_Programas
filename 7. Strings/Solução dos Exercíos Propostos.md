> Capítulo 7 - Resoluções

1.

```c
char Nome[25+1];
ou
char Nome[26];
```

2.

- 2.1

```c
int strcounta(char *s) /* isalpha: Necessário <ctype.h> */
{
    int i, conta;
    for (i = conta = 0; s[i] != '\0'; i++)
        if (isalpha(s[i])) /* Se o caractere for alfabético */
            conta++;       /* Incrementat o contador */
    return conta;
}
```

- 2.2

```c
char *init_str(char *s)
{
    s[0] = '\0';
    return s;
}
```

- 2.3

```c
int ult_ind_chr1(char *s, char c) /* Versão 1 */
{
    int i, ind = 1;
    for (i = 0; s[i] != '\0'; i++)
        if (s[i] == c)
            ind = i;
    return ind;
}

int ult_ind_chr2(char *s, char c) /* Versão 2 */
{
    int i;
    for (i = strlen(s) - 1; i >= 0; i--)
        if (s[i] == c)
            return i;
    return -1;
}
```

- 2.4

```c
char *strlwr(char *str)
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
        str[i] = tolower(str[i]); /* tolower: Necessário <ctype.h */
    return str;
}
```

- 2.5

```c
char *strnset(char *s, char ch, int n) /* Versão 1 */
{
    int i;
    for (i = 0; s[i] != '\0' && i < n; i++)
        s[i] = ch;
    return s;
}

char *strnset(char *s, char ch, int n) /* Versão 2 */
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
        if (i < n)
            s[i] = ch;
        else
            break;
    return s;
}
```

- 2.6

```c
int stricmp(char *s1, char *s2) /* toupper: Necessário <ctype.h */
{
    int i = 0;
    while (toupper(s1[i]) == toupper(s2[i]) && s1[i] != '\0')
        i++;
    return (toupper(s1[i]) - toupper(s2[i]));
}

```

3.

- 3.1

```c
char *repeticoes(char *s)
{
    int i, j;
    for (i = j = 0; s[i] != '\0'; i++)
        if (strcountc(s, s[i]) > 1) /* Ocorre mais que 1 vez */
            s[j++] = s[i];
    s[j] = '\0';
    return s;
}
```

- 3.2

```c
char n_esimo(char *s, int n)
{
    return s[n - 1]; /* Pois os índices dos vetores começam em 0 */
}
```

- 3.3

```c
char *strpack(char *s)
{
    int i, j;
    for (i = j = 0; s[i] != '\0'; i++)
        if (s[i] != s[j])
            s[++j] = s[i];
    s[++j] = '\0';
    return s;
}
```

- 3.4

```c
char *Entremeado(char *s, int n)
{
    int i, j, len = strlen(s);
    if (n == 0)
        return s;
    for (i = j = 0; i < len; i += n + 1)
        s[j++] = s[i];
    s[j] = '\0';
    return s;
}
```

- 3.5

```c
#define SPACE ' '

char *xspace(char *s)
{
    int i = strlen(s);                   /* i = n° caracteres em s */
    int N_Espacos = strcountc(s, SPACE); /* N° de Espaços em s */
    int Dim = 2 * i - N_Espacos;         /* Dimensão total da string resultado */

    s[Dim--] = '\0'; /* Delimitador */
    for (--i; i >= 0; i--)
        if (s[i] == SPACE)
            s[Dim--] = s[i]; /* É um espaço. Copiar apenas */
        else
        {
            s[Dim--] = SPACE; /* Colocar o espaço */
            s[Dim--] = s[i];  /* após este caractere */
        }
}
```

- 3.6

```c
char Max_Ascii(char *str)
{
    int i;
    char res = '\0'; /* Menor Código ASCII */
    for (i = 0; str[i] != '\0'; i++)
        res = res > str[i] ? res : str[i];
    return res;
}
```

- 3.7

```c
char Prox_Char(char *s)
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
        s[i] = s[i] + 1; /* Caractere ASCII Seguinte */
    return s;
}
```

- 3.8

Se o último caractere da tabela ASCII existir na string, quando for incrementada uma unidade vai ficar igual a 256, valor que não cabe num byte. No entanto, o valor armazenado vai corresponder ao caractere número ZERO.

Funciona como se os códigos dos caracteres dessem a volta e começassen de novo a partir do zero.

Dessa forma a string pode vir a terminar não no '\0' de origem, mas numa posição anterior que correspondia à posição ocupada pelo último caractere da tabela ASCII na string original.

- 3.9

```c
char *UpDown(char *s) /* Versão 1 */
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
        if (i % 2 == 0) /* Se for par */
            s[i] = toupper(s[i]);
        else /* Se for ímpar */
            s[i] = tolower(s[i]);
    return s;
}

char *UpDown(char *s) /* Versão 2 */
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
        s[i] = (i % 2 == 0) ? toupper(s[i]) : tolower(s[i]);
    return s;
}
```

Notar que ambas as soluções necessitam do #include<ctype.h> por causa das funções _tolower_ e _toupper_.

- 3.10

```c
char *allspace(char *s) /* Versão 1 */
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
        s[i] = ' ';
    return s;
}

char *allspace(char *s) /* Versão 2 */
{
    return strset(s, ' ');
}
```

- 3.11

```c
char *strijset(char *s, int i, int j, char ch)
{
    if (i >= strlen(s))
        return s;
    while (i <= j && s[i] != '\0')
        s[i++] = ch;
    return s;
}
```

- 3.12

```c
char *strduplica(char *s)
{
    int i, len = strlen(s);
    for (i = 0; i < len; i++)
        s[i + len] = s[i];
    s[i + len] = '\0';
    return s;
}
```

- 3.13

```c
int atoi(char *s) /* Necessário #include <ctype.h> */
{
    int i = 0, res = 0, sinal = 1;
    if (s[0] == '-' || s[0] == '+')
        i = 1; /* Começa após o 1° caractere */
    if (s[0] == '-')
        sinal = -1; /* É um n° negativo */

    for (; isdigit(s[i]); i++)
        res = res * 10 + s[i] - '0';
    return res * sinal;
}
```

**Nota**: Esta função parte da bibioteca-padrão de C e, para utilizá-la, basta colocar o #include <stdlib.h>.

Repare que se a string for igual a "123" o processamento é o seguinte

```
res = 0
res = res*10 + 1 = 0*10 + 1 = 1
res = res*10 + 2 = 2*10 + 1 = 12
res = res*10 + 3 = 3*10 + 1 = 123
```

No entanto, é bom salientar que para obter, por exemplo, o inteiro 4 correspondente ao caractere '4' é necessário subtrair o valor do código ASCII do caractere '0'.

**Exemplo**:

```
4 = '4' - '0'
```

- 3.14

```c
char *wordupr(char *s)
{
    int i;
    s[0] = toupper(s[0]); /* O primeiro fica sempre em maiúscula */
    for (i = 1; s[i - 1] != '\0'; i++)
        if (s[i - 1] == ' ') /* Se o caractere anterior for um espaço */
            s[i] = toupper(s[i]);
        else
            s[i] = tolower(s[i]);
    return s;
}
```

- 3.15

```c
char *lower_upper(char *s)
{
    int i, existem_trocas = 1, len = strlen(s);
    char tmp; /* Aux para a realização da troca de caracteres */

    while (existem_trocas)
    {
        existem_trocas = 0;
        for (i = 0; i < len - 1; i++)
            if (isupper(s[i]) && islower(s[i]))
            {
                tmp = s[i];
                s[i] = s[i + 1];
                s[i + 1] = tmp;
                existem_trocas = 1;
            }
    }
    return s;
}
```

- 3.16

```c
char *All_Big(char *s)
{
    int i, j;
    for (i = j = 0; s[i] != '\0'; i++)
        if (isupper(s[i]))
            s[j++] = s[i];
    s[j] = 0;
    return s;
}
```

- 3.17

```c
int Is_Len_Ok(char *string, int comprimento)
{
    return strlen(string) == comprimento;
}
```

- 3.18

```c
int Is_Alfa_Digit(char *s)
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
        if (i % 2 == 0)
            if (!isalpha(s[i]))
                return 0;
            else if (!isdigit(s[i]))
                return 0;
    return 1;
}
```

- 3.19

```c
char *Transform(char *s) /* Versão 1 */
{
    int i, len = strlen(s);
    for (i = 0; i < len; i++)
        if (i < len / 2)
            s[i] = tolower(s[i]);
        else
            s[i] = toupper(s[i]);
    return s;
}

char *Transform(char *s) /* Versão 2 */
{
    int i, len = strlen(s) - 1;
    for (i = 0; i < len; i++, len--)
    {
        s[i] = tolower(s[i]);
        s[len] = toupper(s[len]);
    }
    return s;
}
```
4.
