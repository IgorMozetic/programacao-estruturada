#include <stdio.h>
#include <stdlib.h>

void read_vals(char *chars, int n) {
    printf("Digite %d caracteres:\n", n);
    for (int i = 0; i < n; i++)
        scanf(" %c", &chars[i]);
}

int main(void) {

	int n;
	char *chars;
	printf("Entre com o valor de dados a serem lidos: ");
	scanf("%d", &n);

	if ( n <= 0 )
		return 1;

	chars = malloc(n * sizeof(int));

	read_vals(chars, n);

	printf("Detalhes dos dados\n");
	for (int i = 0; i < n; i++)
		printf("Entrada: %d; Conteudo: %c; Endereco: %p\n", i, chars[i], &chars[i]);

	free(chars);

	return 0;
}
