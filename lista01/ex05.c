#include <stdio.h>
#include <string.h>
#define N 100

int palindroma( char S[] ) {
	int tam = strlen(S);
	for (int i = 0; i < tam/2; i++) {
		if(S[i] != S[tam-i-1]) {
			return 0;
		}
	}	
	return 1;
}

int main() {
	char string[N];
	scanf("%s", string);
	
	if(palindroma(string))
		printf("Palindroma\n");
	else
		printf("Nao palindroma\n");

	return 0;
}
