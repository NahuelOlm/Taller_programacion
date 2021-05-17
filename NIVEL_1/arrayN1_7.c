#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

 /// Declare dos arrays de 10 enteros con valores entre [0, 50] llamados M y N, luego determine si son:
///  - iguales: cuando cada componente ubicada en misma posición coincide.
///  - similares frente a suma: cuando no tienen las mismas componentes pero la suma de los elementos coincide
///  - diferentes: cuando no coinciden ni en las componentes ni en la suma

#define Y 10

int main(){

  int M[Y];
  int N[Y];

  srand(getpid());

  /// CARGA DE ARRAYS
  for(int i=0; i<Y; i++){
    M[i] = rand() % 51;
  }

  for(int i=0; i<Y; i++){
    N[i] = rand() % 51;
  }

  for(int i=0; i<Y; i++){
    printf("%d ", M[i]);
  }
  printf("\n");
  printf("\n");
  for(int i=0; i<Y; i++){
    printf("%d ", N[i]);
  }


  return 0;
}
