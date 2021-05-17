#include <stdio.h>

/// Declare un array A de N floats, se realice la carga manual y pida al usuario un float f en el rango (0, 100] y en un nuevo array P
/// establezca los elementos de esta forma. Cada elemento P[i] debe ser de la forma A[i]*f para i=0...N-1.

int main() {

  float A[3] = {1.1,2.2,3.3};

  for(int i=0; i<3;i++){
    printf("%1.1f ", A[i]);
  }

  return 0;
}
