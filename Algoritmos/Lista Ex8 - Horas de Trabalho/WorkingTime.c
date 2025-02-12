// Nome: Felipe Barroso de Castro
// Data: 27/09/2023

// Objetivo: Faça um Programa que pergunte quanto você ganha por hora e o número de horas
// trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.

#include "stdio.h"

int main (void){
    //Quanto você ganha por hora?
    float Earnings;
    printf("How much do you earn per hour?\n");
    scanf("%f", &Earnings);
    //Quantas Horas você trabalhou no mês?
    int Hours;
    printf("And how many hours did you work this month?\n");
    scanf("%d", &Hours);
    //Calculo do salário do mês:
    float Salary = Hours*Earnings;
    printf("This month you worked %d hours, and with a salary of %.2f$ per hour, in total this month you received: %.2f$\n\n", Hours, Earnings, Salary);

    return 0;
}