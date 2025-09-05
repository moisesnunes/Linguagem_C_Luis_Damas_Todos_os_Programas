> Capítulo 5 - Exercícios Resolvidos

\> Escreva a função _x_isdigit_, que verifica se um determinado caractere é dígito ou não. Escreva um programa de teste da função.

```c
#include <stdio.h>

int x_isdigit(char ch)
{
    return (ch >= '0' && ch <= '9');
}

/* Escreve todos os caracteres não dígitos */

main()
{
    char c;
    while (1) /* Termina com CTRL-C */
    {
        c = getchar();
        if (!x_isdigit(c)) /* se não for dígito */
            putchar(c);
    }
}
```

Neste exemplo, o programa lê (infinatamente) caracteres do teclado e apenas escreve aqueles que não são dígitos. Ora, um caractere é dígito quando está entre '0' ... '9'. Nota-se que a função poderia ter utilizado os códigos ASCII dos caracteres (48...57); ficaria, no entanto, muito menos legível e só estaria adaptado a computadores que funcionassem com a condificação ASCII.

\> Escreva a função _x_toupper_, que transforma qualquer caractere na maiúscula correspondente. Escreva um programa de teste da função.

```c
#include <stdio.h>

int x_toupper(char ch)
{
    if (ch >= 'a' && ch <= 'z') /* Se minúscula */
        return ch + 'A' - 'a';
    else
        return ch; /* Devolve a própia */
}

/* Escreve todos os caracteres em maiúsculas */

main()
{
    char c;
    while (1) /* Termina com CTRL_C */
    {
        c = getchar();
        putchar(x_toupper(c));
    }
}
```

\> Implemente a função

```c
float Pot(float x, int n)
```

Devolva o valor de x^n

```
x^0 = 1.0
x^n = x*x* ... *x (n vezes)
```

```c
#include <stdio.h>

float Pot(float x, int n)
{
    float res;
    int i;

    for (i = 1, res = 1.0; i <= n; i++)
        res *= x; /* res = res * x; */
    return res;
}

main()
{
    printf("%f %f %f\n", Pot(2.0, 4), Pot(1.234, 3), Pot(3.0, 0));
}
```

\> Dadas as funções tiro e liro

```c
void tiro(int x)
{
    switch(x)
    {
        case 1:  printf("\nEste teste é mesmo fácil");
        case 2:  printf("\nAi de quem digo o contrário...");
                 return;
        case 3:  printf("\nEstou no Tiro e x = %d", x);
                 liro(x++);
                 break;
                 printf("\nVou sair do tiro");
        default: printf("\nEntrei pelo default");
                 liro(x);

    }
}
```

```c
void liro(int x)
{
    switch(x)
    {
        case 2:  return;
                 printf("\nOlarailarilolele");
                 break;
        case 3:  printf("\nEu percebo HIMALAIAS de C");
                 break;
                 printf("\nSou mesmo Bom!!!");
        case 4:  printf("\nNão percebo nada disto");
                 liro(2);
                 return;
        default: printf("\nAqui estou eu mais um vez");
                 tiro(x--);
    }
}
```

Qual a saída das seguintes chamadas.

- a) tiro(1);
- b) tiro(3);
- c) liro(2);
- d) liro(4);
- e) liro(5);

a) tiro(1)

Ao invocar a função _tiro_ com o argumento 1, o _switch_ vai entrar pelo _case 1_: e escrever na tela

    Este teste é mesmo fácil.

Como o case de entrada não tem _break_, continua pelo próximo case e escreve em seguida

    _Ai de quem diga o contrário...

A seguir aparece a instrução _return_, que termina a execução da função.
Assim, a saída da chamada da função tiro(1) é:

    Este teste é mesmo fácil.
    Ai de quem diga o contrário...

b) tiro(3)

Entra-se no _switch_ pelo case 3: e escreve-se

    Estou no Tiro e x =3

Em seguida vou invocar a função liro com o valor 3. Repare que a instrução x++ envia primiero o valor de x(x=3) para a função liro, e só então é que incrementa a variável x na função tiro. Dessa forma a função liro recebe o valor 3, e não 4, como se poderia pensar erroneamente.

x++ indica que se quer usar o valor de x, e só depois de usá-lo é que ele vai ser incrementado em uma unidade.

Vamos então executar a função liro(3), que vai escrever

    Eu percebo HIMALAIAS de C

Em seguida aparece um _break_ que faz terminar o _switch_, embora ainda existam mais instruções para o referido _case_. Estas, contudo, nunca são executadas porque aparecem escritas depois da instrução _break_ (provavelmente o compilador avisará que existe código que nunca será alcançado).

Depois de sair de função liro(3) voltamos ao local imediatamente seguinte à sua chamada na função tiro, e que corresponde à instrução _break_, a qual termina a instrução switch e, nesse caso, também a função.

Assim, a saída apresentada na tela é

    Estou no Tiro e x =3
    Eu percebo HIMALAIAS de C

c) liro(2)

A primeira instrução é a instrução return, que termina imediatamente a função. Assim, essa chamada não produz qualquer saída.

d) liro(4)

Entra pelo _case 4_: e escreve

    Não percebo nada disto

Em seguida chamada a própia função (chamada dita Recursiva) e envia o valor 2.

Ora, liro(2) não tem qualquer saída, pois executa simplesmente um return.

Vota à instrução imediatamente a seguinte à chamada liro(2) e executa a instrução return, que termina a função.

A saída dessa chamada é, assim,

    Não percebo nada disto

e) liro(5)

A invocação da função liro com o valor 5, que não existe no switch, vai fazer com que o código a executar seja o que se encontra no _default_. Dessa forma, a função vai escrever na tela

    Aqui estou eu mais uma vez

Em seguida, vai chamar a função tiro enviando 5(e não 4, pelas razões antes apresentadas para o x++).

Ora, o tiro(5) vai igualmente entrar pelo default respectivo e escrever

    Entrei pelo default

Chamando em seguida a função liro(5), que corresponde à chamada inicial, sendo todo o processo repetido indefinidamente.

Assim, a saída do programa é:

    Aqui estou eu mais uma vez
    Entrei pelo default
    Aqui estou eu mais uma vez
    Entrei pelo default
    Aqui estou eu mais uma vez
    Entrei pelo default

(... laço infinito em que repete as duas linhas ...)
