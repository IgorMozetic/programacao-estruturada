#include "matriz.h"
#include <stdio.h>
#include <stdlib.h>

Matriz matriz_nova(int linhas, int colunas, double elementos[MATRIZ_MAX][MATRIZ_MAX]) {
	Matriz m;
	m.linhas = linhas;
	m.colunas = colunas;
	for(int i = 0; i < linhas; i++)
		for(int j = 0; j < colunas; j++)
			m.elementos[i][j] = elementos[i][j];
	return m;
}

void matriz_imprime(Matriz m) {
	for(int i = 0; i < m.linhas; i++) {
		for(int j = 0; j < m.colunas; j++)
			printf("%lf ", m.elementos[i][j]);
		printf("\n");
	}
}

Matriz matriz_adiciona(Matriz m1, Matriz m2) {
	if(m1.linhas != m2.linhas || m1.colunas != m2.colunas) {
		printf("Erro.");
		exit(1);
	}
	
	Matriz m;
	m.linhas = m1.linhas;
	m.colunas = m1.colunas;
	
	for(int i = 0; i < m.linhas; i++)
		for(int j = 0; j < m.colunas; j++)
			m.elementos[i][j] = m1.elementos[i][j] + m2.elementos[i][j];
	return m;
}

Matriz matriz_multiplica(Matriz m1, Matriz m2) {
	if(m1.linhas != m2.linhas || m1.colunas != m2.colunas) {
		printf("Erro.");
		exit(1);
	}
	
	Matriz m;
	m.linhas = m1.linhas;
	m.colunas = m1.colunas;
	
	for(int i = 0; i < m.linhas; i++)
		for(int j = 0; j < m.colunas; j++) {
			m.elementos[i][j] = 0;
			for(int k = 0; k < m.colunas; k++)
				m.elementos[i][j] += m1.elementos[i][k] * m2.elementos[k][j];
		}
	return m;
}
