#ifndef MATRIZ_H
#define MATRIZ_H
#define MATRIZ_MAX 100

typedef struct {
	double elementos[MATRIZ_MAX][MATRIZ_MAX];
	int linhas;
	int colunas;
} Matriz;

Matriz matriz_nova(int linhas, int colunas, double elementos[MATRIZ_MAX][MATRIZ_MAX]);
void matriz_imprime(Matriz m);
Matriz matriz_adiciona(Matriz m1, Matriz m2);
Matriz matriz_multiplica(Matriz m1, Matriz m2);

#endif
