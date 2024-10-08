#include <stdio.h>

int main() {
	int numero;
	printf("Entre com um numero: ");
	scanf("%d", &numero);
	for(int i = numero-1; i>0 ; i--) {
		numero *= i;
	}
	printf("n! eh = %d\n", numero);
	return 0;


}
