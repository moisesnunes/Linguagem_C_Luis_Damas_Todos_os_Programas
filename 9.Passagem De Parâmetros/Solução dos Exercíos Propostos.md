> Capítulo 9 - Soluções

1.

**Pergunta**: Na função iszero, queremos alterar o parâmetro _n_?
**Resposta**: Não, apenas queremos verificar se o seu valor é zero ou não.

```c
int iszero(int n)   /* n - Parâmetro de input */
{
    return n == 0;
}
```

**Pergunta**: Na função add1, queremos alterar o parâmetro _n_?
**Resposta**: Sim, pois queremos adicionar uma unidade ao valor que já contém. Teremos, por isso, que passar o endereço da variável.

```c
void add1(int *n)   /* n - Parâmetro de entrada/saída */
{
    (*n)++;
}
```
Diz-se que um parâmetro é de _entrada_ se o valor trazido por este é importante para o processamento da função. Nos exemplos anteriores, funções **iszero** e **add1** usam o valor existente no parâmetro para o processamento.

Diz-se que um parâmetro é de **saída** se o valor deste é alterado dentro da função e enviado para fora desta. Nos exemplos anteriores, as funções **add1** e **zero** alteram o valor existente no parâmetro.

Diz-se que um parâmetro é de entrada/saída se o valor trazido por este é importante para o processamento da função e é enviado para fora desta alterado.

2.

```c
#include <stdio.h>

int Ler_Inteiro(char *Prompt)
{
    int n;
    do
    {
        printf(Prompt);
        scanf("%d", &n);
    } while (n < 0);
    return n;
}

main()
{
    int Idade, Total;
    Idade = Ler_Inteiro("Introd. a Idade: ");
    Total = Ler_Inteiro("Qual o Total a Depositar?\n\t");
}
```
3.

```c
#include <stdio.h>

void Ler_Inteiro(char *Prompt, int *ptr_valor)
{
    do
    {
        printf(Prompt);
        scanf("%d", ptr_valor);
    } while (*ptr_valor < 0);
}

main()
{
    int Idade, Total;
    Ler_Inteiro("Intro. a Idade: ", &Idade);
    Ler_Inteiro("Qual o Total a Depositar?\n\t", &Total);
    printf("Idade: %d \n\nTotal: %d\n", Idade, Total);
}
```
Repare com atenção que pretendemos alterar a variável que enviamos para a função, por isso temos que enviar o seu endereço. Este endereço é recebido na função e colocado no ponteiro **ptr_valor**.

Repare bem no _scanf_ que é realizado dentro da função Ler_Inteiro e verifique que, para ler o inteiro, não se colocou o **\&** antes da variável **ptr_valor**, pois esta já contém o endereço que queremos enviar para a função _scanf_, local onde esta irá colocar o inteiro que leu.

4.

```c
#include <stdio.h>

long int Fib_Rec(int n)
{
    if (n < 0)
        return -1L; /* Parâmetro Inválido */
    if (n <= 1)
        return 1L;
    else
        return Fib_Rec(n - 1) + Fib_Rec(n - 2);
}

long int Fib_Ite(int n)
{
    int i;
    long n1, n2, tmp;
    if (n < 0)
        return -1L; /* Parâmetro Inválido */
    if (n <= 1)
        return 1L;
    for (i = 2, n1 = n2 = 1; i < n; i++)
    {
        tmp = n1;
        n1 = n2;
        n2 = n1 + tmp;
    }

    return n1 + n2;
}

main()
{
    int n;
    do
    {
        printf("Introd. um Inteiro: ");
        scanf("%d", &n);
        printf("Fib_Ite(%d) = %ld\n", n, Fib_Ite(n));
        printf("Fib_Rec(%d) = %ld\n", n, Fib_Rec(n));
    } while (n > 0);
}
```
Repare que a função iterativa é muito mais complicada de implementar que a versão recursiva, cuja implementação é direta.

**Nota**: As funções retornam um **long int**, pois o resultado de uma invocação pode ser muito grande, não cabendo num inteiro. A instrução __return 1L__; é equivalente a __return (long) 1__;

5.

```c
#include <stdio.h>
#include <string.h>

char *rec_strcat(char *dest, char *orig)
{
    if (*dest == '\0')
        return strcpy(dest, orig);
    return rec_strcat(dest + 1, orig) - 1;
}

main()
{
    char s[1000];
    gets(s); // aviso: the `gets' function is dangerous and should not be used c11
    puts(rec_strcat(s, "OLA"));
}
```
Repare que concatenar uma string com outra é simplesmente copiar essa mesma string quando ela for encontrada,nas diversas chamadas recursivas, na string vazia(no destino).

Notar também que ao fazer __return rec_strcar(dest+1,orig)__ se está retornando o endereço seguinte ao presente em **dest**, sendo por isso necessário retirar deste uma unidade (-1) para obter o endereço original de **dest**

6. 

```c
#include <stdio.h>

char *strchr(char *str, char ch)
{
    if (*str == '\0')
        return NULL;
    else if (*str == ch)
        return str;
    else
        return strchr(str + 1, ch);
}

main()
{
    char s[100];
    do
    {
        gets(s); // aviso: the `gets' function is dangerous and should not be used.
        puts(strchr(s, 'a'));
    } while (*s);
}
```
7. 

Neste exercício temos que definir o cabeçalho da função, bem como os seus parâmetros. Como é indicado no enunciado, todos os parâmetros são do tipo inteiro, e para facilitar as coisas vamos utilizar apenas operações entre inteiros, retornando assim um inteiro.

A função terá que receber como parâmetros a informação necessária ao cálculo do somatório, isto é, o valor de a e de n. Repare que o valor de i não deve ser um parâmetro, pois varia sempre entre 1 e o parâmetro n, devendo ser, então, uma variável local.

```c
int Exp(int n, int a)
{
    int i, res = 0;
    for(i = 1; i <= n; i++)
        res += (a+i/n) * (a+i/n );
    return res;
}
```

8. 

```c
#include <stdio.h>

main(int argc, char **argv, char **env)
{
    while (*env)
        puts(*env++);
}
```
9.

```c
#include <stdio.h>
#include <string.h>

main(int argc, char **argv, char **env)
{
    while (*env)
        puts(strchr(*env++, '=') + 1);
}
```
