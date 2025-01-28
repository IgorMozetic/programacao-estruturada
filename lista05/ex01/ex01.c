#include <stdio.h>
#include <stdlib.h>

void read_vals(int *nums, int n) {
    printf("Digite %d números inteiros:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);
}

void media_vals(int *nums, int n) {
    	float soma = 0.0;
	for (int i = 0; i < n; i++)
		soma += nums[i];
	printf("A media eh: %.2f\n", (soma / n));
}

int main(void) {

	int n;
	int *numeros;
	printf("Entre com o valor de dados a serem lidos: ");
	scanf("%d", &n);

	if ( n <= 0 )
		return 1;

	numeros = malloc(n * sizeof(int));

	read_vals(numeros, n);
	media_vals(numeros, n);


	free(numeros);
	return 0;
}
