#include <stdio.h>
#define MAX 1000

void le_matriz(int matriz[][MAX], int row, int col) {
    printf("Entre com os valores para a matriz %d x %d:\n", row, col);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Elemento[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void troca_matriz(int matriz[][MAX], int row, int col, int row1, int row2) {
    int temp;
    for (int l = 0; l < col; l++) {
        temp = matriz[row1][l];
        matriz[row1][l] = matriz[row2][l];
        matriz[row2][l] = temp;
    }

    printf("A matriz com as linhas %d e %d trocadas de posição é:\n", row1 + 1, row2 + 1);
    for (int k = 0; k < row; k++) {
        for (int l = 0; l < col; l++) {
            printf("%d ", matriz[k][l]);
        }
        printf("\n");
    }
}

int main() {
    int n, m, i, j, matriz[MAX][MAX];
    printf("Entre com o valor de n: ");
    scanf("%d", &n);
    printf("Entre com o valor de m: ");
    scanf("%d", &m);
    le_matriz(matriz, n, m);
    printf("Entre com o valor de i: ");
    scanf("%d", &i);
    printf("Entre com o valor de j: ");
    scanf("%d", &j);

    if (i > 0 && i <= n && j > 0 && j <= n && i != j) {
        troca_matriz(matriz, n, m, i - 1, j - 1);
    } else {
        printf("Valores de i e j inválidos ou iguais.\n");
    }

    return 0;
}
