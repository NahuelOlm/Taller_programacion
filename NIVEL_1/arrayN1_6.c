#include <stdio.h>
#include <math.h>


/// Declare un array de 10 enteros en el rango [0, 100] (asegurarlo) y muestre por pantalla dichos elementos junto con la suma, el
/// promedio y la varianza. Investigar sobre los términos que desconozca.

#define N 10

int main() {

  int arr[N];
  float suma;
  float promedio;
  float varianza;
  float a;

  /// CARGA DE ARRAY Y COMPROBACION
  for(int i=0; i<N; i++){
    do{
      scanf("%d", &arr[i]);
    } while(arr[i]<0 || arr[i]>100);
    suma += arr[i];
  }

  promedio = suma/N;
  a = suma - promedio;
  varianza = pow(a,2) / (N-1);

  printf("%f", varianza);
  printf("\n");

  /// IMPRESION

  for(int i=0; i<N; i++){
    printf("%d ", arr[i]);
  }
  printf("\n");
  printf("Suma: %1.2f", suma);
  printf("\n");
  printf("%1.2f", promedio);
//  printf("\n");
//  printf("Varianza: %d", varianza);

  return 0;
}
