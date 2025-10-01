> Capítulo 9 - Exercícios Propostos

1. Implemente as seguintes funções que manipulam apenas valores inteiros:

```
iszero - Verifica se o parâmetro _n_ é ou não zero.
add1 - Adiciona 1 ao própio parâmetro _n_.
zero - Coloca zero no parâmetro _n_.
```

2. Implemente a função **Ler_Inteiro** que devolve o inteiro lido. O parâmetro _prompt_ contém a mensagem que solicita o inteiro ao usúario. Deverá receber apenas inteiros superiores ou iguais a zero.

```
int Ler_Inteiro(char \*prompt)
```

3. Transforme a função anterior de tal forma que o inteiro seja colocado num parâmetro enviado ao **procedimento** Ler_Inteiro.

4. Escreva, de forma iterativa e recursiva, a função de _Fibonacci_ que é definida da seguinte forma:

```
Fib(0) = 1
Fib(1) = 1
Fib(n) = Fib(n-1) + Fib(n-2), para n >= 2
```

Em seguida, escreva um programa que apresente o resultado da execução das duas funções na tela e verifique, comparativamente, os tempos de cálculo de ambas as funções para Fib(35) e Fib(40).

5. Implemente, de forma recursiva, a função **strcat** que concatena duas strings.

6. Escreva, recursivamente, a função

```
char *strchr(char *str, char ch)
```

que retorna o endereço em que se encontra o caractere _ch_ na _string str_. Caso não exista, devolve NULL.

7. Implemente a função **Exp** que calcula o valor da seguinte expressão, sendo todos os componentes do tipo inteiro:

![](./img/img2.png)

8. Alguns compiladores permitem que a função main receba um terceiro parâmetro (além de _argc_ e _argv_), que também é um vetor de strings e contém as variáveis de ambiente do sistema operacional. A sua estrutura é semelhante ao argv, mas não contém um contador associado. No entanto, após a última variável de ambiente sempre é colocado um NULL.

Todas as variáveis de ambiente têm um nome seguido do sinal de igual e do valor que contêm.

**Exemplo**:

```
COMSPEC=E:\WINDOWS\COMMAND.COM
PROMPT=$p$g
PATH=E:\WINDOWS;E:\WINDOWS\COMMAND;C:\DOSFAX;C:\DOS;C:\BATS
TEMP=C:\TMP
```

Implemente um programa que liste todas as variáveis de ambiente existentes no seu computador.

Atenção: Esta possibilidade pode não estar presente no compilador que você está usando.

9. Escreva um programa semelhante ao anterior em que sejam apresentados apenas os valores das variáveis de ambiente(à direita do sinal = ).
