#include <stdio.h>

int main() {
    int escala;
    float valor, valorConvertido;
    
    printf("Entre com a medida de temperatura:\n1 para Celsius\n2 para Fahrenheit\n");
    scanf("%d", &escala);
    
    if (escala == 1 || escala == 2) {
        printf("Entre com o valor da temperatura: ");
        scanf("%f", &valor);
        
        if (escala == 1) {
            valorConvertido = (valor * (9.0 / 5)) + 32;
            printf("Seu valor em Fahrenheit eh = %.2f\n", valorConvertido);
        } else if (escala == 2) {
            valorConvertido = (valor - 32) * (5.0 / 9);
            printf("Seu valor em Celsius eh = %.2f\n", valorConvertido);
        }
    } else {
        printf("Selecione um numero correto\n");
    }
    
    return 0;
}

