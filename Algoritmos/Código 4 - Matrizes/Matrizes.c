// Nome: Felipe Barroso de Castro
// RA: 2311292
// DATA: 16/10/2023

#include <stdio.h>

int main() {
    int matrixI[3][3] = {{1, 0, 1}, {0, 1, 0}, {1, 0, 1}};
    int matrixN[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};

    printf("Identidy matrix created using an array:\n");
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            printf("%d ", matrixI[i][j]);
        }
        printf("\n");
    }

    printf("Null matrix created using an array:\n");
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            printf("%d ", matrixN[i][j]);
        }
        printf("\n");
    }
    return 0;
}
