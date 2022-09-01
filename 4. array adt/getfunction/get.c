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
void get(struct array A, int index){
    if(index >= 0 && index < A.length){
        printf("index result : %d \n",A.arr[index]);
    }    
    else
        printf("invalid index");
}
int main(){
    struct array A = {{1,2,3,4,5,6,7,8,9,10},10,10};
    get(A,0);
    display(A);
    return 0;
}