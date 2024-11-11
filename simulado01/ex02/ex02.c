#include <stdio.h>
#define MAX 200

void le_matriz(int matriz[][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

void quadradoMatriz(int matriz[MAX][MAX], int resultado[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                resultado[i][j] += matriz[i][k] * matriz[k][j];
            }
            printf("%d, ", resultado[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    int matriz[MAX][MAX], resultado[MAX][MAX];
    scanf("%d", &n);

    if (n < 1 || n > MAX) {
        return 0;
    }

    le_matriz(matriz, n);
    quadradoMatriz(matriz, resultado, n);

    return 0;
}

