#include <stdio.h>
#include <string.h>

int main() {
    char caractere, frase[100];

    // Lê o caractere e a frase
    printf("Digite um caractere: ");
    scanf(" %c", &caractere);  // espaço antes de %c para ignorar espaços anteriores

    printf("Digite uma frase: ");
    scanf(" %[^\n]", frase);   // lê a frase até a nova linha

    // Encontra a posição do caractere na frase
    char *pos = strchr(frase, caractere);

    // Se o caractere for encontrado, imprime até ele; caso contrário, imprime a frase completa
    if (pos != NULL) {
        *pos = '\0'; // Termina a string na posição do caractere
    }

    printf("Resultado: %s\n", frase);

    return 0;
}

