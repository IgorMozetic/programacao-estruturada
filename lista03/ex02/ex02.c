#include <stdio.h>
#define MAX 1000
/*		CODIGO PARA USUARIO DIGITAR NO TERMINAL 

void le_matriz(int matriz[][MAX], int n) {
    printf("Entre com os valores para a matriz %d x %d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Elemento[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
	}
    }
}

void soma_diagonal_matriz(int matriz[][MAX], int n) {
	int soma = 0;
	for(int i = 0; i < n; i++)
		soma += matriz[i][i];
	printf("O valor da soma e: %d", soma);
}

void media_diagonal_superior_matriz(int matriz[][MAX], int n) {
	double soma = 0;
	int cont = 0;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(j > i) {
				soma += matriz[i][j];
				cont++;
			}
		}
	}
	printf("O valor medio eh: %.2f", (soma/cont));
}

int main() {
	int n, matriz[MAX][MAX];
	char c;
	printf("Entre com o valor de n: ");
	scanf("%d", &n);
	le_matriz(matriz, n);
	printf("Entre com:\n S para ter a soma dos elementos da diagonal principal\n M para calcular a media dos elementos que estao acima da diagonal superior\nEscolha: ");
	scanf(" %c", &c);
	if(c == 'S' || c == 's')
		soma_diagonal_matriz(matriz, n);
	else if(c == 'M' || c == 'm')
		media_diagonal_superior_matriz(matriz, n);
	else {
		printf("O caracter digitado e invalido");
		return 0;
	}
	printf("\n");
	return 0;
} */


void le_matriz(int matriz[][MAX], int n) {
    for (int i = 0; i < n; i++)
	for (int j = 0; j < n; j++)
		scanf("%d", &matriz[i][j]);
}

void soma_diagonal_matriz(int matriz[][MAX], int n) {
	int soma = 0;
	for(int i = 0; i < n; i++)
		soma += matriz[i][i];
	printf("O valor da soma e: %d", soma);
}

void media_diagonal_superior_matriz(int matriz[][MAX], int n) {
	double soma = 0;
	int cont = 0;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(j > i) {
				soma += matriz[i][j];
				cont++;
			}
		}
	}
	printf("O valor medio eh: %.2f", (soma/cont));
}

int main() {
	int n, matriz[MAX][MAX];
	char c;
	scanf("%d", &n);
	le_matriz(matriz, n);
	scanf(" %c", &c);
	if(c == 'S' || c == 's')
		soma_diagonal_matriz(matriz, n);
	else if(c == 'M' || c == 'm')
		media_diagonal_superior_matriz(matriz, n);
	else {
		printf("O caracter digitado e invalido");
		return 0;
	}
	printf("\n");
	return 0;
}

