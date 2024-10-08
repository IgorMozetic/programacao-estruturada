#include <stdio.h>

int main() {
       	int numero, flag = 0, primos = 0, num = 2;
	printf("Entre com o valor de n: ");
   	scanf("%d", &numero);
    	while (primos < numero) {
	 	flag = 0;
		if (num < 2) return 0;
		for (int i = 2; i <= num/2; i++) {
       			if (num % i == 0) {
            			flag++;
       	 		}
    		}
		if(flag == 0) {
			printf("%d ", num);
			primos++;
		}
		num++;
       	}
	printf("\n");
    	return 0;
}
