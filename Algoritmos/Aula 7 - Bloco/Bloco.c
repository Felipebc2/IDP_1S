// Nome: Felipe Barroso de Castro
// Data: 10/10/2023
// RA: 2311292

#include <stdio.h>

int soma(int *num1, int num2){
    int resultado = *num1 + num2;
    *num1 = 50;
    return resultado;
}

int main(void){
    int numero = 10;
    int resultado_soma = soma(&numero, 3);
    printf("numero=%i e resultado_soma=%i\n", numero, resultado_soma);
    return 0;
}