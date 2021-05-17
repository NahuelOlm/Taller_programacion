#include <stdio.h>


/// Dado un array de 10 floats, mostrar por pantalla cuales elementos superan al promedio.

#define N 10

int main(){

  float A[N];
  float B=0;
  float C;

  /// CARGA DE FLOATS MAS SUMA

  for(int i=0; i<N; i++){
    scanf("%f", &A[i]);
    B += A[i];
  }

  /// PROMEDIO
  C = B/N;


  /// IMPRESION DE ARRAY DE FLOATS
  printf("\n");
  for(int i=0; i<N; i++){
    printf("%1.1f ", A[i]);

  }

  /// IMPRESION ELEMENTOS QUE SUPERAN EL PROMEDIO

  printf("\n");
  for(int i=0; i<N; i++){
    if(A[i]>C){
    printf("%1.1f ", A[i]);
    }

  }


  /// IMPRESION DE LA SUMA DE LOS FLOATS
  printf("\n");
  printf("La suma es: ");
  printf("%1.3f ", B);
  printf("\n");
  printf("El promerdio es: ");
  printf("%f", C);

  return 0;
}
