// Nome: Felipe Barroso de Castro
// RA: 2311292
// Data: 09/09/2023

// Objetivo: Criar um jogo de adivinhação, onde no inicio do jogo é gerado um número aleatório de 1 a 100, onde o jogador deve tentar acertar esse número, que logo após cada palpite é gerado uma mensagem que diz se o palpite foi abaixo ou acima do número esperado. Quando o jogador acertar o número é gerado um print com a quantidade de tentativas até o acerto.

// Bibliotecas
    #include "stdio.h"
    #include "stdlib.h"
    #include "time.h"

int main () 
{
//Gerador de número aleatório entre 1 e 100:
    srand(time(NULL));
    int Answer = rand()%99+1;

// Mensagens do jogo
    int Kick;
    printf("Guess the number from 1 to 100!\n");
    scanf("%d", &Kick);

    // Comando de repetição
    int Trys = 1;

    while(Kick != Answer)
    {
    if(Kick > Answer)
        {
            printf("\n");
            printf("Too high!");
        }
    if(Kick < Answer)
        {
            printf("\n");
            printf("Too Low!");
        }
       printf(" Try Again...\n");
       Trys++;
        scanf("%d", &Kick);
    }

    // Caso Acerte
    if(Kick == Answer)
        {
            printf("\n");
            printf("You're right, Congratulations!!\n");
            printf("You got it right with %i tries.\n", Trys);
        }

    printf("\n");
    return 0;
}