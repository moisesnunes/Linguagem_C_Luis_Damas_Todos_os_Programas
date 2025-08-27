> Capítulo 2 - Resoluções

1. Indique quais das seguintes declarações estão corretas.

```c
    - a) y int;                        // ERRO: Sintaxe Incorreta
    - b) int;                          // ERRO: Falta a Variável
    - c) integer x;                    // ERRO: integer não é um tipo de C
    - d) inta , b;                     // ERRO: Nome da variável junto ao tipo
    - e) float f, g, c;                // OK
    - f) char ch1=ch2='A';             // ERRO: Só se pode fazer uma atribuição
    - g) char ch1 = 'A', ch2 = 'A';    // OK
```

2. Uma variável inteira, quando é declarada, é sempre iniciada com ...

- c) Um valor aleatório

3. Indique, na seguinte lista, quais os identificadores corretos e incorretos de variáveis:

```c
    - a) Valor       // OK
    - b) &xvar       // ERRO: Caractere inicial inválido
    - c) dez%        // ERRO: Caractere final inválido
    - d) a+b         // ERRO: Caractere + inválido
    - e) _Kabonga    // OK - embora não aconselhável (underscore)
    - f) MENOS       // OK - embora não aconselhável (maiúsculas)
    - g) 10a         // ERRO: Primeiro caractere é digito
    - h) a10         // OK
    - i) main        // ERRO: Palavra reservada
    - j) F1          // OK
```

4. O nome de uma variável ...

   - a) deve indicar aquilo que ela armazena
   - d) deve ser o mais explícito possível
   - f) pode, mas não deve, começar por underscore(\_)
   - g) pode conter mais do que um caractere

5. Associe os seguintes tipos aos correspondentes formatos de leitura e escrita.

```c
    int                 %d
    float               %f ou %e
    char                %c
    short int           %hd
    long int            %lg
    signed long int     %ld
```

6.  Indique quais das seguintes afirmações são verdadeiras e quais são falsas

    - a) Verdade
    - b) Falso
    - c) Verdade
    - d) Verdade, pois o bit usado para representar os números negativos pode ser então usado para representar mais um conjunto de números positivos. O maior valor de um tipo unsigned é igual o dobro do maior número do tipo signed correspondente, somado de uma unidade.
    - e) Falso. Uma variável do tipo char só pode armazenar um único caractere.
    - f) Falso. Todos os caracteres pertecem a tabela ASCII.
    - g) Falso. Uma variável do tipo char armazena sempre apenas um único caractere, qualquer que ele seja. Embora certos caracteres se escrevam recorrendo a mais de um caractere (ex: '\t'), internamente são apenas guardados num único byte. O uso de mais de um caractere para representar certos caracteres especiais serve unicamente para facilitar a vida do programador.
    - h) Verdade.

7.  Identifique os erros de compilação que seriam detectados nos seguintes programas:

    - 7.1 A variável x foi declarada duas vezes.
    - 7.2 int é uma palavra reservada e, como tal, não pode ser usada como identificador de uma variável.
    - 7.3 Atribuições em cascata (como x=y=z=0;) só podem ser realizadas depois de as variáveis terem sido todas declaradas.
      Deveria ter feito

```c
int x,y,z;
x = y = z = 0;
```

ou então

```c
int x=0 , y=0, z=0;
```

8. Embora os programas que se seguem não tenham erros de compilação, identifique as causas de seu possível mau funcionamento.

- 8.1 A função _scanf_ serve unicamente para a leitura de valores, não devendo ser colocados outros caracteres na string do formato. Caso se queira escrever uma string antes de solicitar o número, deverá ser usada a função _printf_.

```c
#include <stdio.h>
main()
{
    int n;
    printf("Introduza um N°")
    scanf("%d", &n);
    printf("O n° = %d\n", n);
}
```

- 8.2 O _scanf_ não deve conter o caractere \n na sua string, pois não termina a leitura imediatamente depois de escrever o valor solicitado.

- 8.3 Os formatos de leitura e escrita de variáveis devem estar de acordo com os tipos das variáveis que são processadas, evitando assim sérios problemas que só poderão vir a ser detectados muitas linhas à frente.

Como a variável n é o do tipo inteiro, deveria ser usado o formato de leitura e escrita %d. Poder-se-ia também alterar a variável para float que o programa passaria a funcionar corretamente.

9. Escreva um programa que solicite ao usúario uma determinada data e a mostre em seguida no formato dd/mm/aaaa.

```c
#include <stdio.h>

main()
{
    int dia, mes, ano;
    printf("Dia: ");
    scanf("%d", &dia);
    printf("Mes: ");
    scanf("%d", &mes);
    printf("Ano: ");
    scanf("%d", &ano);
    printf("Data Completa: %d/%d/%d\n", dia, mes, ano);
}
```

Note que não existe qualquer tipo de formato específico para o tratamento de datas nas funções printf e scanf. Estas têm que ser tratadas como se fossem inteiros.

10. Escreva um programa que solicite ao usúario uma determinada data no formato aaaa-mm-dd e a mostre em seguida no formato dd/mm/aaaa.

```c
#include <stdio.h>

main()
{
    int dia, mes, ano;
    printf("Data (Formato aaaa-mm-dd): ");
    scanf("%d-%d-%d", &ano, &mes, &dia);
    printf("Data Completa: %d/%d/%d\n", dia, mes, ano);
}
```

Nesse caso, para realizar a leitura completa de uma data pode-se indicar no formato de leitura da função scanf qual o caractere separador entre os vários componentes. O utilizador é então obrigado a colocar o caractere '-' entre os vários componentes a serem lidos.
