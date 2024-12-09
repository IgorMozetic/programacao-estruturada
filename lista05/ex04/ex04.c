#include <stdio.h>

void inc(int *num) {
	*num = *num + 1 ;
}

int main() {
    int num;

    printf("Digite o valor de x: ");
    scanf("%d", &num);

    printf("Antes do inc(%d) = %d\n", num, num);

    inc(&num);

    printf("Após o inc(%d) = %d\n", num, num);

    return 0;
}

