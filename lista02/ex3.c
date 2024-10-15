#include <stdio.h>

void le_vetor(int entrada[], int n) {
    printf("Digite %d números:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &entrada[i]);
}

void ordena(int valores[], int n) {
	int aux;
	for(int i = 0; i < n; i++) {
		for(int j = i+1; j < n; j++) {
			if(valores[i] > valores[j]) {
				aux = valores[i];
				valores[i] = valores[j];
				valores[j] = aux;
			}
		}
	}
}

int main() {
	int n;
	printf("Entre com o numero de n: ");
	scanf("%d", &n);
	if(n < 1 || n > 100) {
                printf("O valor de n eh invalido\n");
                return 0;
        }
	int valores[n];
	le_vetor(valores, n);
	ordena(valores, n);
	for(int i = 0; i < n; i++)
		printf("%d ", valores[i]);
	return 0;
}
