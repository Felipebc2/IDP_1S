// Nome: Felipe Barroso de Castro
// RA: 2311292
// Data: 31/08/2023

// Objetivo: Criar duas variáveis númericas com INT; Realizar 5 operações aritiméticas com elas; Imprimir;
#include "stdio.h"
#include "locale.h"

int main ()
{
    setlocale(LC_ALL, "Portuguese");
// Números para realizar as 5 operações
    float A = 4;
    int B = 3;

// Operações com as variáveis.
    int operation1 = A + B;
    int operation2 = A - B;
    int operation3 = A * B;
    int operation4 = A / B;
    //int operation5 = A % B;

// Prints
    printf("The Variable A is = %.0f\n", A);
    printf("The Variable B is = %d\n", B);
        printf("\n");
    printf("The Operation A + B = %i\n", operation1);
    printf("The Operation A - B = %i\n", operation2);
    printf("The Operation A * B = %i\n", operation3);
    printf("The Operation A / B = %i\n", operation4);
    //printf("The Operation A % B = %i\n", operation5);
        printf("\n");
    return 0;
}