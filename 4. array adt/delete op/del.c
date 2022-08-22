#include <stdio.h>
#include <stdlib.h>
struct array{
    int A[10];
    int size;
    int length;
};
void display(struct array arr1){
    int i;
        for(i = 0; i < arr1.length; i++){
         printf("elements are: %d \n",arr1.A[i]) ;
        }
};
int delete(struct array *arr1, int index){
    int x;
    int i;
    if(index >= 0 && index < arr1->length){
        for(i = index; i <arr1->length-1; i++)
            x = arr1->A[index];
            arr1->A[i] = arr1->A[i+1];
            arr1->length--;
        return x;
    }
    return 0; //returns 0 if returns false
};
int main(){
    struct array arr1 = {{1,2,3,4,5,7},10,6};
    printf("%d",delete(&arr1,2));
    display(arr1);

    return 0;
}