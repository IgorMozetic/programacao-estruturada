#include <stdio.h>

int main() {
	int numero;
	printf("Entre com um numero: ");
	scanf("%d", &numero);
	for(int i = 0; i<=numero; i++) {
		if(i % 2 == 0) 
			printf("%d\n", i);
	}
	return 0;


}
