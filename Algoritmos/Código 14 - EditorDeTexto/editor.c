// Nome: Felipe Barroso de Castro
// RA: 2311292
// DATA: 23/11/2023

#include <stdio.h>
#include <string.h>

int main(void){
    int i = 0;

    FILE *entrada; // Aponta pro file de entrada
    char texto[100]; // Indica o Tam.Máx. do File
    char caracteres[sizeof texto]; // Aloca o texto

    // Caso o arquivo exista -->
        entrada = fopen ("entrada.txt", "r"); // Lê o arquivo
        if (entrada != NULL) {
            printf ("\n\nA entrada.txt found successfully\n\n");
            fgets (texto, sizeof(texto), entrada);
            fclose (entrada);
        } else {
            // Caso o arquivo seja inexistente
            printf("\n\n The file does not exist\n");
            return -1;
        }
        
    strcpy (caracteres, texto); // Criando arquivo de saida
    FILE *saida;
    printf ("\nCreating output file...");
    saida = fopen ("saida.txt", "w");
    while (caracteres[i] != '\0'){
        if (caracteres[i] >= 'A' && caracteres[i] <= 'Z') {
            caracteres[i] = caracteres[i] + 32;
        }
        i++;
    }
    fprintf (saida, "%s", caracteres);
    fclose (saida);
    printf("\nSaida.txt file created successfully!\n");

return 0;
}