#include <stdio.h>
#include <string.h>

int main() {
    char numeros[100];
    int max_cadeia = 0, cont_cadeia = 0, fim;

    printf("Digite uma string: ");
    scanf("%s", numeros);

    for (int i = 0; i < strlen(numeros); i++) {
        if (numeros[i] == '0') {
            cont_cadeia++;
            if (cont_cadeia > max_cadeia) {
                max_cadeia = cont_cadeia;
		fim = i+1;
            }
        } else
            cont_cadeia = 0;
    }
    printf("O tamanho da maior cadeia de '0's é: %d entre as posicoes %d e %d\n", max_cadeia, (fim-max_cadeia), fim);
    return 0;
}

