#include <stdio.h>
#include "matriz.h"

int main() {
	double elementos1[MATRIZ_MAX][MATRIZ_MAX] = {{1,2},{3,4}};
	double elementos2[MATRIZ_MAX][MATRIZ_MAX] = {{5,6},{7,8}};
	Matriz m1 = matriz_nova(2,2,elementos1);
	Matriz m2 = matriz_nova(2,2,elementos2);
	Matriz m3 = matriz_adiciona(m1, m2);
	Matriz m4 = matriz_multiplica(m1, m2);
	
	printf("Matriz 1:\n");
	matriz_imprime(m1);
	printf("Matriz 2:\n");
	matriz_imprime(m2);
	printf("Soma:\n");
	matriz_imprime(m3);
	printf("Multiplicacao:\n");
	matriz_imprime(m4);

	return 0;
}
