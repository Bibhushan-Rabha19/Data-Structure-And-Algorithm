#include <stdio.h>
#include <stdlib.h>
struct sum{
    int value1;
    int value2;

};
int main(){
    struct sum sum1;
    printf("Enter your first number :");
    scanf("%d",&sum1.value1);
    // sum1.value1 = 1;
    printf("Enter your first number :");
    scanf("%d",&sum1.value2);
    // sum1.value2 = 2;
    int totalValue,product,subtraction;
    totalValue = sum1.value1 + sum1.value2;
    product = sum1.value1 * sum1.value2;
    subtraction = sum1.value1 - sum1.value2;
    printf("PRODUCT : %d \n",product);
    printf("SUBTRACTION : %d \n",subtraction);
    printf("SUM : %d \n",totalValue);
// size of various datatypes in bytes
    int a;
    int *p;
    p = (int *) malloc(1 * sizeof (int));
    printf("%d \n",p);
    printf("size of int : %d bytes  \n",sizeof(int));
    printf("size of short : %d bytes \n",sizeof(short));
    printf("size of short int : %d bytes \n",sizeof(short int));
    printf("size of double : %d \n bytes",sizeof(double));
    printf("size of long double : %ld bytes\n",sizeof(long double));

// maximum and minimum sizes of various datatypes
int MAX_INT;
    printf("maximum size of int : %d",MAX_INT);


    return 0;
}