// Nome: Felipe Barroso de Castro
// Data: 02/10/2023

// Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês, sabendo-se que são descontados 11% para o Imposto de Renda, 8% para o INSS e 5% para o sindicato, faça um programa que nos dê: salário bruto. quanto pagou ao INSS. quanto pagou ao sindicato. o salário líquido. calcule os descontos e o salário líquido, conforme a tabela abaixo:
//+ Salário Bruto : R$
//- IR (11%) : R$
//- INSS (8%) : R$
//- Sindicato ( 5%) : R$
//= Salário Liquido : R$
//Obs.: Salário Bruto - Descontos = Salário Líquido.

#include "stdio.h"

int main (void){
    //Quanto você ganha por hora?
    float Earnings;
    printf("How much do you earn per hour? ");
    scanf("%f", &Earnings);
    //Quantas Horas você trabalhou no mês?
    int Hours;
    printf("And how many hours did you work this month? ");
    scanf("%d", &Hours);
    //Calculos:
    float GrossSalary = Hours*Earnings;
    float IR = (GrossSalary/100)*11;
    float INSS = (GrossSalary/100)*8;
    float Syndicate = (GrossSalary/100)*5;
    float Discounts = IR + INSS + Syndicate;
    float NetSalary = GrossSalary - Discounts;

    printf("+ Gross Salary: %.1f\n- IR: %.1f\n- INSS: %.1f\n- Syndicate: %.1f\n= NetSalary: %.1f\n", GrossSalary, IR, INSS, Syndicate, NetSalary);

    printf("\n");
    return 0;
}