#include <stdio.h>
#include <stdlib.h>
struct array{
    int arr[10];
    int size;
    int length;
};
void display(struct array A){
    int i;
    for(i = 0; i < A.length; i++){
        printf("%d ",A.arr[i]);
    }
}
int set(struct array *A,int index,int value){
    if(index >= 0 && index < A->length){
        A->arr[index] = value;
        return A->arr[index];
    }
}
int main(){
    struct array A = {{1,2,3,4,5,6,7,8,9,10},10,10};
    set(&A,0,45);
    display(A);
    return 0;
}