> Capítulo 5 - Resoluções

1.  - a) Falso.
    - b) Verdade.
    - c) Falso. Pode devolver qualquer tipo básico ou ponteiro.
    - d) Falso. Um parâmetro tem sempre que ter um tipo associado.
    - e) Verdade.
    - f) Falso.
    - g) Falso. Termina sempre.
    - h) Falso. Esta afirmação apenas é verdadeira na função main.
    - i) Verdade, porque ao sair da função main não há mais nada a executar.
    - j) Falso. Se fosse, como é que se poderia invocar a função.
    - k) Verdade.
    - l) Falso. Deve executar uma única tarefa.
    - m) Falso. Por que 10?
    - n) Falso. Por que 6?
    - o) Verdade.
    - p) Verdade.
    - q) Verdade.
    - r) Verdade.

2.  2.1 Ponto-e-vírgula após o cabeçalho da função.

    2.2 A função _"void"_ não pode retornar qualquer valor.

    2.3 Protótipo difere do cabeçalho da função.

    2.4 Protótipo difere do cabeçalho da função. Se a função não é declarada com um tipo ou com void, por padrão retorna int.

    2.5 Falta o nome da função.

    2.6 Declaração dos parâmetros feita incorretamente. Cada um dos parâmetros deveria ser precedido do tipo respectivo, void f(int x, int y).

3.  - a) (sem qualque saída)
    - b)
      Já Passei em C
      Ola
    - c) (sem qualquer saída)
    - d) 0
    - e)
      -1
      -3
      -5
      (laço infinito com os números ímpares)
4.

```c
int Abs(int x)
{
    if(x >= 0)
        return x;
    else
        return -x;
}
```

ou

```c
int Abs(int x)
{
    return (x >= 0) ? x : -x:
}
```

5.

```c
float VAL(float x, int n, float t)
{
    float res;
    int i;

    for (res = 0, i = 1; i <= n; i++)
        res = res + x / Pot(1 + t, i);

    return res;
}
```

6.

```c
long int n_segundos(int n_horas)
{
    return (long) n_horas * 3600;
}
```

7.  /_ com if-else _/

```c
#include <stdio.h>

long int num(int n_horas, char tipo)
{
    if (tipo == 'h' || tipo == 'H')
        return (long)n_horas;
    else if (tipo == 'm' || tipo == 'M')
        return (long)n_horas * 60;
    else
        return (long)n_horas * 60 * 60;
}

main()
{
    printf("%ld\n", num(3, 'h'));
    printf("%ld\n", num(3, 'm'));
    printf("%ld\n", num(3, 's'));
}
```

/_ Com o switch com break _/

```c
long int num(int n_horas, char tipo)
{
    switch (tipo)
    {
    case 'h':
    case 'H':
        return (long)n_horas;
    case 'm':
    case 'M':
        return (long)n_horas * 60;
    default:
        return (long)n_horas * 60 * 60;
    }
}
```

/_ Com o switch sem qualque break _/

```c
long int num(int n_horas, char tipo)
{
    long res = n_horas;
    switch (tipo)
    {
    case 's':
    case 'S':
        res = res * 60;
    case 'm':
    case 'M':
        res = res * 60;
    }
    return res;
}
```

8.

```c
float Max(float x, float y, float w)
{
    if(x>y)
        if(x>w)
            return x;
    else
        return w;
    else if(y>w)
        return y;
    else
    return w;
}
```

9.

```c
int Impar(int x)
{
    return x % 2; /* ou return x % 2 == 1 */
}
```

10.

```c
int Entre(int x, int lim_inf, int lim_sup)
{
    return (x >= lim_if && x <= lim_sup>);
}
```

11. 11.1

```c
int isdigit(char c)
{
    return (c >= '0' && c <= '9');
}
```

11.2

```c
int isalpha(char c)
{
    return (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z');
}
```

11.3

```c
int isalnum(char c)
{
    return isalpha(c) || isdigit(c);
}
```

11.4

```c
int islower(char c)
{
    return (c >= 'a' && c <= 'z');
}
```

11.5

```c
int isupper(char c)
{
    return (c >= 'A' && c <= 'Z');
}
```

11.6

```c
int isspace(char c)
{
    return c == ' ' || c == '\t'; /* Espaço ou TAB */
}
```

11.7

```c
char tolower(char c)
{
    if isupper (c)
        return c + 'a' - 'A';
    else
        return c;
}
```

11.8

```c
char toupper(char c)
{
    if islower (c)
        return c + 'A' - 'a';
    else
        return c;
}
```

12.

```c
int is_square(int x, int y)
{
    return x == y * y;

}
```
