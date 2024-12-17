#include <stdio.h>
#include <string.h>
#define MAX 100

void inverte(char word[], int start, int end) {
    if (start >= end)
        return;

    char temp = word[start];
    word[start] = word[end];
    word[end] = temp;

    inverte(word, start + 1, end - 1);
}

int main(void) {
	char word[MAX];
    scanf("%s", word);

    int length = strlen(word);
    inverte(word, 0, length - 1);

    printf("Palavra invertida: %s\n", word);

    return 0;
}

