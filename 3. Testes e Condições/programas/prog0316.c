#include <stdio.h>

/* Programa com má programação */

main()
{
    int num1, num2;
    char op;
    // pequena alteração para ficar mais claro o que o usúario deve escrever
    printf("Escreva uma Expressão (Exemplo: 1+1, 1-1, 1*1, 1/1): ");
    scanf("%d %c %d", &num1, &op, &num2);
    switch (op)
    {
    case '+':
        printf("%d + %d = %d\n", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%d - %d = %d\n", num1, num2, num1 - num2);
        break;
    case '*': /* Multiplicação */
    case 'x':
    case 'X':
        printf("%d * %d = %d\n", num1, num2, num1 * num2);
        break;
    case '/': /* Divisão */
    case '\\':
    case ':':
        printf("%d / %d = %d\n", num1, num2, num1 / num2);
        break;
    }
}

/* Programa com programação correta */

main()
{
    int num1, num2, res = 0;
    char op;
    printf("Escreva uma Expressão (Exemplo: 1+1, 1-1, 1*1, 1/1): ");
    scanf("%d %c %d", &num1, &op, &num2);
    switch (op)
    {
    case '+':
        res = num1 + num2;
        break;
    case '-':
        res = num1 - num2;
        break;
    case '*':
    case 'x':
    case 'X':
        res = num1 * num2;
        break;
    case '/':
    case '\\':
    case ':':
        res = num1 / num2;
        break;
    }
}
