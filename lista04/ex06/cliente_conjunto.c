#include <stdio.h>
#include "conjunto.h"

int main() {
	printf("Para o programa, serao utilziados 2 conjuntos\n");
	Conjunto c1 = conjunto_le();
	Conjunto c2 = conjunto_le();
	printf("Conjunto 1:\n");
	conjunto_imprime(c1);
	printf("Conjunto 2:\n");
	conjunto_imprime(c2);
	printf("Uniao:\n");
	conjunto_imprime(conjunto_uniao(c1,c2));
	printf("3 pertence ao Conjunto 1?\n");
	if(conjunto_pertence(3,c1))
		printf("Sim\n");
	else
		printf("Nao\n");
	return 0;
}
