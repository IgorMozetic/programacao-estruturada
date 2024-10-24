#include <stdio.h>
#define MAX 1000

void le_matriz(int matriz[][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &matriz[i][j]);
}

void busca_sabre(int matriz[][MAX], int rows, int cols) {
    int cont = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if(matriz[i][j] == 42) {
                if((i > 0 && i < rows) && (j > 0 && j < cols)) {
                    if(matriz[i-1][j-1] == 7 && matriz[i-1][j] == 7 && matriz[i-1][j+1] == 7 && matriz[i][j-1] == 7 && matriz[i][j+1] == 7 && matriz[i+1][j-1] == 7 && matriz[i+1][j] == 7 &&  matriz[i+1][j+1] == 7) {
                        printf("O Sabre numero %d encontra-se na posicao (%d)(%d)\n", cont, i, j);
                        cont++;
                    }
                }
            }
        }
    }
    
    if(cont == 1)
        printf("Nao foi encontrado nenhum sabre\n");
}

int main() {
    int matriz[MAX][MAX], n = 0, m = 0;
    scanf("%d %d", &n, &m);
    le_matriz(matriz,n,m);
    busca_sabre(matriz,n,m);
    return 0;
}

