#include <stdio.h>
#include <string.h>
#define N 100 

int palindroma(char* str, int inicio, int fim) {
	if (inicio >= fim)
        return 1;
    
    if (str[inicio] != str[fim])
    	return 0;

    return palindroma(str, inicio + 1, fim - 1);
}

int main() {
	char str[N];
	scanf("%s", str);
	
	if( palindroma(str, 0, strlen(str)-1) )
		printf("%s eh palindroma\n", str);
	else
		printf("%s nao eh palindroma\n", str);
	
	return 0;
}
