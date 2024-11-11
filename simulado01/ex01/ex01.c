#include <stdio.h>

int main() {
	int b, h;
	double area;
	scanf("%d %d", &b, &h);
	if ( b <= 0 || h > 10000 )
		return 0;
	area = (b*h)/2.0;
	printf("AREA DO TRIANGULO: %.2lf \n", area);

	return 0;
}
