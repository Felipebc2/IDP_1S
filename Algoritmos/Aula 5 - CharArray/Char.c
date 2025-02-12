//Nome: Felipe Barroso de Castro
//RA: 2311292
//Data: 02/10/2023

//Escrever um programa em C que imprima no terminal do sistema seu nome e RA.
//A impressão deverá ocorrer no format: nome sobrenome - RA
//Atenção: a implementação deve utilizar array de chars ao invés de string e a impressão deve ser feita em um loop.

#include "stdio.h"

int main(void){
    char Nome[15] = "Felipe Barroso";   
    char RA[8] = "2311292";

    for (size_t i = 0; i < 15; i++)
    {
        printf("%c", Nome[i]);
    }
        printf (" - ");
    for (size_t i = 0; i < 8; i++)
    {
        printf("%c", RA[i]);
    }
    return 0;
}