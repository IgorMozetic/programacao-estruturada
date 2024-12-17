#include <stdio.h>
#include <stdlib.h>

void count_down(int n) {
	if( n == 0 )
		return;
	printf("%d\n", n);
	count_down(n-1);
}

int main(void) {
	int n;
	scanf("%d", &n);
	count_down(n);
	return 0;
}
