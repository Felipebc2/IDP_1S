//Nome: Felipe Barroso de Castro
//Data: 28/09/2023

//Faça um Programa que peça 2 números inteiros e um número real. Calcule e mostre: o produto do dobro do primeiro com metade do segundo. a soma do triplo do primeiro com o terceiro. o terceiro elevado ao cubo.

#include "stdio.h"
#include "math.h"

int main(void){
    //Variáveis
    float Integer1;
    float Integer2;
    float Real;

    //Pedindo os números inteiros
    printf("Enter two integers and one real:\n");

    for (size_t i = 0; i < 3; i++)
    {
        if (i == 0){
        printf("1st Integer: ");
        scanf("%f", &Integer1);
        }

        if (i == 1){
        printf("2nd Integer: ");
        scanf("%f", &Integer2);
        }

        if (i == 2)
        {
            printf("The real Number: ");
            scanf("%f", &Real);
        }
    }
    //Calculando:
    int CalculoI = (Integer1 * 2) * (Integer2 / 2);
    int CalculoII = (Integer1 * 3) + Real;
    int CalculoIII = pow(Real, 3);

    //Mostrando os calculos:
    printf("\n");
    printf("The product of twice the first and half the second: %d\n", CalculoI);
    printf("The sum of three times the first and third: %d\n", CalculoII);
    printf("The third raised to the cube: %d\n", CalculoIII);

    printf("\n");
    return 0;
}