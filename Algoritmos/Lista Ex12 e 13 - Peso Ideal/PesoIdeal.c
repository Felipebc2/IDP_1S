//Nome: Felipe Barroso de Castro
//RA: 2311292
//Data: 02/10/2023
//Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo que calcule seu peso ideal, usando a seguinte fórmula: (72.7*altura) - 58

#include "stdio.h"

int main(void){
    //variáveis
    int height;
    int gender;
    // Coletando dados
    printf("What is your height in cm? ");
        scanf("%d", &height);
    printf("Enter 1 if you are a man and enter 2 if you are a woman: ");
        scanf("%d", &gender);
            if (0 > gender > 3)
            {
                printf ("This is not a valid number.");
                return 1;
            }
    if (gender == 1)
    {
    float IdealWeightMan = (0.75*height) - 62.5;
    printf("Your Ideal Weight is: %.1f", IdealWeightMan);
    return 0;
    }
    if (gender == 2)
    {
    float IdealWeightWoman = (0.675*height) - 56.25;
    printf("Your Ideal Weight is: %.1f", IdealWeightWoman);
    return 0;
    }

}