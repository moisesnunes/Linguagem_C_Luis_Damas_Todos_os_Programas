> Capítulo 7 - Resumo

As _strings_ são apenas vetores de caracteres que contêm um caractere especial - o caractere **'\0'**. Esse caractere indica, ao programador e às funções que manipulam _strings_, qual a posição do vetor onde terminam os caracteres úteis da _string_.

Em C as _strings_ são representadas entre aspas e os caracteres entre aspas simples. Por essa razão "A" e 'A' são elementos diferentes.

Em C as _strings_ não podem ser manipuladas diretamente(atribuídas, concatenadas, comparadas, etc.), pois não são um tipo básico da linguagem.

No entanto, existe um conjunto _standard_ de funções que permite a sua manipulação. As funções mais utilizadas são:

\> **Strlen** _Devolve o comprimento de uma string_

\> **Strcpy** _Copia uma string para outra_

\> **Strcat** _Concatenação de Strings_

\> **Strcmp** _Comparação de Strings com ignore case_

\> **Strchr** _Procura um caractere numa string_

\> **Strstr** _Procura uma string dentro de outra_

\> **Strlwr** _Converte todos os caracteres de uma string para minúsculas_

\> **Strupr** _Converte todos os caracteres de uma string para maiúsculas_

e estão presentes em todos os compiladores (exceto _strlwr_ e _strupr_).

Para ter acesso a elas bastará colocar a seguinte linha

```
#include <string.h>
```

No entanto, o conjunto dessas funções aqui apresentadas é apenas uma pequena parte de todas as funções sobre strings que o seu compilador coloca à sua disposição.
