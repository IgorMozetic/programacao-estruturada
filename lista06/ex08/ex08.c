#include <stdio.h>

void collatz(int n) {
    if (n == 1) {
        printf("%d ", n);
        return;
    }

    if (n % 2 == 0) {
        printf("%d ", n);
        collatz(n / 2);
    } 
    else {
        printf("%d ", n);
        collatz(3 * n + 1);
    }
}

int main(void) {
    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    collatz(n);

    return 0;
}

