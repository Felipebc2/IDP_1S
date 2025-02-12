// Nome: Felipe Barroso de Castro
// RA: 2311292
// Data: 27/09/2023

//Escrever um programa em C que recebe dez números inteiros positivos informados pelo usuário e, em seguida:
//imprima todos os números no terminal na ordem na qual eles foram informados; e
//informe a quantidade de números ímpares digitados pelo usuário.
//Exemplo:
//Os números informados foram: 4, 3, 35, 89, 12, 2, 3, 5, 8, 0
//Foram informados 5 números ímpares.
//Observação: utilize array para armazenar os números informados pelo usuário.

#include "stdio.h"

int main (void){
    float numbers[] = {4, 3, 191, 42, 78, 63, 91, 110, 0, 12};
    int i;
    //Aux é uma variável auxiliar para medição de números impares ou pares
    int aux;
    int ContadorPares = 10;

    for (i = 0; i < 10; i++) {
        aux = numbers[i];
        printf("number %i = %.f\n", i+1, numbers[i]);
            if (aux/2 == numbers[i]/2)
            {
            ContadorPares--;
            }
    }

    printf("The number of odd numbers is: %d\n", ContadorPares);

    return 0;
}