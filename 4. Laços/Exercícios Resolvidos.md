> Capítulo 4 - Exercícios Resolvidos

> Escreva um programa em C que escreva na tela toda a tabela ASCII(0..255 chars), escrevendo em cada linha o código ASCII e o caractere correspondente.

**Exemplo**:
...
65 --> A
66 --> B
67 --> C
...

```c
#include <stdio.h>

main()
{
    int i;
    for (i = 0; i <= 255; i++)
        printf("%3d --> %c\n", i, (char)i);
}
```

Declara-se uma variável do tipo inteiro (i) que percorre todos os 256 caracteres da tabela ASCII (0..255), escrevendo-a em cada iteração no formato decimal (usando três dígitos -- %3d) e como caractere.

Note que se fosse declarada uma variável do tipo char para percorrer todos os caracteres o programa entraria em laço infinito, pois quando esta tivesse o valor 255 (que é o valor máximo que um char pode conter) e fosse incrementada de uma unidade passaria a ter novamente o valor zero, nunca sendo falsa a condição de teste do laço, resultando assim em um laço infinito.

Em geral, os compiladores conseguem detectar essa situação e apresentam um _Warning_ (não um erro) para avisar que foi detectado um laço infinito ou uma condição sempre verdadeira.

> Escreva um programa que solicite ao usúario um número e escreva simultaneamente a sequência crescente e descrecente entre 1 e esse número.

**Exemplo**:

Introd. um N°: 5
1 5
2 4
3 3
4 2
5 1

```c
#include <stdio.h>

main()
{
    int i, j, n;
    printf("Introd. um N°: ");
    scanf("%d", &n);
    for (i = 1, j = n; i <= n; i++, j--)
        printf("%d  %d\n", i, j);
}
```

> Resolva o mesmo problema utilizando apenas duas variáveis.

```c
#include <stdio.h>

main()
{
    int i, n;
    printf("Introd. um N°: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        printf("%d  %d\n", i, n - i + 1);
}
```

> Escreva um programa que solicite ao usúario um número e um caractere. Em seguida, terá que preencher n linhas, cada um delas com n caracteres.

**Exemplo**:

    Introd. um N°: 3
    ntrod. um Char: *
    ***
    ***
    ***

```c
#include <stdio.h>

main()
{
    int i, j, n;
    char ch;

    printf("Introd. um N°: ");
    scanf("%d", &n);
    printf("Introd. um Char: ");
    scanf(" %c", &ch);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
            putchar(ch);
        putchar('\n');
    }
}
```

Nota: Não esquecer o espaço em branco antes de %c para retirar o <<ENTER>> que ficou no buffer do teclado, depois de introduzido o inteiro.

> Escreva um programa que solicite ao usúario um número. Em seguida escreva todos os números inteiros a partir desse número, exceto os múltiplos de 3. Quando encontrar o primeiro múltiplo de 10 a execução termina.

**Exemplo**:

Introd. um N°: 13
13
14
16
17
19

```c
#include <stdio.h>

main()
{
    int i, n;

    printf("Introd. um N°: ");
    scanf("%d", &n);

    for (i = n;; i++) /* Laço Infinito */
    {
        if (i % 10 == 0) /* Mútiplo de 10 */
            break;
        else if (i % 3 == 0)
            continue;
        printf("%d\n", i);
    }
}
```

Começamos o laço no número introduzido pelo usúario. Em seguida implementamos um laço inifinito (sem condição dentro do laço for), em que caso i seja múltiplo de 10 terminamos o laço (e o programa, nesse caso), através da instrução break. Caso i seja múltiplo de 3 não o escrevemos na tela, passdando diretamente à próxima iteração através da instrução continue. Se nenhuma das condições anteriores se verificar, bastará escrever o número corrente.
