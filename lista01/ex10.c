#include <stdio.h>

void le_vetor(int entrada[], int n) {
    printf("Digite %d números:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &entrada[i]);
}

int minimo(int v[], int n) {
    int menor = v[0];
    for(int i = 1; i < n; i++) {
        if(v[i] < menor)
            menor = v[i];
    }
    return menor;
}

int maximo(int v[], int n) {
    int maior = v[0];
    for(int i = 1; i < n; i++) {
        if(v[i] > maior)
            maior = v[i];
    }
    return maior;
}

double media(int v[], int n) {
    double soma = 0;
    for(int i = 0; i < n; i++) {
        soma += v[i];
    }
    return soma / n;
}

int main() {
    int n;
    printf("Entre com o valor de n: ");
    scanf("%d", &n);
    int entrada[n];
    le_vetor(entrada, n);
    printf("O valor minimo eh: %d\n", minimo(entrada, n));
    printf("O valor maximo eh: %d\n", maximo(entrada, n));
    printf("O valor da media eh: %.2f\n", media(entrada, n));
    return 0;
}
