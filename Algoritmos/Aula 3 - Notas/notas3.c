// Nome: Felipe Barroso de Castro
// RA: 2311292
// Data: 14/09/2023

#include <stdio.h>
#include "stdlib.h"

int main(void)
{
    system("chcp 65001");
    system("cls");
    float notaAcumulada = 0.0;
    int quantidade;

    printf("informe a quantidade de notas: ");
    scanf("%i", &quantidade);
    int contador = 0;

        while (contador < quantidade)
        {
            float nota;
            //captura a nota do usuário
            printf("informe a nota %i: ", contador+1);
            scanf("%f", &nota);

            //acumula nota
            notaAcumulada += nota;

            //incrementa contador
            contador += 1;
        }
    
    float media = notaAcumulada/quantidade;
    printf("\n");
    printf("A média das notas é %.1f\n", media);
    printf("\n");
    return 0;
}