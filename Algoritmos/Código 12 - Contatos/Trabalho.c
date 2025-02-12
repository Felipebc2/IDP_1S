#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    char email[50];
    char whatsapp[15];
    char instagram[50];
} Dados;

Dados agenda[100];
int count = 0;

void cadastrar(){
    printf("Enter your Name: ");
    scanf("%s", agenda[count].nome);
    printf("Enter your e-mail: ");
    scanf("%s", agenda[count].email);
    printf("Enter your number of Whatsapp: ");
    scanf("%s", agenda[count].whatsapp);
    printf("Enter your instagram user: ");
    scanf("%s", agenda[count].instagram);
    count++;
}

void alterar(){
    char nome[50];
    printf("Enter the name of the contact you want to change: ");
    scanf("%s", nome);
    for (int i = 0; i < count; i++) {
        if (strcmp(agenda[i].nome, nome) == 0) {
            printf("Enter the new email: ");
            scanf("%s", agenda[i].email);
            printf("Enter the new Whatsapp number: ");
            scanf("%s", agenda[i].whatsapp);
            printf("Enter the new instagram user: ");
            scanf("%s", agenda[i].instagram);
            return;
        }
    }
    printf("Contact not found\n");
}

void excluir() {
    char nome[50];
    printf("Enter the name of the contact you want to delete: ");
    scanf("%s", nome);
    for (int i = 0; i < count; i++) {
        if (strcmp(agenda[i].nome, nome) == 0) {
            for (int j = i; j < count-1; j++) {
                agenda[j] = agenda[j+1];
            }
            count--;
            return;
        }
    }
    printf("Contact not found\n");
}

void listar() {
    for (int i = 0; i < count; i++)
    {
        printf("\nNome: %s\n", agenda[i].nome);
        printf("E-mail: %s\n", agenda[i].email);
        printf("Whatsapp: %s\n", agenda[i].whatsapp);
        printf("Instagram: %s\n\n", agenda[i].instagram);
    }
}

void localizar() {
    char nome[50];
    printf("Enter the name of the contact you want do find: ");
    scanf("%s", nome);
    for (int i = 0; i < count; i++) {
        if (strcmp(agenda[i].nome, nome) == 0) {
            printf("Nome: %s\n", agenda[i].nome);
            printf("E-mail: %s\n", agenda[i].email);
            printf("WhatsApp: %s\n", agenda[i].whatsapp);
            printf("Instagram: %s\n", agenda[i].instagram);
            return;
        }
    }
    printf("Contact not found\n");
}

int main() {
    int option;
    do {
        printf("\n\n1. Register contact\n");
        printf("2. Change contact\n");
        printf("3. Delete contact\n");
        printf("4. List contacts\n");
        printf("5. Find contact\n");
        printf("6. Exit\n\n");
        printf("Choose an option: \n\n");
        scanf("%d", &option);
        switch (option) {
            case 1:
                cadastrar();
                break;
            case 2:
                alterar();
                break;
            case 3:
                excluir();
                break;
            case 4:
                listar();
                break;
            case 5:
                localizar();
                break;
        }
    } while (option != 6);
    return 0;
}