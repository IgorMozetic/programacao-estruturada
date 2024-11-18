#include "conjunto.h"
#include <stdio.h>

void conjunto_imprime(Conjunto c) {
	printf("{");
	for( int i = 0; i < c.tamanho; i++) {
		printf("%d", c.elementos[i]);
		if(i < c.tamanho - 1)
			printf(", ");
	}
	printf("}\n");
}

int conjunto_pertence(int a, Conjunto c) {
	for( int i = 0; i < c.tamanho; i++) {
		if(c.elementos[i] == a)
			return 1;
	}
	return 0;
}

Conjunto conjunto_uniao(Conjunto c1, Conjunto c2) {
	Conjunto c;
	for(int i = 0; i < c1.tamanho; i++)
		c.elementos[i] = c1.elementos[i];
	int i = 0;
	while(i<c2.tamanho) {
		if(!(conjunto_pertence(c2.elementos[i],c)))
			c.elementos[c.tamanho++] = c2.elementos[i];
		i++;
	}	
	return c;
}

Conjunto conjunto_le() {
	Conjunto c;
	int n;
	printf("Entre com o tamanho do conjunto: ");
	scanf("%d", &n);
	printf("Entre com os %d valores do conjunto:\n", n);
	for(int i = 0; i < n; i++)
		scanf("%d", &c.elementos[i]);
	c.tamanho = n;
	return c;
}

