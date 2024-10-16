#include <stdio.h>

int fatorial(int a) {
	for(int i=a-1; i>0; i--)
		a *= i;
	return a;
}

int main() {
	int n, k, resp;
	printf("Entre com dois numeros, sendo o segundo menor que o primeiro: ");
	scanf("%d %d", &n, &k);
	if(!(k>n)) {
		resp = n-k;
		resp = (fatorial(n))/(fatorial(k) * (fatorial(resp)));
		printf("%d", resp);
	} else 
		printf("o segundo numero eh maior que o primeiro.\n");
	
	return 0;

}
