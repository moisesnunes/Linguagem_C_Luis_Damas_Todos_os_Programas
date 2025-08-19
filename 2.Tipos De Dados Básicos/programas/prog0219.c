#include <stdio.h>

main()
{
    float x;
    printf("Introduza um N° real: ");
    scanf("%f", &x);
    printf("Parte Inteira: %d\n", (int)x);
    printf("Parte Fracionaria: %f\n", x - ((int)x));
}
