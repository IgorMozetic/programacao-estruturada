#include <stdio.h>

int binomial(int n, int k) {
	if( k == 0 || n == k)
		return 1;
	
	return binomial(n-1, k) + binomial(n-1, k-1);

}

int main() {
	int n, k;
	scanf("%d", &n);
	scanf("%d", &k);

	printf("%d\n", binomial(n, k));
	
	return 0;
}
