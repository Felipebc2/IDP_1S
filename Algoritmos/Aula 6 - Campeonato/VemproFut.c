// Nome: Felipe Barroso de Castro
// RA: 2311292
// Data: 05/10/2023

// Objetivo: Criar um programa de um campeonato de futebol, que o usuario informa a quantidade de gols de dois times, o Time 1 e o Time 2. Após isso, ele deve informar qual foi o resultado da partida para o Time 1 e Informar quantos pontos ele ganhou ou perdeu com esse resultado.
// Lembrando: 
    // Vitoria Goleada: 5 Pontos
    // Vitoria Normal: 4 Pontos
    // Empate: 2 Pontos
    // Derrota Normal: 1 Ponto
    // Derrota Goleada: 0 Pontos
//OBS: É goleada quando um dos times faz 3 ou mais gols que o outro.

#include <stdio.h>

int main(void){
    int NumGolsEquip[2];
    int Pontos;

    printf("How many goals did Team 1 score? ");
    scanf("%i", &NumGolsEquip[0]);
    printf("And Team 2? ");
    scanf("%i", &NumGolsEquip[1]);
    int Resultado = NumGolsEquip[0] - NumGolsEquip[1];
        if (Resultado == 0)
        {
            Pontos = 2;
            printf("The Match resulted in a draw.");
        }
        else if (Resultado < 0)
        {
            if (Resultado > -3)
            {
                Pontos = 1;
                printf("The Match resulted in a Normal Defeat.\n");
            }
            else {
                Pontos = 0;
                printf("The Match resulted in a Defeat by rout.\n");
            }
        }

        else if (Resultado > 0)
        {
            if (Resultado < 3)
            {
                Pontos = 4;
                printf("The result of the match was a normal victory.\n");
            }
            
            else {
                Pontos = 5;
                printf("The result of the match was a victory by rout.\n");
            }
        }

        printf("Team 1 earned %i points.\n", Pontos);

    printf("\n");
    return 0;
}