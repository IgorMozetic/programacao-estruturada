#include <stdio.h>
#include <stdlib.h>
#define N 100

void insere_ordenado( int A[], int tam, int x ) {

	int posicao = 0;
	for (posicao = 0; A[posicao] < x; posicao++);
	for( int j = tam; j > posicao; j--)
		A[j] = A[j - 1];
	
	A[posicao] = x;
	
	for (int i = 0; i < tam+1; i++)
        	printf("%d ", A[i]);
        	
    printf("\n");
    
}

int main() {
	int n, arr[N], valor;
	printf("tam\n");
	scanf("%d", &n);
	printf("val\n");
	scanf("%d", &valor);

	for(int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
		
	insere_ordenado(arr, n, valor);

	return 0;
}
