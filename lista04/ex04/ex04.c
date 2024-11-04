#include <stdio.h>
#include <string.h>

int main() {
    char frase[100], palavra[30];

    printf("Digite uma frase: ");
    scanf(" %[^\n]", frase);
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    if (strstr(frase,palavra))
	printf("Sim\n");
    else
	printf("Nao\n");

    return 0;
}
