// Nome: Felipe Barroso de Castro
// RA: 2311292

#include <stdio.h>
#include <string.h>

typedef struct {
    double x;
    double y;
} Coordenada;

int main(void){
    Coordenada c;
    c.x = 1.67;
    c.y = 0.8;

    printf("Local de C esta em %f x %f\n", c.x, c.y);

    Coordenada d = {2, 6.4};
    printf("Local de D esta em %f x %f\n", d.x, d.y);

    Coordenada e = {.x = 3, .y = 4};
    printf("Local de D esta em %f x %f\n", e.x, e.y);

    char cidade1[10] = "Brasilia";
    printf ("Cidade: %s\n", cidade1);

    char cidade2[10];
    strcpy(cidade2, "Brasilia");
    printf("Cidade: %s\n", cidade2);

    return 0;
}