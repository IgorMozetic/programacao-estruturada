#include<stdio.h>
#define NUM 100

int uniao( int A[], int tamA, int B[], int tamB, int C[] ){
    int tamC = tamA;
    for (int i = 0; i < tamA; i++)
        C[i] = A[i];
    
    for (int i = 0; i < tamB; i++) {
        int existe = 0;
        
        for(int j = 0; j < tamC; j++) {
            if(C[j] == B[i])
                existe = 1;
        }
        
        if(!existe) {
            C[tamC] = B[i];
            tamC++;
        }
    }
    
    return tamC;
}

int main(){
   int N, M;
   int A[NUM];
   int B[NUM];
   int C[2*NUM];
   
   scanf("%d", &N);
   int i;
   for ( i = 0; i < N; ++i )
      scanf("%d", &A[i]);
   
   scanf("%d", &M);
   for ( i = 0; i < M; ++i )
      scanf("%d", &B[i]);

   int T = uniao( A, N, B, M, C );
   printf("uniao: %d\n", T);
   for ( i = 0; i < T; ++i )
      printf("%d ", C[i]);
   printf("\n");
   return 0;
}

