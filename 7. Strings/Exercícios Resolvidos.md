> Capítulo 7 - Exercícios Resolvidos

\> Qual a diferença entre 'A' e "A"

'A' - Representa o caractere A (código ASCII 65) e ocupa um _byte_ apenas.
"A" - Representa uma _string_ formada por um único caractere. No entanto, como se trata de uma _string_ esta é armazenada num vetor de caracteres, sendo este terminado com o caractere delimitador das strings '\0'. Essa string ocupa assim dois _bytes_.

| 'A' | '\0' |
| --- | ---- |

'A' representa um tipo básico de C (char), enquanto "A" representa um vetor.

\> Existe alguma diferença entre um vetor de caracteres e uma string? Dê exemplos.

Existe. As strings são terminadas pelo caractere '\0', embora sejam armazenadas dentro de um vetor de caracteres.

Um vetor de caracteres não necessita de delimitador.

```
char s[] = "sSnN"; /* String com 4 caracteres + 1 (delimitador) */
Equivalente a char s[5] = "sSnN";
```

```
char s[] = {'s', 'S', 'n', 'N'}; /* Vetor com 4 caracteres */
```

\> Implemente a função **char *mygets(char *s)**, que lê uma string do teclado e a coloca no parâmetro da função(isto é, implementa a função gets). A função deverá ainda devolver a string lida.

```c
char *mygets(char *s)
{
    int i = 0, ch;
    while ((ch = getchar()) != '\n')
        s[i++] = ch;
    s[i] = '\0';
    return s;
}
```

\> Implemente a função **strset** cujo cabeçalho é:

```
char *strset(char *s, char ch)
```

Coloca em todas as posições da string **s** o caractere **ch**, devolvendo **s**.

```
strset("Alface", '#')       => "######"
strset("alf", 'A')          => "AAA"
```

```c
char *strset(char *s, char ch)
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
        s[i] = ch;
    return s;
}
```

\> Implemente a função **strupr** cujo cabeçalho é:

```
char *strupr(char *s)
```

Coloca todos oa caracteres da _string s_ em maiúsculas.

```
strupr("Teste Upper N°1")           => "TESTE UPPER N°1"
```

```c
char *strupr(char *s)
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
        s[i] = toupper(s[i]);
    return s;
}
```

**Nota**: A resolução dessa função utiliza a função **toupper**, o que torna necessário incluir o arquivo ctype.h fazendo #include <ctype.h>
