#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#define MAX 100

char* strcat_custom(char* a, char* b) {

  int len_a = strlen(a);
  int len_b = strlen(b);
  
  char* result = malloc((len_a+len_b+1)*sizeof(char));
  
  for (int i = 0; i < len_a; i++) {
  	result[i] = a[i];
  }

  for (int j = 0; j < len_b; j++) {
    result[len_a + j] = b[j];
  }
  
  result[len_a+len_b] = '\0';
  
  return result;
}


int main(void) {

  char str1[MAX], str2[MAX];
  scanf("%s", str1);
  scanf("%s", str2);

  char* resultado = strcat_custom(str1, str2);
  
  printf("Concatenada: %s\n", resultado);
  
  free(resultado);
  return 0;
}
