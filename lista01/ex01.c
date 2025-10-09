#include <stdio.h>
#include <stdlib.h>
#define N 100
int main() {
	int n, arr[N], result, num1, num2, menor;
	scanf("%d", &n);

	for(int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
		
	for(int i = 0; i < n; i++) {
		for(int j = i+1; j < n; j++) {
			result = abs(arr[i] - arr[j]);
			if (i == 0 && j == 1) {
				num1 = arr[i];
				num2 = arr[j]; 
				menor = abs(result);
			}
			
			if( menor > result ) {
				num1 = arr[i];
				num2 = arr[j]; 
				menor = abs(result);
			}
				
		}
	}
	
	printf("Menor diferenca eh %d entre %d e %d\n", menor, num1, num2);

	return 0;
}
