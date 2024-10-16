#include <stdio.h>
#define N 3
#define M 4

void le_matriz(int matriz[][M], int row, int col, char id) {
	printf("Entre com os valores para a matriz %c de %d x %d:\n", id, row, col);
	for(int i = 0; i < row; i ++) {
		for(int j = 0; j < col; j++) {
			printf("Elemento[%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
}

void calcula_matriz(int matrizA[][M], int matrizB[][M], int matrizC[][M],  int row, int col) {
	printf("Os valores de A[i][j] + B[i][j] = C[i][j] sao:\n");
	for(int i = 0; i < row; i ++) {
                for(int j = 0; j < col; j++) {
			matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
                        printf("%d + %d = %d\n", matrizA[i][j], matrizB[i][j], matrizC[i][j]);
                }
        }
}

int main() {
	int matrizA[N][M], matrizB[N][M], matrizC[N][M];
	le_matriz(matrizA, N, M, 'A');
	le_matriz(matrizB, N, M, 'B');
	calcula_matriz(matrizA, matrizB, matrizC, N, M);
}
