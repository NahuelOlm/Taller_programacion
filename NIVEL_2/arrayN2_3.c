#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


///  Dado un array A de 10 floats cagado aleatoriamente y con valores comprendidos entre 0 y 100, determinar si se tienen más
///  elementos negativos que positivos o bien misma cantidad. Rehaga el ejercicio utilizando un único bucle for si empleo más de uno
#define N 10

int main(){

  float A[N];
  int i;
  int positivo = 0;
  int negativo = 0;
  srand(getpid());

//  for(i = 0; i<N; i++){
//    float r = rand() % 1001;
//    A[i] = r / 10;
//    printf("%2.2f ", A[i]);
//  }

//  for(i = 0; i<N; i++){
//    float r = rand() % 1001;
//    A[i] = -r / 10;
//    printf("%2.2f ", A[i]);
//  }


//  for(i = 0; i<N; i++){
//    float r = rand() % 1001;
//    int signo = rand() % 11; /// para sacar 0 o 1 y asi determinar si es positivo o negativo
//    if(signo % 2 != 0){
//      A[i] = -r / 10;
//    } else {
//      A[i] = r / 10;
//    }
//    printf("%2.2f \n", A[i]);
//  }
//
//  for(i = 0; i<N; i++){
//    if(A[i]>=0){
//      positivo ++;
//    }else {
//      negativo++;
//    }
//  }


  /// TODO EN UNO
  for(i = 0; i<N; i++){
    float r = rand() % 1001;
    int signo = rand() % 11; /// para sacar 0 o 1 y asi determinar si es positivo o negativo
    if(signo % 2 != 0){
      A[i] = -r / 10;
    } else {
      A[i] = r / 10;
    }
    if(A[i]>=0){
      positivo ++;
    }else {
      negativo++;
    }
    printf("%2.2f \n", A[i]);
  }


  printf("\n");
  printf("Son Positivos: %d \n", positivo);
  printf("Son Negativos: %d ", negativo);


  return 0;
}
