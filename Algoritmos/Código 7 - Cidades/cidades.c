// Nome: Felipe Barroso de Castro
// RA: 2311292
// Data: 13/11/2023

#include <stdio.h>
#include <string.h>

int main (){
	
    // String das Cidades
    char strcidades[20];
    char cidades[5][20];
    
    for (int i = 0; i < 5; i++){
        printf("\nEnter the name of the city %i\n", i + 1);
        fgets(strcidades, sizeof(strcidades), stdin);
        strncpy(cidades[i], strcidades, sizeof(cidades[i]) - 1);
        cidades[i][sizeof(cidades[i]) - 1] = '\0';
    }

    printf("\nThe cities listed were: \n");

    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", cidades[i]);
    }

	return 0;
}