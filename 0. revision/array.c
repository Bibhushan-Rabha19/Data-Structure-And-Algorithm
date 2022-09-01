#include <stdio.h>
#include <stdlib.h>
struct array{
    int arr[10];
    int size;
    int length;
};
//display 
void display(struct array A){
    int i;
    printf("elements are : ");
    for(i = 0; i < A.length; i++){
        printf("%d ",A.arr[i]);
    }
}
//append
void append(struct array *A,int x){
    if(A->length < A->size){
        A->arr[A->length++] = x;
    }  
}
//insert
void insert(struct array *A,int index, int x){
    int i; 
    if(index >= 0  && index <= A->length){
        for (i = A->length ; i > index; i--){
            A->arr[i] = A->arr[i-1];
            A->arr[index] = x;
            A->length++;
          }
    }
}
//delete
int delete(struct array *A,int index){
    int x;
    if(index >= 0 && index <= A->length){
        x = A->arr[ index];
        for (int i = index; i < A->length - 1; i++)
            A->arr[i] = A->arr[i + 1];
            A->length--;
            return x;        
    }
    return 0;
}
//linear search
void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int lisrch(struct array *A,int key){
    int i;
    for( i = 0; i < A->length; i++){
        if(key == A->arr[i]){
            swap(&A->arr[i],&A->arr[i-1]);
            return i;
        }
    }
    return -1;
}
int main(){
   struct array A = {{1,2,3,4,5},10,5} ;
// append(&A,3);
// insert(&A,3,30);
// printf("%d \n",delete(&A,0)); 
   printf("%d \n",lisrch(&A,5));
   display(A) ;

    return 0;
}