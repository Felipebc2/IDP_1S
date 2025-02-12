//Nome: Felipe Barroso de Castro
//Data: 27/09/2023

// Faça um Programa que peça a temperatura em graus Fahrenheit, transforme e mostre a temperatura em graus Celsius. Dica: C = 5 * ((F-32) / 9).

#include "stdio.h"

int main(void){
    // Perguntando se você de qual para qual você quer transformar.
    int Measurement;
    int Celcius;
    int Fahrenheit;
    printf("What transformation do you want to make?\n1: Fahrenheit for Celcius\n2: Celcius for Fahrenheit\n");
    scanf("%d", &Measurement);
    if (Measurement == 1)
    {
        printf("How many Fahrenheit is measuring?\n");
        scanf("%d", &Fahrenheit);
        int FahrenheitToCelcius = (Fahrenheit - 32)/1.8;
        printf("%d Fahrenheit in Celsius is %d\n", Fahrenheit, FahrenheitToCelcius);
    }

    if (Measurement == 2)
    {
        printf("How many Celcius is measuring?\n");
        scanf("%d", &Celcius);
        int CelciusToFahrenheit = (Celcius * 1.8) + 32;
        printf("%d Celcius in Fahrenheit is %d\n", Celcius, CelciusToFahrenheit);
    }

    if (Measurement > 2, Measurement < 0)
    {
        printf("ERROR, Failed to Execute\n");
    }
    
    printf("\n");
    return 0;
}