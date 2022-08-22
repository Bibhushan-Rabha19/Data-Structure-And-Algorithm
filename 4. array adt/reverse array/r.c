#include <stdio.h>
#include <stdlib.h>
struct array{
    int A[10];
    int size ;
    int length;
};
void display(struct array ar){
    printf("elements are : ");
    for(int i  = 0; i < ar.length; i++){
        printf("%d ",ar.A[i]);
    }
}
void reverse(struct array *ar){
    int *B; 
    int i,j;
    B =(int*)malloc(ar->length*sizeof(int));
    for(i = ar->length-1,j = 0;i >= 0; i--, j++)
        B[j] = ar->A[i];
    for(i = 0; i < ar->length; i++)
        ar->A[i] = B[i];
}

int main() {
    struct array ar = {{1,2,3,4,5,6,7,8,9},10,9};
    reverse(&ar);
    display(ar);
    return 0;
};