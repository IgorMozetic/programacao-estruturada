#include <stdio.h>

int main() {
	
	int n, resto, invertido = 0;
	scanf("%d", &n);
	
	while (n != 0) {
		resto = n % 10;
		invertido = (invertido * 10) + resto;
		n = n / 10;
	}
	
	printf("%d\n", invertido);
	
	return 0;
}
