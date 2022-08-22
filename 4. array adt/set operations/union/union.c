#include <stdio.h>
#include <stdlib.h>
struct array{
    int A[10];
    int size;
    int length;
};
void display(struct array f1){
    int i = 0;
    while(i < f1.length){
        printf("%d ",f1.A[i]);
        i++; 
    }
};
struct array* Union(struct array *f1,struct array *f2){
    struct array *ar= (struct array*)malloc(sizeof(struct array));
    int i,j,k;
    i=j=k=0;
    while(i < f1->length && j < f2->length){
        if(f1->A[i] < f2->A[j])
            ar->A[k++] = f1->A[i++];
        else if(f2->A[j] < f1->A[i])
            ar->A[k++] = f2->A[j++];
        else{
            ar->A[k++] = f1->A[i++];
            j++;
        }
    }
    for(;i < f1->length;i++)
        ar->A[k++] = f1->A[i];
    for(;j < f2->length;j++)
        ar->A[k++] = f1->A[j];
    
    ar->length = k;
    ar->size = 10;

    return ar;
}
int main(){
    struct array f1 = {{9,7,3,8,64,4},10,6};
    struct array f2 = {{3,2,5,8,9,7},10,6};
    struct array *ar;
    ar = Union(&f1,&f2);
    display(*ar);
    return 0;
}