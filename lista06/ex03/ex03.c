#include <stdio.h>
#include <stdlib.h>
#define MAX 100

double soma(int v[], int n) {
	if( n == -1 )
		return 0;
	return v[n] + soma(v,n-1);
}

int main(void) {
	int v[MAX], n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
		scanf("%d", &v[i]);
	
	int resultado = soma(v,n-1);
	printf("soma do vetor eh: %d\n", resultado);
	
	return 0;
}
