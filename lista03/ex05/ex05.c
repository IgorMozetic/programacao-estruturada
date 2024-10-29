#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int M[N][N];

    for (int cont = 0; cont < (N + 1) / 2; cont++) {
        int value = cont + 1;
        for (int i = cont; i < N - cont; i++) {
            M[cont][i] = value;
            M[N - cont - 1][i] = value;
            M[i][cont] = value;
            M[i][N - cont - 1] = value;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    return 0;
}

