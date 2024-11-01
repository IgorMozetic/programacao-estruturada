#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char frase[100];
    
    printf("Digite uma frase: ");
    scanf(" %[^\n]", frase);
    
    for (int i = 0; i < strlen(frase); i++) {
    	if (isalpha(frase[i])) {
        	if (isupper(frase[i]))
        		frase[i] = tolower(frase[i]);
        	else
        		frase[i] = toupper(frase[i]);
    	}
    }
    
    printf("Resultado: %s \n", frase);
    return 0;
}
