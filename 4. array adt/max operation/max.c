#include <stdio.h>
#include <stdlib.h>
struct array{
    int arr[10];
    int size;
    int length;
};
void display(struct array A){
    int i;
    printf("elements are : ");
    for(i = 0; i < A.length; i++){
        printf("%d ",A.arr[i]);
    }
    printf("\n");
}
void max(struct array A){
    int max,i;
    max = A.arr[0];
    for(i = 1; i < A.length;i++){
        if(A.arr[i] > max){
            max = A.arr[i];
        }
    }
    printf("max result : %d",max);

}
int main(){
    struct array A = {{1,2,3,4,5,6,7,80,9,10},10,10};
    display(A);
    max(A);

    return 0;
}