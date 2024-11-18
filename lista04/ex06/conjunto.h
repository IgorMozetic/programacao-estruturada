#ifndef CONJUNTO_H
#define CONJUNTO_H
#define CONJUNTO_MAX 100

typedef struct {
	int elementos[CONJUNTO_MAX];
	int tamanho;
} Conjunto;

Conjunto conjunto_uniao(Conjunto c1, Conjunto c2);
Conjunto conjunto_le();
int conjunto_pertence(int a, Conjunto c);
void conjunto_imprime(Conjunto c);


#endif
