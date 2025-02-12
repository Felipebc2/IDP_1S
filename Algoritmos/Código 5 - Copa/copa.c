// Nome: Felipe Barroso de Castro
// RA: 2311292
// DATA: 16/10/2023

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int matrixGolsCasa[10][10];
    int matrixGolsFora[10][10];
    char* paises[10] = {"Angola", "Etiopia", "Mexico", "Brasil", "China", "India", "Portugal", "Servia", "Fiji", "Samoa"};

    printf("              Angola  Etiopia  Mexico  Brasil  China  India  Portugal  Servia   Fiji   Samoa\n");

    for (size_t i = 0; i < 10; i++) {
        for (size_t j = 0; j < 10; j++) {
            if (i == j) {
                matrixGolsCasa[i][j] = 0;
                matrixGolsFora[i][j] = 0;
            } else {
                matrixGolsCasa[i][j] = rand() % 10;
                matrixGolsFora[i][j] = rand() % 10;
            }
        }
    }

    printf("             +-------------------------------------------------------------------------------+\n");
    for (size_t i = 0; i < 10; i++) {
        printf("%-8s     |", paises[i]);
        for (size_t j = 0; j < 10; j++) {
            if (i == j) {
                printf("   0   |");
            } else {
                printf("  %d-%d  |", matrixGolsCasa[i][j], matrixGolsFora[i][j]);
            }
        }
        printf("\n");
    }
    printf("             +-------------------------------------------------------------------------------+\n");

    printf("\n");
    return 0;
}