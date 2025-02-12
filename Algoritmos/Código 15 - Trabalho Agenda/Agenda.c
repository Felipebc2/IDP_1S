// Nome: Felipe Barroso de Castro
// RA: 2311292
// DATA: 02/12/2023

#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    char email[50];
    char whatsapp[15];
    char instagram[50];
} Dados;

Dados contatos[100];
int count = 0;

void cadastrar(){
    printf("Enter your Name: ");
    scanf("%s", contatos[count].nome);
    printf("Enter your e-mail: ");
    scanf("%s", contatos[count].email);
    printf("Enter your number of Whatsapp: ");
    scanf("%s", contatos[count].whatsapp);
    printf("Enter your instagram user: ");
    scanf("%s", contatos[count].instagram);
    count++;
}

int main(void) {
    int i = 0;

// Variáveis do File
    FILE *Agenda;
    char texto[100];
    char caracteres[sizeof texto];

    Agenda = fopen ("entrada.txt". "w");

    int option;
    do {
        printf("\n\n1. Register contact\n");
        scanf("%d", &option);
        switch (option) {
        case 1;
            cadastrar();
            break;
        }
    } while (option != 6);
    return 0;
}
