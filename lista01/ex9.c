#include <stdio.h>

void produto_hadamard(double u[], double v[], double resultado[], int n ) {
	for(int j = 0; j < n; j++) {
		resultado[j] = u[j] * v[j];
		printf("%f ", resultado[j]);
	}
}

int main() {
	int nuv;
	printf("Entre com o tamanho do array: ");
	scanf("%d", &nuv);
	double u[nuv], v[nuv], result[nuv];
	printf("Valores do array u: ");
	for(int i = 0; i < nuv; i++)
		scanf("%lf", &u[i]);
	printf("Valores do array v: ");
	for(int i = 0; i < nuv; i++) 
                scanf("%lf", &v[i]);
	produto_hadamard(u, v, result, nuv);
	return 0;
}
