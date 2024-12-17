#include <stdio.h>
#include <stdlib.h>

int* array(int n) {
  int *arr = malloc(n*sizeof(int));
  return arr;
}

void le_array(int* arr, int n) {
  for (int i = 0; i < n; i++)
      scanf("%d", &arr[i]);
}

int* cartesiano(int* v1, int* v2, int n1, int n2) {
  
  int* result = malloc((n1+n2)*sizeof(int));
  for (int i = 0; i < n1; i++) {
  	result[i] = v1[i];
  }
  for (int j = 0; j < n2; j++) {
    result[n1 + j] = v2[j];
  }

  return result;
}


int main(void) {

  int n1, n2;
  scanf("%d %d", &n1, &n2);
  
  int* v1 = array(n1);
  le_array(v1, n1);
  int* v2 = array(n2);
  le_array(v2, n2);


  int* resultado = cartesiano(v1, v2, n1, n2);
  
  printf("Array concatenado: ");
  for (int i = 0; i < (n1 + n2); i++) {
    printf("%d ", resultado[i]);
  }
  printf("\n");

  free(v1);
  free(v2);
  free(resultado);
  
  return 0;
}
