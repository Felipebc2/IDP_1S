// Nome: Felipe Barroso de Castro
// RA: 2311292
// Data do começo: 31/08/2023
// Data de Atualização: 01/09/2023

// Objetivo: Utilizar operações com Potencia (pow) ou Raiz (sqrt)
#include <math.h>
#include "stdio.h"
#include "locale.h"

int main ()
{
// Números para realizar as operações.
    int A = 9;
    int B = 2;
    float C = 5.4;

// Operações com A e B
    int operation1 = pow(A,B);
// Operações com A
    int operation2 = sqrt(A);
    int operation3 = abs(A);
    int operation4 = exp(A);
// Operações com C
    int operation5 = floor(C);
    int operation6 = ceil(C);

// Prints
printf("The variable A is = %i\n", A);
printf("The Variable B is = %i\n", B);
printf("The Variable C is = %.1f\n", C);
    printf("\n");
printf("Operations with A and B\n");
printf("The Operation pow(A,B) is: %i\n", operation1);
    printf("\n");
printf("Operations with A\n");
printf("The Operation sqrt(A) is: %i\n", operation2);
printf("The Operation abs(A) is %i\n", operation3);
printf("The Operation exp(A)is %i\n", operation4);
    printf("\n");
printf("Operations with C\n");
printf("The Operation floor(C) is %i\n", operation5);
printf("The Operation ceil(C)is %i\n", operation6);
    printf("\n");

    return 0;
}