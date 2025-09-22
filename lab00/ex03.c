#include <stdio.h>

int main() {

	int n, i = 0, j = 2;
	scanf("%d", &n);
	
	while( i < n ) {
		int primo = 1;
		for(int k = 2; k <= j / 2; k++)
			if ( j % k == 0 ) {
				primo = 0;
				break;
			}
		if (primo == 1) { 
			printf("%d\n", j);
			i++;
		}
		j++;
	
	}
	return 0;
}
