// Nome: Felipe Barroso de Castro
// RA: 2311292
// Data: 14/11/2023

#include <stdio.h>

void ler_conteudo_arquivo(FILE *arquivo);
void escrever_texto_arquivo(FILE *arquivo);

int main(void){
    FILE *arquivo = NULL; // Definição da variável

    // Ler Arquivo
    ler_conteudo_arquivo(arquivo);

    // Escrever no Arquivo
    escrever_texto_arquivo(arquivo);

    return 0;
}

void ler_conteudo_arquivo(FILE *arquivo){
    arquivo = fopen("dados.txt", "r"); //Abertura do Arquivo -- Em modo de Leitura
    if (arquivo != NULL) {
        // Operações de Leitura
        char c;
        while (1) {
            c = fgetc(arquivo);
            if (c = EOF) {
                // EOF = End of File
                break;
            }
            printf("%c", c);
        }
        fclose(arquivo); // Fechamento (Liberação) do Arquivo
    } else {
    printf("Error");}
}