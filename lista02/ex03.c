#include <stdio.h>
#define N 100 

void imprime(int n, int arr[N]) {
	if( n == 0 )
		return;
	
	printf("%d\n", arr[n-1]);
	imprime(n-1, arr);
	
}

int main() {
	int n, arr[N];
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	
	imprime(n, arr);
	
	return 0;
}
