> Capítulo 9 - Resumo

Em C existe apenas passagem de parâmetros por valor,isto é,sempre que invocamos uma função,passando-lhe argumentos para os respectivos parâmetros, estamos na realidade enviando cópias dos valores originais. Dessa forma,qualquer alteração nos parâmetros de uma função ou procedimento não altera o argumento correspondente que foi passado à função.

Para conseguir alterar o conteúdo de uma variável passada como argumento a uma função é necessário passar a função, não a variável(pois seria passada uma cópia desta), mas sim o endereço, recebendo a função esse valor num ponteiro para o tipo da variável. Em seguida, as operações sobre ponteiros permitem alterar o valor original da variável invocadora.

É possível receber, dentro de um programa, os parâmetros que foram passados a esse mesmo programa na linha de comando através de dois parâmetros que a função main pode conter. O primeiro é um inteiro, normalmente denominado **argc** e que indica qual o número de parâmetros que foram passados ao programa(nome do programa incluído). O outro parâmetro, normalmente denominado **argv**, é um vetor de strings com todas as strings passadas na linha de comando.

Por exemplo, suponha a seguinte linha de comando:

```
$ prog alfa 123 x 55a
```

O valor de argc será 5(e não 4, pois inclui o nome do executável).

O vetor argv irá conter as strings passadas na linha de comando. Notar que todos os parâmetros são armazenados como strings(números incluídos).

|         | ... |       |       |       |       |     |
| :-----: | :-: | :---: | :---: | :---: | ----- | --- |
| argv[0] | ... |   p   |   r   |   o   | g     | \0  |
| argv[1] | ... |   a   |   l   |   f   | a     | \0  |
| argv[2] | ... |   1   |   2   |   3   | \0    |     |
| argv[3] | ... |   x   |  \0   |       |       |     |
| argv[4] | ... |   5   |   5   |   a   | \0    |     |
| argv[5] | ... | **N** | **U** | **L** | **L** |     |

O vetor argv é sempre criado com uma posição suplementar onde é colocado o símbolo NULL, indicador de que as strings do vetor já terminaram.

C é uma linguagem com capacidade _recursiva_, isto é, uma função pode invocar a si própia, diretamente ou indiretamente, através de uma outra função.

A recursividade é uma técnica de desenvolvimento particularmente útil na implementação de alguns algoritmos de pesquisa,poupando muito tempo aos programadores.

No entanto, é necessário salientar que uma função recursiva é, em geral, mais lenta que a sua correspondente iterativa devido ao custo adicional (_overhead_) necessário para as diversas chamadas à função.
