#include <stdio.h>
#include <stdlib.h>

double power(double a, int b) {
	if( b == 1 )
		return a;
	return a * power(a, b-1);
}

int main(void) {
	double a;
	int b;
	scanf("%lf", &a);
	scanf("%d", &b);
	
	double resultado = power(a,b);
	printf("%.2lf elevado a %d eh: %.2lf\n", a,b,resultado);
	
	return 0;
}
