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
