#include <stdio.h>

void le_vetor(int entrada[], int n) {
	printf("Digite %d numeros do vetor\n", n);
	for (int i = 0; i < n; i++)
	        scanf("%d", &entrada[i]);
}

int busca(int valores[], int n, int chave) { 
        for(int i = 0; i < n; i++) { 
                if(valores[i] == chave)
                        return i;
	}
	return -1;
}

int main() { 
        int n, chave, resposta;
        printf("Entre com o numero de itens do vetor: ");
	scanf("%d", &n);
	int valores[n];
	le_vetor(valores, n);
	printf("Entre com a chave do vetor: ");
        scanf("%d", &chave);
	resposta = busca(valores, n, chave);
	printf("%d\n", resposta);
        return 0;
}

