#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#define MAX 100

char* revert(char* s) {

  int len_s = strlen(s);
  char* result = malloc((len_s+1)*sizeof(char));
  
  for (int i = 0; i < len_s; i++) {
    result[i] = s[len_s - i - 1];
  }

  result[len_s] = '\0';
  
  return result;
}

int main(void) {

  char str[MAX];
  scanf("%s", str);

  char* resultado = revert(str);
  
  printf("Revertida: %s\n", resultado);
  
  free(resultado);
  return 0;
}
