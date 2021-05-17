#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

 /// Permita la caga de una array de 30 enteros aleatorios. Luego mostrarlos por pantalla.

 #define N 30

 int main() {

  int arr[N];

  srand(getpid());

  /// CARGA DE ARRAY
  for(int i=0; i<N; i++){
    arr[i] = rand() % 31;
  }

  /// IMPRIMIR ARRAY

  for(int i=0; i<N; i++){
    printf("Ubicacion [%d]: ", i);
    printf("%d \n", arr[i]);
  }

 return 0;
 }
