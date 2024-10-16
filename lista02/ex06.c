#include <stdio.h>
#define N 2
#define M 2

void le_matriz(int matriz[][M], int row, int col) {
	printf("Entre com os valores para a matriz %d x %d:\n", row, col);
	for(int i = 0; i < row; i ++) {
		for(int j = 0; j < col; j++) {
			printf("Elemento[%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
}

int verifica_matriz(int matriz[][M], int row, int col) {
	for(int i = 0; i < row; i ++) {
                for(int j = 0; j < col; j++) {
			if(matriz[i][j] != matriz[j][i])
				return 0;
                }
        }
	return 1;
}

int main() {
	int matriz[N][M], resposta;
	le_matriz(matriz, N, M);
	resposta = verifica_matriz(matriz, N, M);
	if(resposta == 1)
		printf("A Matriz eh simetrica\n");
	else
		printf("A Matriz nao eh simetrica\n");
}
