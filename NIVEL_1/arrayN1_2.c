#include <stdio.h>

/// Declare dos arrays de 5 enteros cada uno, llamados A y B, luego en un tercer array de igual dimensión llamado S almacene la suma
/// de los dos anteriores

#define N 5

int main() {

//  int A[N] = {1,2,3,4,5};
//  int B[N] = {1,2,3,4,5};
  int A[N];
  int B[N];
  int S[N];

/// ARRAY PRE-CARGADOS

//  for(int i=0; i<N; i++){
//    S[i] = A[i] + B[i];
//  }

/// CARGANDO ARRAYS

  for(int i=0; i<N; i++){
    printf("A[%d]: ", i);
    scanf("%d", &A[i]);
    printf("B[%d]: ", i);
    scanf("%d", &B[i]);
    S[i] = A[i] + B[i];
  }



  for(int i=0; i<N; i++){
    printf("%d ", S[i]);
  }

  return 0;
}
