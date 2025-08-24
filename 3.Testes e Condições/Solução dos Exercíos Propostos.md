> Capítulo 3 - Resoluções

1. Como é possível que as variávis do tipo float contenham erros de arredondamento devido ao conjunto de operações que poderão ter sido realizadas, pode acontecer que uma variável contenha um valor próximo de 0.0 (ex.0.0000001), representando então Verdade e não Falso, como deveria.

2. - 2.1 Verdade
   - 2.2 Verdade, é a própia estrutura da linguagem que o determina
   - 2.3 Falso
   - 2.4 Verdade, mesmo um Bloco é considerado uma única instrução
   - 2.5 Falso, o programador organiza o código como bem entender
   - 2.6 Verdade

3. Como a instrução if-else contém apenas uma instrução após o if, o compilador verifica se após essa instrução aparece a palavra else. Caso ela não apareça, é porque o if terminou (isto é, não tem else), e a próxima instrução não pertence ao if. O mesmo se passa em relação ao else.

4. Sim, nada o impede.

5. Não.

6. O trecho da esquerda verifica se x é igual a zero. Caso seja, escreve X, se não for, escreve Y.

O trecho da direita não faz um teste, mas uma atribuição do valor zero a x. Como em C qualquer atribuição devolve o valor atribuído, o valor da atribuição é zero. Como zero em C representa Falso, vai sempre escrever Y. Temos aindo o fato de a variável x ficar sempre com o valor zero.

7. Programação.

8. Mais legível que outro que não o seja.

9. Um compilador não faz qualquer tipo de verificação da indentação.

10. Vantagens:

O if permite o teste de condições que não estão limitidas a valores constantes

```c
if (x>y)
``
```

A instrução if permite a utilização de mais de uma condição

```c
if (x>10 && x<100)...
```

Desvantagens:

Quando o número de condições é muito elevado, if-else encadeados podem tornar o código particularmente confuso.

O switch permite encadear diversos case, controlando-os com a instrulção break.

11. Não se pode utilizar a instrução break num if. A instrução break pode apenas ser utilizada no switch e em laços.

12. - a) Falso
    - b) Verdade
    - c) Verdade
    - d) Verdade

---

13. - a) Falso
    - b) Verdade
    - c) Falso, pois o resultado da expressão é zero.
    - d) Verdade

14.

```c
if (x == 0 && y <= 32)
    printf("Sucesso!!!");
```

15. - 15.1: break dentro de um if.
    - 15.2: if não tem then em C.
    - 15.3: switch não tem else, mas sim default.

16.

```c
#include <stdio.h>
main()
{
    int n;
    printf("Introd. um N°: ");
    scanf("%d", &n);
    /* Versão 1 */
    if (n == 0)
    /* Versão 2 */
    if (!n)
    /* Versão 3 */
    if (n != 0)
    /* Versão 4 */
    if (n)
        printf("Número é igual a zero\n");
    else
        printf("Número não é igual a zero\n");
}
```

17.

```c
#include <stdio.h>

main()
{
    int n;
    printf("Introd. um N°: ");
    scanf("%d", &n);
    switch (n)
    {
    case 0:
        printf("Número é igual a zero\n");
        break;
    default:
        printf("Número não é igual a zero\n");
        break;
    }
}
```

18.

```c
#include <stdio.h>

main()
{
    int ano;
    printf("Introd. um Ano°: ");
    scanf("%d", &ano);
    if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0)
        printf("Ano é Bissexto\n");
    else
        printf("Ano não é Bissexto\n");
}

```

19. - 19.1

```c
#include <stdio.h>
/* Usando apenas a instrução de teste if-else */
main()
{
    int mes, n_dias;
    printf("Introd. o n° do mês 1..12: ");
    scanf("%d", &mes);
    if (mes == 2)
        n_dias = 28;
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
        n_dias = 30;
    else
        n_dias = 31;
    printf("O mês %d tem %d dias\n", mes, n_dias);
}
```

- 19.2

```c
#include <stdio.h>
/*   Usando o switch */
main()
{
    int mes, n_dias;
    printf("Introd. o n° do mês 1..12: ");
    scanf("%d", &mes);
    switch (mes)
    {
    case 2:
        n_dias = 28;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        n_dias = 30;
        break;
    default:
        n_dias = 31;
    }
    printf("O mês %d tem %d dias\n", mes, n_dias);
}

```

- 19.3

```c
#include <stdio.h>
/*   Usando o switch sem qualquer break */
main()
{
    int mes, n_dias = 0;
    printf("Introd. o n° do mês 1..12: ");
    scanf("%d", &mes);
    switch (mes)
    {
    case 1: /* 31 dias */
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        n_dias += 1;
    case 4: /* 30 dias */
    case 6:
    case 9:
    case 11:
        n_dias += 2;
    default:
        n_dias += 28;
    }
    printf("O mês %d tem %d dias\n", mes, n_dias);
}
```

nota: Todos os programas têm pelo menos 28 dias. No entanto,alguns têm que apresentar 30 dias (2 + 28) e outros 31 dias (1+2+28).

20.

```c
#include <stdio.h>

main()
{
    int dia, mes, ano;
    printf("Data: dd mm aaaa: ");
    scanf("%d %d %d", &dia, &mes, &ano);
    switch (mes)
    {
    case 2:
        if (dia >= 1 && dia <= 28 + ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0))
            printf("Data Válida\n");
        else
            printf("Data Inválida\n");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        if (dia >= 1 && dia <= 30)
            printf("Data Válida\n");
        else
            printf("Data Inválida\n");
        break;
    default:
        if (mes < 1 || mes > 12)
            printf("Data Válida\n");
        else if (dia >= 1 && dia <= 31)
            printf("Data Válida\n");
        else
            printf("Data Inválida\n");
    }
}

```

Notar que

```c
((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0)
```

devolve o valor 1 ou 0 conforme o ano seja bissexto ou não. Esse valor é então adcionado a 28, de forma a obter o valor 29 ou 28 conforme seja bissexto ou não.
