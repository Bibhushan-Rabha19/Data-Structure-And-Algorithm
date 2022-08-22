#include <stdio.h>
#include <stdlib.h>
struct array{
    int A[10];
    int size;
    int length;

};
void append(struct array *arr1,int x){
        if(arr1->length<arr1->size){
            arr1->A[arr1->length++] = x;
        }
};
void display(struct array arr1){
        int i;
        for(i = 0; i < arr1.length; i++){
        printf("%d ",arr1.A[i]);
        }
};
int main(){
    struct array arr1 = {{10,20,30,40,50,60,70},10,7};

    append(&arr1,60);
    display(arr1);
    return 0;
}