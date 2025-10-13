#include <stdio.h>
#include <string.h>
#define N 100

int contido(int A[], int tamA, int B[], int tamB) {
    for (int i = 0; i < tamA; i++) {
        int encontrado = 0;
        for (int j = 0; j < tamB; j++) {
            if (A[i] == B[j]) {
                encontrado = 1;
                break;
            }
        }
        if (!encontrado)
            return 0;
    }
    return 1;
}

int main() {
	int tam_A, tam_B, A[N], B[N];
	scanf("%d", &tam_A);
	for(int i = 0; i < tam_A; i++)
		scanf("%d", &A[i]);
	scanf("%d", &tam_B);
	for(int i = 0; i < tam_B; i++)
		scanf("%d", &B[i]);
	
	if(contido(A, tam_A, B, tam_B))
		printf("Contido\n");
	else
		printf("Nao contido\n");

	return 0;
}
