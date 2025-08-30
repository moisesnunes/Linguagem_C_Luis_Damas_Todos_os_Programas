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

8.

```c
#include <stdio.h>

main()
{
    int i, j, n;

    printf("Qual o N° de Ramos: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
            putchar('*');
        putchar('\n');
    }
}
```

Notar que o laço externo indica qual o número de linhas que vamos mostrar (n linhas). No entanto, cada uma das linhas tem que mostrar apenas o número de asteriscos igual ao número da linha em questão, de forma a mostrar um triângulo.

Dessa forma, o laço interno terá que iterar apenas um número de vezes igual ao número da linha em que se está nessa altura. Depois de escritos todos os asteriscos de uma linha, é necessário mudar de linha.

Este é um exemplo típico de um laço interno cujo número de iterações depende do valor da variável de controle do laço externo.

9.

```c
#include <stdio.h>

main()
{
    int i, j, n;

    printf("Qual o N° de Ramos: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
            putchar('A' + i - 1);
        putchar('\n');
    }
}
```

Repare que na primeira linha queremos escrever a letra 'A', na segunda a letra 'B' (que é igual a 'A'+1) e assim sucessivamente. Podemos, assim, usar uma variável que controla as linhas para ir acrescentando uma unidade ao caractere a ser escrito em cada uma das linhas. No entanto, como a variável i começa com o valor 1 e não 0, como seria desejável para escrever a letra 'A' na primeira linha,somos obrigados a subtrair uma unidade a cada caractere escrito para obter o caractere correto.

10.

```c
#include <stdio.h>

main()
{
    int n;
    do
    {
        printf("Introd. um N°: ");
        scanf("%d", &n);
    } while (n < 1 || n > 100);
    printf("Foi Introduzido o n° %d\n", n);
}
```

11.

```c
#include <stdio.h>

main()
{
    int i, conta;
    char ch;
    for (i = 0, conta = 1; i <= 255; i++)
    {
        printf("%3d --> %c\n", i, (char)i);
        if (conta == 20)
        {
            do
            {
                printf("Pressione c ou C para continuar ...");
                scanf(" %c", &ch);
            } while (ch != 'c' && ch != 'C');
            conta = 1;
        }
        else
            conta++;
    }
}
```

12.
