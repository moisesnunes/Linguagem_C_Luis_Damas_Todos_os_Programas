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

5.

```c
char *First_Vogal(char *s)
{
    const char vogais[] = "aeiou";
    int i;
    for (i = 0; s[i] != '\0'; i++)
        if (strchr(vogais, tolower(s[i])) != NULL)
            return &s[i];
    return NULL;
}
```

6.

```c
/* Copia os caracteres de orig para dest do fim para o princípio */

char *strrcpy(char *dest, char *orig)
{
    int len;
    for (len = strlen(orig); len >= 0; len--)
        dest[len] = orig[len];
    return dest;
}

char *strins(char *dest, char *orig)
{
    strrcpy(dest + strlen(orig), dest);
    memcpy(dest, orig, strlen(orig));
    return dest;
}
```

Na resolução deste exercício foi necessáro implementar um função que realizasse a cópia do final para o íncio da string, uma vez que ela poderá ter que ser copiada para cima dela própia.

Começa-se por copiar a string existente no destino para a posição **strlen(orig), pois a string origem irá ocupar **strlen(orig) caracteres na string **dest**.

Depois usa-se a função _memcpy_, e não a função _strcpy_ para copiar a string orig para dest, porque a função memcpy não coloca o terminador '\0' que iria apagar o primeiro caractere da string dest anterior, terminando aí a strinhg resultado.

7.

```
a) pv = v;      /* ou pv = &v[0]; */
   ppv = &pv;
```

- b)

|     |  v  |     |     |     |     |     |     | pv  |     |     | ppv |     |     |     |
| :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: | --- | --- | --- | --- | --- | --- |
|     | 10  | 20  | 30  | 40  | 50  |     |     | 100 |     |     | 500 |     |     |     |
|     | 100 | 101 | 102 | 103 | 104 | ... | ... | 500 | ... | ... | 700 |     |     |     |

A única restrição em relação aos endereços a serem usados é que todos os elementos do vetor fiquem em posições contíguas de memória.

- c)

```c
printf("%c %c %c\n", v[0]      , *pv        , **ppv        );
printf("%c %c %c\n", v[1]      , *(pv+1)    , *(*ppv+1)    );
printf("%c %c %c\n", v[2]      , pv[3]      , (*ppv)[4]    );
printf("%d %d %d\n", *v-1      , *(pv+1)-1  , *(*ppv+2)-1  );
```

- d) Colocaria na tela(usando os enderços apresentados em b)

```
100 500 700
```

8.

```c
char *StrDelUpper(char *s)
{
    char *prim, *ptr;
    prim = ptr = s;

    while (*s) /* Equivalente a while (s*!='\0') */
    {
        if (!isupper(*s))
            *ptr++ = *s;
        s++;
    }
    *ptr = '\0';
    return prim;
}
```

9.

```c
char *StrDelStr(char *s1, char *s2)
{
    char *loc = strstr(s1, s2);
    if (loc != NULL) /* Se s2 existir em s1 */
        strcpy(loc, loc + strlen(s2));
    return s1;
}
```

10.

- a)
  px = &x;
  py = &y;

|     |     | 106 |
| :-: | :-: | :-: |
|     |     | 105 |
|     |     | 104 |
|  y  |  3  | 103 |
| py  | 103 | 102 |
| px  | 100 | 101 |
|  x  |  2  | 100 |

- b)

```
printf("%d %d\n",   x,   y);    => 2    3
printf("%d %d\n", *px, *py);    => 2    3
printf("%d %d\n", &px, &py);    => 101 102
```

- c)
  Se ele fizer px = py então

|     |     | 106 |
| :-: | :-: | :-: |
|     |     | 105 |
|     |     | 104 |
|  y  |  3  | 103 |
| py  | 103 | 102 |
| px  | 100 | 101 |
|  x  |  2  | 100 |

printf("%d %d %d %d %d %d %d %d", x, &x, px, *px, y, &y, py, *py)

2 100 103 3 3 103 103 3
