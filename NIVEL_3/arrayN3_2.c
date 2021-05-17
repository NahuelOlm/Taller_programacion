#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/// Permitir la carga automática de una matriz de dimensión NxN y mostrarla por pantalla.

#define N 4

int main() {

  int arr[N][N];
  int i,j;

  srand(getpid());

  for(i=0; i<N; i++){
    for(j=0; j<N; j++){
      arr[i][j] = rand() % 101;
    }
  }
  printf("\n");
  for(i=0; i<N; i++){
    for(j=0; j<N; j++){
      printf("Ubicacion arr[%d][%d]: %d \n", i, j, arr[i][j]);
    }
  }

  printf("\n");
  for(i=0; i<N; i++){
    for(j=0; j<N; j++){
      printf("%d ",arr[i][j]);
    }
    printf("\n");
  }

 return 0;
}
