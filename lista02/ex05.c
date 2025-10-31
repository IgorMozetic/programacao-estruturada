#include <stdio.h>
#include <string.h>
#define N 100 

int subsequencia(char* S, char* T, int inicio, int tamS, int tamT, int cont) {
	if (cont == tamT)
        return 1;
    
    if (inicio == tamS && cont != tamT)
    	return 0;
    
    if (S[inicio] == T[cont])
    	return subsequencia(S, T, inicio + 1, tamS, tamT, cont + 1);
    		
    return subsequencia(S, T, inicio + 1, tamS, tamT, cont);
}

int main() {
	char S[N], T[N];
	scanf("%s", S);
	scanf("%s", T);
	
	if( subsequencia(S, T, 0, strlen(S), strlen(T), 0) )
		printf("%s eh subsequencia de %s\n", T, S);
	else
		printf("%s nao eh subsequencia de %s\n", T, S);
	
	return 0;
}
