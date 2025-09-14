> Capítulo 7 - Exercícios Propostos

1. Declare uma string com a capacidade de armazenar um nome com 25 caracteres;

2. Implemente em C as seguintes funções

   - 2.1 **int strcounta(char \*s)**
     Devolve o n° de caracteres alfabéticos em _s_.

```
strcounta("15 abacates")            => 8
strcounta("quize (15) abacates)     => 14
```

    - 2.2 **char *int_str(char *s)**
    Torna a string _s_ vazia.

    -2.3 **int ult_ind_chr(char *s, char c)**
    Devolve o último índice em que encontrou o caractere c em s. Caso não exista, devolve -1.

```
ult_ind_chr("alface", 'a')          => 3
ult_ind_chr("alface", 'g')          => -1
```

    - 2.4 **char *strlwr(char *s)**
    Coloca todos os caracteres de str em minúsculas.

    - 2.5 **char *strnset(char *s, char ch, int n)**
    Coloca o caractere _ch_ apenas nas primeiras _n_ posições da string _s_.
    Se _n > strlen(s)_ então n toma o valor de strlen(s).

```
strcpy(s, "alfabeto");
strnset(s, 'y', 3);                 => "yyyabeto"
strcpy(s, "alfabeto");
strnset(s, 'y', 23);                => "yyyyyyyy"
```

    - 2.6 **int stricmp(char *s1, char *s2)**
    Faz o mesmo que a função strcmp, mas realiza a comparação ignorando se os caracteres estão em maiúsculas ou minúsculas _(ignore case)_.

3. Implemente as seguites funções retiradas de enunciados de exames.

   - 3.1 **char *repeticoes(char *s, int n)**
     Recebe uma string, retirando-lhe todos os caracteres que não se encontram repetidos.

```
repeticoes("ALFACE")                => E
repeticoes("ALTA FIDELIDADE")       => a
```

    - 3.2 **char n_esimo(char *s, int n)
    Devolve a n-ésimo caractere da string s.
    Nota: Supõe-se que n<=strlen(s).

```
n_esimo("EraUmaVez", 1);            => E
n_esimo("EraUmaVez", 3);            => a
```

    - 3.3 **char *strpack(char *s)**
    Recebe uma string e compacta num único caractere qualquer o conjunto de caracteres repetidos consecutivos.

```
strpack("Arrecadddaccao")           => "Arecadacao"
strpack(" AAAaaaBBB  CCCIALFHA")    => " AaB  CIALFHA"
```

    - 3.4 **char Entremeado(char *s, int n)**
    Transforma a string s, deixando apenas os caracteres existentes de n em n posições.

```
strcpy(str, "ABCDEFGHIJKLMN);
/* suponha os exemplos seg. sempre com a string anterior */

Entremeado(str, 0)                  => "ABCDEFGHIJKLMN"
Entremeado(str, 1)                  => "ACEGILN"
Entremeado(str, 3)                  => "AEIN"
```

    - 3.5 **char *xspace(char *s)**
    Coloca um espaço depois de cada caractere NÃO ESPAÇO na string s.

```
strcpy(str, "Era_Uma_Vez");
xspace(str);                        => "E_r_a_ _U_m_a _V_e_z_"
```

    - 3.6 **char Max_Ascii(char *str)**
    Devolve o caractere com maior código ASCII presente na string str.
    Se a string estiver vazia, delvolve '\0'.

    - 3.7 **char *Prox_Char(char *s)**
    Coloca em cada posição da string s o próximo caractere ASCII.

```
char *mystring = "A8MO";
Prox_Char(mystring)                 => "B9N1"
```

    - 3.8 **Que problema pode provocar a função anterior?**

    - 3.9 **char UpDown(char *s)**
    Coloca os caracteres da string s alternadamente em Maiúsculas e Minúsculas.

```
char *Mystring = "Alfabeto Grego";
upDown(Mystring)                    => AlFaBeto gReGo"
```

    - 3.10 **char *allspace(char *s)**
    Substitui todos os caracteres da string s por espaços em branco.

```
char *mystring = "Alfa";
allspace(mystring)                  => |_||_||_||_|
```

    - 3.11 **char *strijset(char *s, int i, int j, char ch)**
    Coloca o caractere ch nas posições i...j na string s.

```
char *str = "Anabela";
/* Suponha a string anterior em todos os exemplos */

strijset(str, 0, 2, '*')            => "***bela"
strijset(str, 3, 4, '#')            => "Ana##la"
strijset(str, 5, 20, '<<')          => "Anabe<<<<"
```

    - 3.12 **char *strduplica(char *s)**
    Recebe uma string e duplica o seu conteúdo.

```
char str[100] = "Ana";
strduplica(s)                       => "AnaAna"
```

    - 3.13 **int atoi(char *s)**    /* Array to Integer */
    Recebe uma string e devolve o inteiro que nela está representado.

```
atoi("1234")                        => 1234
atoi("-123abc")                     => -123
atoi("+51ab46")                     => 51
atoi("abc")                         => 0
```

    - 3.14 **char *wordupr(char *s)**
    Recebe uma string, coloca a primeira letra de cada palavra em maiúscula e as restantes em minúsculas. Supõe-se que a separação entre palavras é realizada por espaços em branco.

```
wordupr("Era uma Vez")              => "Era Uma Vez"
```
