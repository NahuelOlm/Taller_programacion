#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


/// Dado un array A de 10 enteros cargados automáticamente (con números aleatorios), invertir el array, es decir si se tiene el array
/// A= [ 45, 11, -5, 80, 6, 99, 105, -200, 22, 1 ], A deberá quedar del siguiente modo al finalizar el programa
/// A= [ 1, 22, -200, 105, 99, 6, 80, -5, 11, 45 ]. Considere el uso de una variable a modo de pivote

#define N 10

int main(){

  int A[N];
  int i;
  int aux;

  srand(getpid());

  printf("Array normal: ");
  for(i = 0; i<N; i++){
    A[i] = rand() % 101;
    printf("%d ", A[i]);
  }



  for (i=0; i<N/2; i++) {
    aux = A[i];
    A[i] = A[N-1-i];
    A[N-1-i] = aux;
   }

  printf("\n");

  printf("Array invertido: ");
  for(i = 0; i<N; i++){
    printf("%d ", A[i]);
  }

  return 0;
}
