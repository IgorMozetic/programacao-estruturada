#include <stdio.h>

int main() {
	
	int n, numero, anterior, segmento = 0;
	scanf("%d", &n);
	
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &numero);
		if (anterior != numero || i == 0) {
			anterior = numero;
			segmento++;
		}
	}
			
	printf("%d\n", segmento);
	
	return 0;
}
