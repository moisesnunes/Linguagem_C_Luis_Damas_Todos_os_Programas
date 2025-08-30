> Capítulo 4 - Resoluções

1.

- 1.1 Verdade.
- 1.2 Falso. Só executam o corpo se a condição for Verdadeira.
- 1.3 Verdade.
- 1.4 Falso, todas as componentes são opcionais, embora se tenha sempre que manter os dois separadores das componentes (;).
- 1.5 Verdade.
- 1.6 Verdade, porque senão o compilador deixaria de saber que componentes perteciam a cada parte do laço for.
- 1.7 Falso, se a condição do laço for ou while for falsa no início, a instrução nunca é executada. Essa afirmação só é verdadeira para o laço do...while.
- 1.8 Falso. As cargas iniciais são sempre executadas um única vez.
- 1.9 Falso, a condição é sempre testada mais uma vez do que o número de vezes que a instrução é executada. Esse teste extra é realizado quando a condição é falsa, não sendo por isso executada a instrução.
- 1.10 Verdade.
- 1.11 Falso. Um laço é uma única instrução.
- 1.12 Verdade.
- 1.13 Verdade.
- 1.14 Verdade.
- 1.15 Falso. Nenhum laço o faz.
- 1.16 Falso. O laço é executado ENQUANTO a condição se verificar.
- 1.17 Verdade.
- 1.18 Falso. Termina o laço. O programa continua na instrução seguinte ao laço.
- 1.19 Verdade. Senão pode-se entrar numa situação de laço infinito.
- 1.20 Verdade.

2.

do...while

```c
do
    instrução;
while (condição);
```

while

```c
condição_aux = Verdade;
while (condição || condição_aux)
    instrução;
```

3.

for

```c
for (inic; condição; pos-inst)
    instrução
```

while

```c
inic;
while (condição)
    {intrução;
    pos-inst;
    }
```

4.

while

```c
while (condição)
    instrução;
```

for

```c
for (; condição ;)
    instrução
```

5. Nenhuma, o laço termina e o programa continua na instrução seguite.

6. A instrução continue, quando presente num laço while, termina a instrução do laço, passando a execução para a avaliação da condição. Quando presente no laço for, a instrução continue termina a execução da instrução, sendo em seguida executada a componente pós-instrução do laço for. Dessa forma, no laço while o programador terá que ter o cuidado de atualizar as variáveis de controle do laço antes de utilizar a instrução continue, a fim de evitar laços infinitos.

7. O seguinte trecho do programa

```c
i = 1;
while (i <= 20>)
    {if (i == 10)
        continue;
    else
        printf("%d\n", i);
        i++;
    }
```

não é equivalente ao trecho solicitado, pois quando a variável toma o valor 10 a instrução termina passando ao teste da condição sem que o valor da variável de controle tenha sido alterado. Obtém-se, assim, um laço infinito.

A resolução correta poderia ser realizada do seguinte modo:

```c
i = 1;
while (i <= 20)
    {if (i == 10)
        i++; /* atualiza a var. antes de voltar a testar a cond. */
        continue;
    else
        printf("%d\n", i);
    i++;
    }

```
