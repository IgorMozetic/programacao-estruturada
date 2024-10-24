#include <stdio.h>
#define MAX 9

void le_matriz(int matriz[][MAX]) {
    for (int i = 0; i < MAX; i++)
        for (int j = 0; j < MAX; j++)
            scanf("%d", &matriz[i][j]);
}

int verifica_sudoku(int matriz[][MAX]) {
    int rows[MAX][MAX] = {0}; 
    int cols[MAX][MAX] = {0}; 
    int sub_grid[MAX][MAX] = {0}; 

    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            int valor = matriz[i][j];
            if (valor < 0 || valor > MAX) return 0; 
            if (valor == 0) continue; 
            
            int index_grid = (i / 3) * 3 + (j / 3);
            if ((rows[i][valor - 1] == 1) || (cols[j][valor - 1] == 1) || (sub_grid[index_grid][valor - 1] == 1)) return 0;

            rows[i][valor - 1] = 1;
            cols[j][valor - 1] = 1;
            sub_grid[index_grid][valor - 1] = 1;
        }
    }
    return 1;
}

int main() {
    int matriz[MAX][MAX], resposta;
    le_matriz(matriz);
    resposta = verifica_sudoku(matriz);
    if (resposta == 1)
        printf("A matriz eh valida\n");
    else
        printf("A matriz eh invalida\n");
    return 0;
}

