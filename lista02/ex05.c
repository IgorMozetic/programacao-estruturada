#include <stdio.h>
#define N 2
#define M 3

void le_matriz(int matriz[][M], int row, int col) {
	printf("Entre com os valores para a matriz %d x %d:\n", row, col);
	for(int i = 0; i < row; i ++) {
		for(int j = 0; j < col; j++) {
			printf("Elemento[%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}

	printf("\n");
}

void transposta_matriz(int matrizA[][M], int matrizTransposta[][N],  int row, int col) {
	printf("A Matriz Original eh: \n");
        for(int i = 0; i < row; i ++) {
                for(int j = 0; j < col; j++)
                        printf("[%d][%d]: %d ", i, j, matrizA[i][j]);
        	printf("\n");
	}

	printf("\n");

	printf("A Matriz Transposta eh: \n");
	for(int i = 0; i < row; i ++) {
                for(int j = 0; j < col; j++) {
			matrizTransposta[j][i] = matrizA[i][j];
                        printf("[%d][%d]: %d ", j, i, matrizTransposta[j][i]);
                }
		printf("\n");
        }

        printf("\n");
}

int main() {
	int matrizA[N][M], matrizTransposta[M][N];
	le_matriz(matrizA, N, M);
	transposta_matriz(matrizA, matrizTransposta, N, M);
}
