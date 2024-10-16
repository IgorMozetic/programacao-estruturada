#include <stdio.h>


int main() {
	int inicio, fim, flag, count=0;
	printf("Entre com dois numeros, sendo o primeiro menor igual ao segundo: ");
	scanf("%d %d", &inicio, &fim);
	if(inicio<=fim) {
		for(int i = inicio; i<=fim; i++) {
			flag = 0;
			for(int j = 2; j <= i/2; j++) {
 				if(i % j == 0) {
					flag++;
					break;
				}
			}
			if(flag==0 && i!=1) {
				printf("%d ", i);
				count++;
			}
		}
		if(count==0)
			printf("Nao existem primos no intervalo de %d ate %d", inicio, fim);
	} else 
		printf("o segundo numero eh maior que o primeiro");
	printf("\n");
	return 0;
}
