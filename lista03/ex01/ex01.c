#include <stdio.h>

void le_vetor(int entrada[], int n) {
    printf("Digite %d números:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &entrada[i]);
}

int busca_binaria(int vetor[], int chave, int ini, int fim) {
	while(ini <= fim)	{
		int meio = (ini + fim) / 2;
		if (vetor[meio] == chave)
			return meio;
		else if(vetor[meio] < chave)
			ini = meio + 1;
		else
			fim = meio - 1;
	}
		return -1;
}

int main() {
	int n, chave, resposta;
	printf("Entre com o valor de n: ");
	scanf("%d", &n);
	if(n < 1 || n > 100) {
                printf("O valor de n eh invalido\n");
                return 0;
        }
        int valores[n];
        le_vetor(valores, n);
	printf("Entre com o valor da chave: ");
	scanf("%d", &chave);
	resposta = busca_binaria(valores, chave, 0, n-1);
	printf("%d\n", resposta);
	return 0;
}
