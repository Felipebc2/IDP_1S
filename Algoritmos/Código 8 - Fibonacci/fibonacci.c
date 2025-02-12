// Nome: Felipe Barroso de Castro
// RA: 2311292
// Data: 21/11/2023

// Objetivo: Criar uma sequencia lógica para fibonacci e printar 10 valores consecutivos da sequencia.
// Lógica de Fibonacci = Uma sequencia que começa em 1, e em seguida o próximo valor é a soma dos ultimos 2 valores anteriores.

#include <stdio.h>

int main(void){
    // Inicializa as Variáveis
    int i, n;
    // Inicializa o Primeiro e Segundo termo
    int t1 = 0, t2 = 1;
    // Inicializa o próximo termo
    int nextTerm = t1 + t2;
    // Pega a Quant. de termos do usuário
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    // Printa os dois primeiros termos
    printf("Fibonacci Series: %d, %d, ", t1, t2);
    // Printa o 3° termo para frente
    for (size_t i = 3; i <= n; i++)
    {
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    return 0;
}