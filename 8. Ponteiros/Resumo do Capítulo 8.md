> Capítulo 8 - Resumo

Um ponteiro é uma variável que contém o endereço de outra variável.

A sua declaração é feita usando o tipo da variável para a qual se quer apontar, seguido de um asterisco.

O endereço de uma variável pode ser obtido através do operador **&** (Endereço de).

Se um ponteiro **ptr** contiver o endereço de outra variável, pode-se obter o valor dessa variável através do operador **\*(Apontado por),** fazendo **\*ptr**.

Para evitar problemas,os ponteiros devem ser sempre iniciados com o endereço de uma variável ou com **NULL**. A constante NULL indica que o ponteiro não aponta para nenhum endereço.

Os ponteiros possuem uma aritmética própia, a qual permite realizar operações de incremento, decremento, diferença e comparação.

O nome de um vetor corresponde sempre ao endereço do primeiro elemento do vetor.

Assim, sempre que se passa um vetor para uma função apenas o endereço do primeiro elemento é enviado para ela, e não a totalidade do vetor.

Em C existem algumas funções particularmente úteis na manipulação de _strings_ que retornam um endereço, são elas:

```
char *strchr(char *str, char ch)
```

_Retorna o endereço da primeira posição em que ocorre o caractere ch na string str. Caso não exista, retorna NULL._

```
char *strrchr(char *str, char ch)
```

_Retorna o endereço da última posição em que ocorre o caractere ch na string str. Caso não exista, retorna NULL._

```
char *strstr(char *str1, char *str2)
```

_Retorna o endereço de str1 em que ocorre pela primeira vez a substring str2. Caso não exista, retorna NULL._
