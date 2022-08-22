#include <stdio.h>
#include <stdlib.h>
int main(){
    int *A[2];
  A[0] = (int*)malloc(3*sizeof(int));
  A[1] = (int*)malloc(3*sizeof(int));
  A[2] = (int*)malloc(3*sizeof(int));
  A[3] = (int*)malloc(3*sizeof(int));
A[1][2]=50;
    printf("%d \n", A[1][2]);
    printf("%d", sizeof(A[2][3]));


    return 0;
}