#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) 
{
    int op;
    float n1, n2, res;
    printf("Enter 1 to add;\n");
    printf("Enter 2 to subtract;\n");
    printf("Enter 3 to multiply;\n");
    printf("Enter 4 to divide;\n");
    scanf("%d", &op);

    printf("Enter the first number\n");
    scanf("%f", &n1);
    printf("Enter the second number:\n");
    scanf("%f", &n2);

    if(op == 1){
        res = n1 + n2;
        printf("Add: %.f\n", res);
    }

    if(op == 2){
        res = n1 - n2;
        printf("Subtr.: %f.\n", res);
    }

    if(op == 3){
        res = n1 * n2;
        printf("Multi.: %.1f.\n", res);
    }

    if(op == 4){
        res = n1 / n2;
        printf("Div.: %.1f.\n", res);
    }

    return 0;
}