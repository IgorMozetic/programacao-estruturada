#include <stdio.h>
#include <string.h>
#define N 100

int anagrama( char S[] , char T[]) {
	int tam_S = strlen(S), tam_T = strlen(T), j=0;
	if(tam_S != tam_T) 
		return 0;
		
	for (int i = 0; i < tam_S; i++) {
        for (int k = 0; k < tam_T; k++) {
            if (S[i] == T[k]) {
                T[k] = '0';
                j++;
                break;
			}
        }
    }
	return (j == tam_S);
}

int main() {
	char S[N], T[N];
	scanf("%s", S);
	scanf("%s", T);
	
	if(anagrama(S, T))
		printf("Anagrama\n");
	else
		printf("Nao anagrama\n");

	return 0;
}
