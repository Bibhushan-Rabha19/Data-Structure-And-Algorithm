#include <stdio.h>
#include <stdlib.h>
struct array{
    int arr[10];
    int size;
    int length;
};
// display
void display(struct array A){
        int i;
        printf("elements are : ");
        if(A.length <= A.size){     
            for(i = 0; i < A.length; i++){
                printf(" %d",A.arr[i]);
        }
     }      
}
//improve linearsearch 
// 1.transposition : moving key one index upfront
// 2.move to head  : moving the key to the head
void swap(int *x, int *y ){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
// linearsearch
int linears(struct array *A,int key){
       int i;
       for(i = 0; i < A->length; i++){
           if(key == A->arr[i]){
                //move to head
                swap(&A->arr[i],&A->arr[0]);
                //transposition 
                //swap(&A->arr[i],&A->arr[i-1]);
                return i;
           }        
       }
    return -5;
};
int main(){
    struct array A = {{98,27,55,67,63,34,18,28,11},10,9 };
    printf("linear search result index : %d \n",linears(&A,63));
    display(A);
    return 0;
}