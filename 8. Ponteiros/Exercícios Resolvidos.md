> Capítulo 8 - Exercícios Resolvidos

\> Indique se são verdadeiras ou falsas as seguintes afirmações. Justifique.

**NULL é um outro nome para o delimitador de strings '\0'?**

Falso. NULL representa o endereço de memória número Zero, enquanto '\0' representa o caractere cujo código ASCII é igual a ZERO.

**O operador & permite-nos obter o enderço de uma variável. Permite também obter o endereço de um ponteiro.**

Verdade. Pois um ponteiro também é uma variável,portanto ocupa memória, logo tem um endereço de memória associado.

**O endereço de uma variável que ocupe mais que um byte de memória é o seu menor endereço.**

Verdade. É assim por construção de própia linguagem.

**Se x é um ponteiro e ptr um ponteiro para inteiros e ambos contêm no seu interior o número 100, então x+1 e ptr+1 apresentarão o número 101.**

Falso. Pois os inteiros, quando se deslocam, movem-se sempre o número de _bytes_ do tipo para onde apontam. Se um inteiro ocupasse dois _bytes_, então _x+1_ seria igual a _101_ e _ptr+1_ igual a _102_.

**O operador Asterisco(Apontado por) permite saber qual o valor de um ponteiro**.

Falso. O asterisco permite saber qual o valor apontado por um ponteiro, isto é, qual o valor que existe no endereço armazenado pelo ponteiro.

**Pode-se alterar o endereço inicial de um vetor atribuindo um valor ao nome do vetor**.

Falso. O nome de um vetor, apesar de ser um endereço, não pode ser alterado.

**Se p1 e p2 forem dois ponteiros para um vetor, então p2-p1-1 indica o número de elementos entre p1 e p2**.

Verdade, pois a subtração é uma operação permitida entre ponteiros.

**Se v for um vetor, então v == &v[0]**.

Verdade, porque o nome de um vetor é sempre igual ao endereço da sua primeira posição.

**É sempre possível saber dentro de uma função qual o número de elementos que um vetor contém**.

Falso. Quando se envia um vetor para uma função, apenas o endereço inicial é realmente passado à função. As duas estratégias que normalmente se usam para contornar tal problema são: colocar um marcador de final de vetor dentro do própio vetor(exemplo, o '\0' nas strings) ou enviar um outro parâmetro que indique à função quantos elementos se deve considerar no vetor.

\> Implemente a função

```
char *strchr(char *s, char ch)
```

que retorna o endereço da primeira ocorrêcia de _ch_ em _s_, caso não exista retorna NULL.(Note que é o endereço, e não o índice).

Escreva ainda um programa que solicite uma string e um caractere e mostre na tela os caracteres da string original que se encontram a partir do caractere lido(inclusive).

```c
#include <stdio.h>

char *strchr(char *str, char ch) /* Versão 1 */
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
        if (str[i] == ch)
            return &str[i];
    return NULL;
}

char *strchr1(char *str, char ch) /* Versão 2 */
{
    while (*str != '\0')
        if (*str == ch)
            return str;
        else
            str++;
    return NULL;
}

main()
{
    char s[100], c;

    printf("Introd. uma string: ");
    gets(s);
    printf("Introd. um char: ");
    scanf(" %c", &c);

    puts(strchr(s, c));
}
```

\> Declare e Inicie um vetor de strings em mostre-as, uma a uma, recorrendo simplesmente a ponteiros:

```c
#include <stdio.h>
#define N_STRINGS 3

main()
{
    char vetor[N_STRINGS][20] = {"Olá", "Antônio", "Susana"};
    char (*ptr)[20] = vetor; /* Ponteiro para vetores de 20 chars */

    char *p;

    while (ptr - vetor < N_STRINGS)
    {
        p = *ptr; /* p recebe a string apontada por ptr */
        while (*p)
            putchar(*p++);
        putchar('\n');
        ptr++;
    }
}
```

\> Suponha a seguinte declaração:

```
char s[] = "Exame";
char **pps; /* Ponteiro para Ponteiro para char */
char *ps;   /* Ponteiro para char */
```

- a) Qual o conjunto de instruções que escreveria de tal forma que as três variáveis ficassem de algum modo relacionadas entre si?

```
ps = s;     /* ou ps = &s[0] */
pps = &ps;
```

- b) Represente em um esquema de memória qual o estado em que fica a memória depois de executadas as instruções do item anterior, sendo a dimensão de cada caractere um byte. Coloque no mesmo esquema os endereços de todas as variáveis envolvidas.

|     |  s   |      |      |      |      |      |     |  ps  |     |     | pps  |     |     |     |
| --- | :--: | :--: | :--: | :--: | :--: | :--: | :-: | :--: | :-: | :-: | :--: | :-: | :-: | :-: |
|     |  E   |  x   |  a   |  m   |  e   |  \0  |     | 1100 |     |     | 2000 |     |     |     |
|     | 1100 | 1101 | 1102 | 1103 | 1104 | 1105 | ... | 2000 | ... | ... | 4500 | ... | ... | ... |

- c) Quais os parâmetros que se deverá colocar em cada _printf_ de tal forma que se obtenha a saída pretendida, sendo o primiero parêmetro sempre definido com base em s, o segundo com base em ps e o terceiro com base em pps?

```
printf("%c %c %c\n",        ,         ,         );      => E E E
printf("%c %c %c\n",        ,         ,         );      => x a m
printf("%c %c %c\n",        ,         ,         );      => e e e
printf("%d %d %d\n",strlen(), strlen(), strlen());      => 5 5 5
```

**Resolução**

```c
printf("%c %c %c\n", s[0]      , *ps        , **pps        );
printf("%c %c %c\n", s[1]      , *(ps+2)    , *(*pps+3)    );
printf("%c %c %c\n", s(s+4)    , ps[4]      , (*pps)[4]    );
printf("%d %d %d\n", strlen(s) , strlen(ps) , strlen(*pps) );
```

- d) Qual a saída da seguinte instruçãp?

```
printf("\n%d %d %d", &s[0], &ps, &pps)
```

A saída será 1100 2000 4500

Os endereços das variáveis foram colocados aletoriamente. A única restrição é que os elementos do vetor fiquem em posições contíguas e consecutivas.
