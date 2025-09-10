> Capítulo 6 - Exercícios Propostos

1. Indique os erros de programação ou de compilação que os seguintes trechos apresentam:

1.1

```c
#include <stdio.h>
main()
{
    int v[10], i;
    for (i = 1; i <= 10; i++)
        v[i] = 0;
}
```

1.2

```c
#include <stdio.h>
main()
{
    int v[10], i;
    for (i = 0; i <= 10; i++)
        v[i] = 0;
    v[i] = 101;
}
```

1.3

```c
#include <stdio.h>
main()
{
    int i = 5;
    int v[i];
    for (i = 0; i <= 5; i++)
        v[i] = 0;
}
```

1.4

```c
#include <stdio.h>
main()
{
    int v[], i;
    for (i = 0; i <= 10; i++)
        v[i] = 0;
    v[i] = 101;
}
```

1.5

```c
#include <stdio.h>
main()
{
    int i;
    int v[3] = {10, 20, 30, 40, 50};
    for (i = 0; i < 10; i++)
        v[i] = 0;
    v[i] = 101;
}
```

1.6

```c
#include <stdio.h>
#define MAX 30;
main()
{
    int v[MAX];
    for (i = 0; i < 10; i++)
        v[i] = 0;
    v[i] = 101;
}
```

2. Implemente a função

```
float max(float v[], int n)
```

Que recebe um vetor de números reais e o número de elementos a considerar.
Retorna o maior número entre os n primeiros elementos do valor.

3. Implemente a função

```
void transport(int v[MAX][MAX])
```

Que transpõe a matriz v com MAX por MAX elementos.

4. Complete o programa que permite jogar o jogo da velha de forma que ele termine quando um jogador complete alguma linha, coluna ou diagonal.

5. Implemente a função

```
char * memcpy(char *dest, char *orig, int n)
```

que copia n caracteres do vetor de origem (orig) para o vetor destino (dest) e devolve o vetor dest.
**Nota**: Os seguintes cabeçalhos são equivalentes

```
char * memcpy(char *dest, char *orig, int n)

char * memcpy(char dest[], char *orig, int n)
```

6. Implemente a função

```
int memcmp(char *s1, char *s2, int n)
```

que verifica se as n primeiras posições dos vetores s1 e s2 são ou não iguais.

7. Implemente a função

```
int memicmp(char *s1, char *s2 int n)
```

que verifica se as n primeiras posições dos vetores s1 e s2 são ou não iguais, independentemente de estarem em maiúsculas ou minúsculas _(ignore case)_.
