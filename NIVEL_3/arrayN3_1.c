#include <stdio.h>

/// Permitir el ingreso de una matriz de enteros de dimensión 3x4 y mostrarla por pantalla

int main() {

  int arr[3][4];
  int i,j;

  for(i=0; i<3; i++){
    for(j=0; j<4; j++){
      printf("Ubicacion arr[%d][%d]: ", i, j);
      scanf("%d", &arr[i][j]);
    }
  }
  printf("\n");
  for(i=0; i<3; i++){
    for(j=0; j<4; j++){
      printf("Ubicacion arr[%d][%d]: %d \n", i, j, arr[i][j]);
    }
  }

  printf("\n");
  for(i=0; i<3; i++){
    for(j=0; j<4; j++){
      printf("%d ",arr[i][j]);
    }
    printf("\n");
  }

 return 0;
}
