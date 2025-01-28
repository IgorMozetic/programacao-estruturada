#include <stdio.h>

int gcd(int a, int b) {
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main(void) {
    
    int a, b;
    scanf("%d", &a);
	scanf("%d", &b);
		
    printf("GCD(%d, %d) = %d\n", a, b, gcd(a, b));
    
    return 0;
}
