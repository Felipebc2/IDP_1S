// Nome: Felipe Barroso de Castro
// RA: 2311292
// Data: 21/11/2023

// Objetivo: Criar uma sequencia lógica para fibonacci e printar 10 valores consecutivos da sequencia.
// Lógica de Fibonacci = Uma sequencia que começa em 1, e em seguida o próximo valor é a soma dos ultimos 2 valores anteriores.

#include <stdio.h>

int main(void){
    // Inicializa as Variáveis
    int i, n;
    int fib[10];
    fib[0] = 0;
    fib[1] = 1;

    // Pega a Quant. de termos do usuário
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    // Criação do Array
    for (size_t i = 2; i <= n; i++)
    {
        fib[i] = fib[i-1]+fib[i-2];
    }
    // Print da Sequencia.
    for (size_t i = 0; i <= n; i++)
    {
        printf("%d, ", fib[i]);
    }
    
    return 0;
}