> Capítulo 6 - Resumo

Um vetor não é mais do que um conjunto de elementos consecutivos, todos do mesmo tipo, armazenados em memória e que podem ser acessados atráves de um nome e de um índice.

A declaração de vetores é realizada indicando qual o tipo, o nome e o número de elementos no vetor.

**Exemplo**:

```
char nome[20];          /* Vetor com 20 caracteres */
int numero[10];         /* Vetor com 10 inteiros   */
```

A manipulação dos vetores é sempre realizada elemento a elemento. No entanto, é necessário prestar atenção no índice do primeiro elemento de qualquer vetor, que é sempre ZERO.

O acesso ao conteúdo de um elemento é feito utilizando-se colchetes **[]**.

**Exemplo:**

```
numero[0] = 123;                /* Colocar 123 como valor do primeiro elemento do vetor */
nome[5] = toupper(nome[5]);     /* Colocar a 6ª letra do nome (índice 5) em maiúsculas  */
```

Os vetores podem ser automaticamente iniciados só quando são declarados, devendo os valores do vetor estar entre chaves e após o sinal de igual.

```
char vogal[5] = {'a','e','i','o','u'};
```

Nesse caso, a dimensão do vetor pode ser ignorada, pois o compilador calcula o número de elementos que se encontram na zona das cargas iniciais e dimensiona o vetor com esse valor.

```
char vogal[5] = {'a','e','i','o','u'};
```

é equivalente a

```
char vogal[ ] = {'a','e','i','o','u'}; /* são 5 caracteres */
```

Se o número de elementos do vetor for superior ao número de cargas iniciais, então os elementos do vetor são iniciados com os valores respectivos. Aqueles que não tiverem valor são iniciados com o valor ZERO.

```
int v[10] = {5, 7, 9};
```

é equivalente a

```
int v[10]= {5, 7, 9, 0, 0, 0, 0, 0, 0, 0};
```

ou

```
int v[] = {5, 7, 9, 0, 0, 0, 0, 0, 0, 0};
```

Como o índice de um vetor começa com ZERO, o _n-ésimo_ elemento do vetor encontra-se sempre na posição _n-1_.

Os vetores podem ter mais do que uma dimensão, devendo o número de elementos de cada dimensão ser colocado entre colchetes na declaração do mesmo.

**Exemplo:**

```
int v[6][7][10][5];
```

A carga inicial de vetores multidimensionais segue os mesmos critérios dos vetores unidimensionais, devendo os elementos de cada dimensão serem colocados entre chaves.

**Exemplo:**

```
int v[3][2] = {{1, 2}, {3, 4}, {5, 6}};
```

A passagem de vetores de dimensão n, para funções em C, deve ser realizada indicando obrigatoriamente pelo menos as n-1 dimensões (mais à direita do vetor). É, no entanto, habitual indicar todas as dimensões quando se trata de vetores com mais de duas dimensões.

**Exemplos:**

Possíveis cabeçalhos de função que receberiam como parâmetro o vetor v declarado anteriormente.

```
f(int v[3][2]) { ... }
g(int v[][2]) { ... }
h(int *v[2]) { ... }
```

A definição de constantes em C pode ser realizada de duas formas distintas: utilizando a isntrução **const** da linguagem C ou usando o diretiva \*\*#difine de pré-processamento, que permite definir um símbolo:

```
const int num = 10;     ou      #define NUM 10
```
