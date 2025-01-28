#include <stdio.h>

int hanoi(int n) {

  if (n == 1) 
    return 1;
  else
    return 2 * hanoi(n - 1) + 1;
}

int main(void) {
  int n, cont;
  scanf("%d",&n);
  
  cont = hanoi(n);
  printf("%d\n", cont);
  
  return 0;
}
