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

void swap_matriz(int*** A, int*** B) {
  int** tmp = *A;
  *A = *B;
  *B = tmp;
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

  printf("Apos a troca:\n");
  swap_matriz(&M, &N);

  printf("Matriz M\n");
  print_matriz(M, nlines, ncols);

  printf("Matriz N\n");
  print_matriz(N, mlines, mcols);

  free_matriz(M, nlines);
  free_matriz(N, mlines);
  return 0;
}
