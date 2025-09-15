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
            conta++;
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
