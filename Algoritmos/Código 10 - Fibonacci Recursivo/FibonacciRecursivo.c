// Nome: Felipe Barroso de Castro
// RA: 2311292
// DATA: 21/11/2023

#include <stdio.h>
/* Prédio
	 Definição Recursiva: para todo x >= 0
			p(x) = p(x-1)+1 andar, se x > 0
		    p(x) = 0, se x == 0 */
		        
// Passo Recursivo
int p(int x){
	if (x > 0) return p(x-1) + 1;
	if (x == 0) return 0;
	printf ("Entrada invalida!\n");
	return 0;
} 
int main (void) {
	int resultado = p(5);
	printf ("Para p(%d) o resultado eh %d\n", 5, resultado);
	printf ("Para p(%d) o resultado eh %d\n", 3 , p(3));
	printf ("Para p(%d) o resultado eh %d\n", -2, p(-2));
	return 0;
}