#include <stdio.h>

/// Declare un array de 10 enteros y permita que el usuario ingrese valores comprendidos entre el -10 y el 10 (asegurar esto) y luego lo
/// muestre por pantalla.

#define N 10

int main() {

  int arr[N];

  for(int i=0; i<N; i++){
      do{
        scanf("%d", &arr[i]);
      } while(arr[i]<=-10 || arr[i]>10);
  }
  printf("El array es:");

  for(int i=0; i<N; i++){
     printf(" %d", arr[i]);
  }


  return 0;
}
