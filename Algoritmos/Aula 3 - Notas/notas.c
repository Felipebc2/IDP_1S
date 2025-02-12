// Nome: Felipe Barroso de Castro
// RA: 2311292
// Data: 09/09/2023
// Data de Modificação: 12/09/2023

#include "stdio.h"
#include "stdlib.h"

int main() {
  system("cls");
  // Notas
  float n1 = 7.5;
  float n2 = 8.0;
  float n3 = 6.0;
  float n4 = 4.0;
  float media = (n1 + n2 + n3 + n4)/4;
  // Prints da media
  printf("A nota 1 e %.1f\n", n1);
  printf("A nota 2 e %.1f\n", n2);
  printf("A nota 3 e %.1f\n", n3);
  printf("A nota 4 e %.1f\n", n4);
  printf("A media e %.1f\n", media);
  printf("\n");

  if (media>=6) {
    printf("Voce Passou!\n");
  }
  else {
    printf("Voce nao passou!\n");
  }

  return 0;
}