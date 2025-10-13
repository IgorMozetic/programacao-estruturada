#include <stdio.h>
#include <string.h>
#define N 100

int interseccao( int A[], int tamA, int B[], int tamB, int C[] ) {
    int tam_C = 0;
    for (int i = 0; i < tamA; i++) {
        for (int j = 0; j < tamB; j++) {
            if (A[i] == B[j]) {
                C[tam_C] = B[j];
                tam_C++;
                break;
            }
        }
    }
    return tam_C;
}

int main() {
	int tam_A, tam_B, A[N], B[N], C[N];
	scanf("%d", &tam_A);
	for(int i = 0; i < tam_A; i++)
		scanf("%d", &A[i]);
	scanf("%d", &tam_B);
	for(int i = 0; i < tam_B; i++)
		scanf("%d", &B[i]);
	
	printf("%d\n", interseccao(A, tam_A, B, tam_B, C));
	return 0;
}
