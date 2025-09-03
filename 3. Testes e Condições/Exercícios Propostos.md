> Capítulo 3 - Exercícios Propostos

1. Por que razão variáveis do tipo _float_ não devem armazenar valores lógicos?

2. Indique quais, das seguintes afirmações, são verdadeiras e quais são falsas.

   - 2.1 O _else_ de um _if_ e facultativo.
   - 2.2 Num _if_ são necessários parênteses em torno da condição.
   - 2.3 O _if_ pode conter a palavra _then_ opcionalmente.
   - 2.4 Tanto a componente _if_ como a componente _else_ só podem conter uma única instrução.
   - 2.5 O _if_ tem que estar numa linha diferente do else.
   - 2.6 Na condição do _if_ pode ser colocada uma constante, uma variável ou uma expressão.

3. Como consegue uma instrução _if-else_ saber onde termina o _if_ e começa o _else_, ou se o _if_ tem ou não _else_.

4. Um bloco pode ser constituído por apenas uma instrução?

5. Depois de um bloco é obrigatório o uso de ; ?

6. Existe alguma diferença no funcionamento dos seguintes trechos?

```c
if (x == 0)          if (x = 0)
     printf("X");       printf("X");
else                 else
    printf("Y");        printf("Y");
```

7. A indentação facilita o processo de

   - a) Compilação
   - b) Linkagem
   - c) Execução
   - d) Programação

8. Um programa indentado é, em geral:

   - a) Mais rápido de executar que outro que não o seja.
   - b) Mais lento de executar que outro que não o seja.
   - c) Mais legível que outro que não seja indentado.
   - d) Menos legível que outro que não o seja.

9. Sempre que um copilador detecta um código mal identado:

   - a) Emite um erro.
   - b) Emite um "WARNING".
   - c) Escreve o arquivo corretamente indentado.
   - d) Um compilador não faz qualquer tipo de verificação da indentação.

10. Indique duas vantagens e duas desvantagens do _if-else_ em relação ao _switch_.

11. Será que a instrução _break_, quando apresentada dentro de um _if_, passa a execução automaticamente para o _else_?

12. Qual o valor lógico que as seguintes expressões enviam para o _if_?

```
    - a) if (10 == 5)
    - b) if ((2+3) == -(-2 -3))
    - c) if (x = 5)
    - d) if (x = 0)
```

13. Suponha x=4, y=6 e z=-1, qual o valor lógico das seguintes expressões:

```
    - a) if (x == 5)
    - b) if (x == 5 || z < 0)
    - c) if (y - x +z -1)
    - d) if (x == 4 || y >= z && ! (z))
```

14. Escreva, utilizando um único _if_, o seguinte código:

```
if (x == 0)
    if (y <= 32)
        printf("Sucesso!!!");
```

15. Identifique os erros de compilação que seriam detectados nos seguintes programas:

- 15.1

```c
#include <stdio.h>
main()
{
    int x;
    if (x==0)
        break;
    else
        printf("X não é zero\n");
}
```

- 15.2

```c
#include <stdio.h>
main()
{
    int x;
    if (x == 0)
        then
            printf("X é zero\n");
    else
        printf("X não é zero\n");
}
```

- 15.3

```c
#include <stdio.h>
main()
{
    int x;
    switch (x)
    {
    case 1:
        printf("um");
        break;
    case 2:
        printf("dois");
        break;
        else : printf("Nem um nem dois");
    }
}
```

16. Escreva um programa, de quatro formas distintas, que leia um inteiro e indique se esse inteiro é ou não igual a zero.

17. Reescreva o programa anterior com um _switch_.

18. Escreva um programa que verifique se um ano é bissexto ou não.

19. Escreva um programa que indique o número de dias existentes em um mês (fevereiro = 28 dias).

    - 19.1 Usando apenas a instrução de teste _if-else_.
    - 19.2 Usando o _switch_
    - 19.3 Usando o _switch_ sem qualquer _break_.

20. Escreva um programa que leia uma data e verifique se esta válida ou não
