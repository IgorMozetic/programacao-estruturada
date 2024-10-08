#include <stdio.h>

int main() {
	int n, soma = 0, prev1 = 1, prev2 = 1;
	printf("Entre com o valor de n: ");
	scanf("%d", &n);
	for(int i = 1; i <= n; i++) {
		if(i == 1)
			printf("%d ", prev2);
		else if(i == 2)
			printf("%d ", prev1);
		else {
			soma = prev2 + prev1;
			prev2 = prev1;
			prev1 = soma;
			printf("%d ", soma);
		}
	}
	return 0;
}
