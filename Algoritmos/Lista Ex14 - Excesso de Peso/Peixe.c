//João Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o rendimento diário de seu trabalho. Toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento de pesca do estado de São Paulo (50 quilos) deve pagar uma multa de R$ 4,00 por quilo excedente. João precisa que você faça um programa que leia a variável peso (peso de peixes) e calcule o excesso. Gravar na variável excesso a quantidade de quilos além do limite e na variável multa o valor da multa que João deverá pagar. Imprima os dados do programa com as mensagens adequadas.
// Criar um programa que analisa a quantidade quilos que ele pegou de peixes e calcule a multa que ele vai ter que pagar pelo excesso.

#include "stdio.h"
int main(void){
    //Váriaveis
    int KG;
    printf("How many kilos of fish do you have? ");
    scanf("%d", &KG);
    if (KG > 50){
        int Tax = (KG - 50)*4;
        printf("You will have to pay R$ %d in fine", Tax);
    }
    if (KG < 50){
        printf("You will not have to pay the fine.");
    }
    return 0;
}