#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

///Declare un array de 10 enteros, permita la carga manual y luego determine lo siguiente:
///- cuantos elementos son positivos y pares
///- cuantos elementos son positivos e impares
///- cuantos elementos son negativos y pares
///- cuantos elementos son negativos e impares

#define N 10

int main() {

  int A[N];
  int POS_PAR[1];
  int POS_IMP[1];
  int NEG_PAR[1];
  int NEG_IMP[1];

  srand(getpid());


  /// CARGA MANUAL
  for(int i=0; i<N; i++){
    printf("Numero[%d]: ",i);
    scanf("%d", &A[i]);
    //printf(" %d", A[i]);
  }

  /// CARGA RANDOM

//  for(int i=0; i<N; i++){
//    printf("Numero: ");
//    A[i] = 1 -rand() % 101;
//    printf(" %d\n", A[i]);
//  }

  for(int i=0; i<N; i++){
    POS_PAR[0]=0;
    POS_IMP[0]=0;
    NEG_PAR[0]=0;
    NEG_IMP[0]=0;

  }


  for(int i=0; i<N; i++){
    if(A[i]>=0 && A[i]%2 == 0){ POS_PAR[0]++;}
    if(A[i]>=0 && A[i]%2 != 0){ POS_IMP[0]++;}
    if(A[i]<0 && A[i]%2 == 0){ NEG_PAR[0]++;}
    if(A[i]<0 && A[i]%2 != 0){ NEG_IMP[0]++;}
  }
  printf("Positivos pares ");
  printf(" %d\n", POS_PAR[0]);

  printf("Positivos impares ");
  printf(" %d\n", POS_IMP[0]);

  printf("Negativos pares ");
  printf(" %d\n", NEG_PAR[0]);

  printf("Negativos impares ");
  printf(" %d\n", NEG_IMP[0]);

  return 0;
}
