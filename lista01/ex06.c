#include <stdio.h>
#include <string.h>
#define N 100

int subsequencia( char S[] , char T[]) {
	int tam = strlen(S), tam_P = strlen(T), j=0;
	for (int i = 0; i < tam && j < tam_P; i++)
		if(S[i] == T[j])
			j++;
	
	return (j == tam_P);
}

int main() {
	char S[N], T[N];
	scanf("%s", S);
	scanf("%s", T);
	
	if(subsequencia(S, T))
		printf("Subsequente\n");
	else
		printf("Nao subsequente\n");

	return 0;
}
