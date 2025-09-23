> Capítulo 8 - Exercícios Propostos

1. Suponha o seguinte esquema que corresponde à declaração que se segue:

```
char s[] = "Maria", *ptr = s;
```

|  M   |  a   |  r   |  i   |  a   |  \0  |     |     |     | 1000 |      |     |
| :--: | :--: | :--: | :--: | :--: | :--: | :-: | :-: | :-: | :--: | :--: | :-: |
| 1000 | 1001 | 1002 | 1003 | 1004 | 1005 | ... | ... | ... | 5000 | 5001 | ... |

Complete a próxima tabela, colocando as expressões que dão como resultado o conteúdo da coluna Valor.

| **Usando s** | **Usando ptr** | **Valor** |
| :----------: | :------------: | :-------: |
|              |                |    'r'    |
|              |                |   1000    |
|              |                |   1001    |
|              |                |   5000    |

2. Responda, sucintamente, às seguintes questões:

- 2.1 - Qual o operador que nos permite obter o endereço de uma variável?
- 2.2 - Qual o caractere que se coloca na declaração de uma variável para indicar que é um ponteiro?
- 2.3 - Onde se coloca esse caractere?
- 2.4 - O que contém uma variável do tipo ponteiro?
- 2.5 - Qual o símbolo que podemos colocar em um ponteiro para indicar que ele não aponta para nada?
- 2.6 - Como se designa e qual o aspecto do operador que permite saber o que se encontra na posição de memória armazenada em um ponteiro?
- 2.7 - Se **ptr** for um ponteiro, qual o valor de \*(&ptr)?
- 2.8 - Indique duas formas de se obter o elemento inicial do vetor **v**.
- 2.9 - Por que razão podemos utilizar ponteiros para percorrer os vetores existentes em memória?
- 2.10 - Como declaramos uma variável que tenha a capacidade de conter o endereço de um ponteiro para **float**?

**Implemente as seguintes funções**:

3.

```
char *strrchr(char *s, char ch)
```

que retorna o endereço da última ocorrência de **ch** em **s**; caso não exista, retorna NULL.(Note que é o endereço, e não o índice).

Escreva ainda um programa que solicite um nome completo e escreva na tela apenas o sobrenome.

4.

```
char *strstr(char *str1, char *str2)
```

Retorna o endereço de str1 em que ocorre pela primeira vez a substring str2. Caso não exista, retorna NULL.

5.

```
char *First_Vogal(char *s)
```

Retorna o endereço em que ocorre a primeira vogal na _string s_. Caso não exista, retorna NULL.

6.

```
char *strins(char *dest, char *orig)
```

Insere a string **orig** no início da string **dest**, retornando **dest**.

**Exemplo**:

```
char s[100] = "Autônoma";
strina(s,"Universidade");
printf(s);        =>    UniversidadeAutônoma
```

7.

Suponha a seguinte declaração

```
int v[5] = {10, 20, 30, 40, 50}; /* Vetor com 5 inteiros  */
int *pv;                         /* Ponteiro para inteiro */
int **ppv;                       /* Ponteiro para Ponteiro para inteiro */
```

- a) Qual o conjunto de instruções que você escreveria, de tal modo que as três variáveis ficassem, de alguma forma, relacionadas entre sí?
- b) Represente, em um esquema de memória, qual o estado em que ficou a memória depois de executadas as instruções do item(a), supondo que a dimensão de todos os tipos envolvidos é de um _byte_.Dê valores que ache apropriados aos endereços de todas as variáveis envolvidas.
- c) Quais os parâmetros que se deve colocar em cada _printf_ de tal forma que se obtenha a seguinte saída, sendo o primeiro parâmetro definido com base em v, o segundo em pv e o terceiro com base em ppv?

```
printf("%d %d %d\n",   ,   ,   );      => 10   10   10
printf("%d %d %d\n",   ,   ,   );      => 20   20   20
printf("%d %d %d\n",   ,   ,   );      => 30   40   50
printf("%d %d %d\n",   ,   ,   );      => 9    19   29
```

- d) Qual a sáida da seguinte instrução?

```
printf("\n%d %d %d", &v[0], &pv, &ppv);
```

8.

Implemente a função, usando unicamente operações entre ponteiros.

```
char *StrDelUpper(char *s)
```

Apaga todos os caracteres maiúsculos em s. (Sugestão: use a função **isupper**)

9.

Implemente a seguinte função:

```
char *StrDelStr(char *s1, char *s2)
```

Apaga em s1 a primeira ocorrência de s2.

**Exemplo**: (execução da função a partir da mesma string original)

```
char *s = "O rato roeu a rolha da garrafa de rum do rei da Rússia";
StrDelStr(s, "xy");     => "O rato roeu a rolha da garrafa de rum do rei da Rússia";
StrDelStr(s, "ra");     => "O to roeu a rolha da garrafa de rum do rei da Rússia";
```

10.

Suponha a seguinte declaração:

```
int x = 2, *px, *py, y = 3;
```

que corresponde ao seguinte esquema de memória:

|        |     | _106_ |
| :----: | :-: | :---: |
|        |     | _105_ |
|        |     | _104_ |
| **y**  |  3  | _103_ |
| **py** |     | _102_ |
| **px** |     | _101_ |
| **x**  |  2  | _100_ |

Suponha que a escrita de inteiros e ponteiros pode ser feita atráves da função _printf_ usando o formato %d.

- a) Escreva o código necessário para colocar px apontando para x e py apontando para y.
- b) Depois de executado o item(a), qual a saída das seguintes instruções?

```
printf("%d %d\n",   x,   y);
printf("%d %d\n", *px, *py);
printf("%d %d\n", &px, &py);
```

- c) Caso seja feito px=py, qual a saída de

```
printf("%d %d %d %d %d %d %d %d", x, &x, px, *px, y, &y, py, *py)?
```
