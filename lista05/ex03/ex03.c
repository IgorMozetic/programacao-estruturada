#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);

    printf("Antes da troca: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("Após a troca: x = %d, y = %d\n", x, y);

    return 0;
}

