#include <stdio.h>
#include <stdlib.h>
#define N 100

void remove_ordenado( int A[], int tam, int x ) {
	int tamanho = tam;
	for (int i = tam-1; i >= 0; i--) {
		if(A[i] == x) {
			for( int j = i; j < tamanho; j++)
				A[j] = A[j + 1];	
		tamanho--;
		}
	}
	
	printf("novo tam: %d\n", tamanho);
       
    for (int i = 0; i < tamanho; i++)
                printf("%d ", A[i]);

}

int main() {
	int n, arr[N], valor;
	printf("tam\n");
	scanf("%d", &n);
	printf("val\n");
	scanf("%d", &valor);

	for(int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
		
	remove_ordenado(arr, n, valor);

	return 0;
}
