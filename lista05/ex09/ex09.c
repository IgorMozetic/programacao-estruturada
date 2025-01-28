#include <stdio.h>
#include <stdlib.h>

int** matriz(int lines, int cols) {
  int **Matriz = malloc(lines*sizeof(int*));
  for (int i = 0; i < lines; i++)
    Matriz[i] = malloc(cols*sizeof(int));
  return Matriz;
}

void le_matriz(int** Matriz, int lines, int cols) {
  for (int i = 0; i < lines; i++)
    for (int j = 0; j < cols; j++)
      scanf("%d", &Matriz[i][j]);
}

void print_matriz(int** Matriz, int lines, int cols) {
  for (int i = 0; i < lines; i++) {
    for (int j = 0; j < cols; j++) 
      printf("%d ", Matriz[i][j]);
    printf("\n");
  }
}

void free_matriz(int** Matriz, int lines) {
  for (int i = 0; i < lines; i++)
    free(Matriz[i]);
  free(Matriz);
}

int main(void) {

  int mlines, mcols;
  scanf("%d %d", &mlines, &mcols);
  int** M = matriz(mlines, mcols);
  le_matriz(M, mlines, mcols);

  int nlines, ncols;
  scanf("%d %d", &nlines, &ncols);
  int** N = matriz(nlines, ncols);
  le_matriz(N, nlines, ncols);

  printf("Matriz M\n");
  print_matriz(M, mlines, mcols);

  printf("Matriz N\n");
  print_matriz(N, nlines, ncols);

  free_matriz(M, mlines);
  free_matriz(N, nlines);
  return 0;
}
