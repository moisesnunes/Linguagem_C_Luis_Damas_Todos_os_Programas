> Capítulo 9 - Exercícios Resolvidos

Suponha **v** um vetor de inteiros.

\> Qual o resultado da seguinte expressão: **v == &v[0]?** Justifique.

O resultado é verdadeiro, pois o nome de qualquer vetor corresponde sempre ao endereço do primeiro elemento desse vetor(o qual se encontra na posição de índice zero).

\> Por que, sendo _p_ apenas um ponteiro para inteiro _(int \*)_ e fazendo previmente _p=v_, se consegue obter o valor de todos os elementos de _v_ utilizando apenas _p_?

Porque sendo _p_ um ponteiro para inteiros e sendo iniciado com o endereço do primeiro elemento do vetor, aponta para o início do vetor. A partir daí, e porque os elementos de um vetor ocupam sempre posições consecutivas de memória, poderemos navegar ao longo das posições do vetor através de incrementos ou decrementos do ponteiro e obter os valores presentes em cada uma das posições através do operador \*(apontado por).

\> Por que uma função recursiva é, em geral, mais lenta que a sua equivalente iterativa?

Devido ao custo adicional associado. Sempre que se faz uma chamada recursiva é necessário empilhar todos os parâmetros na memória e criar um ambiente para a execução da nova função; todas essas operações consomem algum tempo, que irá se revelar importante em funções que sejam muito utilizadas.

\> Escreva um programa que receba parâmetros na linha de comando, os troque internamente e os mostre em seguida pela ordem em que ficaram.

**Exemplo**:

```
$ prog0910 alfa beta parâmetros trocados

trocados parâmetros beta alfa prog0910
```

```c
#include <stdio.h>

main(int argc, char *argv[])
{
    int i = 0;
    char *ptr; /* Para auxiliar na troca */

    for (i = 0; i < argc / 2; i++)
    {
        ptr = argv[i];
        argv[i] = argv[argc - i - 1];
        argv[argc - i - 1] = ptr;
    }
    for (i = 0; i < argc; i++)
        puts(argv[i]);
}
```

\> Suponha um programa (denominado capa) que aproveita os parâmetros passados na linha de comando.

Suponha que ele seja invocado com a seguinte linha de comando:

```
capa -123 5 beta sigma
```

Preencha o quadro seguinte indicando os valores em falta, recorrendo sempre a expressões baseadas em argc e/ou argv.

Observação: Coloque aspas e aspas simples para diferenciar entre strings e caracteres.

| a) argc               |      |
| --------------------- | ---- |
| b) argv[3]            |      |
| c) argv[argc-2]       |      |
| d) \*argv[2]          |      |
| e) atoi(argv[1])      |      |
| f) atoi(argv[1]+1)    |      |
| g) isdigit(???????)   | True |
| h) toupper(??????)    | 'S'  |
| i) toupper(???????)+1 | 'C'  |
| j) \*\*argv           |      |

- a) O valor de argc é 5(não esquecer que o próprio programa também é levado em conta).
- b) **"beta"**
- c) argv[argc-2] é igual a argv[5-2], qual é igual a argv[3], que é igual a **"beta"**
- d) argv[2] é igual à _string_ "5"
- e) \*argv[2] corresponde ao primeiro caractere da _string_, isto é, **'5'**.
- f) A função atoi retorna o valor inteiro contido na _string_. Lopo **-123**
- g) argv[1] é igual a "-123". Através de operações sobre ponteiros chega-se à conclusão de que argv[1]+1 é igual a "123", donde atoi("123") é igual ao inteiro **123**.
- h) Nesse caso teremos que preencher o espaço ocupado pelos ?????.

A função isdigit retorna True sempre que recebe um caractere que representa um dígito. No exemplo anterior existiam quatro hipóteses possíveis.

```
isdigit(argv[1][1])     =>  '1'
isdigit(argv[1][2])     =>  '2'
isdigit(argv[1][3])     =>  '3'
isdigit(argv[2][0])     =>  '5'
```

- i) Para obter um 'S' usando a função toupper, bastará encontrar um 's' no conjunto de caracteres do argv.

```
toupper(argv[4][0]) ou toupper(*argv[4])
```

- j) Nesse caso pretende-se obter um 'C'. Repare que a expressão que lhe deverá dar origem é toupper (???)+1. Por isso, o resultado de toupper(???) deverá corresponder a 'B', bastando para isso procurar um 'b' ou 'B' no argv.

```
toupper(argv[3][0])+1 ou toupper(*argv[3])+1
```

- k)
  argv - é o conjunto de todas as strings passadas na linha de comando.
  \*argv - corresponde à primeira string.
  \*\*argv - corresponde ao primeiro caractere de \*argv, isto é,o primeiro caractere da primeira string - 'k'.

\> Implemente a função Pot que devolve o valor de x^n
