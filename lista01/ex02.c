#include <stdio.h>


int main() {
	int numero, flag;
	printf("Entre com um numero: ");
	scanf("%d", &numero);
	for(int i = 1; i<=numero; i++) {
		flag = 0;
		for(int j = 2; j <= i/2; j++) {
 			if(i % j == 0) {
				flag++;
				break;
			}
		}
		if(flag==0 && i!=1)
			printf("%d ", i);
	}
	printf("\n");
	return 0;
}
