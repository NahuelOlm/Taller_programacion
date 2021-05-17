#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/// Permita la carga aleatoria de dos arrays de 10 enteros cada uno, llamados A y B, e indique cual de los dos tiene más números pares
/// tratando de utilizando como máximo dos bucles for en todo el programa.

#define N 10

int main() {

  int A[N];
  int B[N];
  int paresA=0;
  int paresB=0;

  srand(getpid());

  for(int i=0; i<N; i++){
    A[i] = rand() % 101;
    B[i] = rand() % 101;
    if(A[i]%2 == 0) {
      paresA++;
    } else if(B[i]%2 == 0){
      paresB++;
    }
  }

  for(int i=0; i<N; i++){
    printf("A[%d]: %d \n", i,A[i]);
    printf("B[%d]: %d \n", i, B[i]);
  }

  printf("\n");

  if(paresA > paresB) {
    printf("ParesA tiene mas numeros pares: %d", paresA);
  } else {
    printf("ParesB tiene mas numeros pares: %d", paresB);
  }

  return 0;
}
