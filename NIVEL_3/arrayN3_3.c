#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/// Dadas dos matrices de dimensión NxN, llamadas X e Y, mostrar por pantalla la suma de las mismas.

#define N 4

int main() {

  int arr[N][N];
  int arr1[N][N];
  int suma[N][N];
  int i,j;

  srand(getpid());

  for(i=0; i<N; i++){
    for(j=0; j<N; j++){
      arr[i][j] = rand() % 101;
      arr1[i][j] = rand() % 101;
      suma[i][j] = arr[i][j] + arr1[i][j];
    }
  }
  printf("\n");
  for(i=0; i<N; i++){
    for(j=0; j<N; j++){
      printf("Ubicacion arr[%d][%d]: %d \n", i, j, arr[i][j]);
    }
  }

   /// IMPRESION DE ARRAY arr[i][j]
  printf("\n");
  printf("\n---------------\n");
  printf("ARRAY: arr[i][j]\n");
  printf("---------------\n");
  for(i=0; i<N; i++){
    for(j=0; j<N; j++){
      printf("%d ",arr[i][j]);
    }
    printf("\n");
  }

  /// IMPRESION DE ARRAY arr1[i][j]
    printf("\n");
  printf("\n---------------\n");
  printf("ARRAY: arr1[i][j]\n");
  printf("---------------\n");
  for(i=0; i<N; i++){
    for(j=0; j<N; j++){
      printf("%d ",arr1[i][j]);
    }
    printf("\n");
  }
  printf("\n---------------\n");
  printf("SUMA DE ARRYAS\n");
  printf("---------------");

    /// SUMA DE ARRAYS
    printf("\n");
  for(i=0; i<N; i++){
    for(j=0; j<N; j++){
      printf("%d ",suma[i][j]);
    }
    printf("\n");
  }

 return 0;
}
