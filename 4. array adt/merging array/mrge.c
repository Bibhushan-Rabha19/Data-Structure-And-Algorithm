#include <stdio.h>
#include <stdlib.h>
struct array{
    int A[16];
    int size;
    int length;

};
void display(struct array ar1){
    for(int i = 0; i < ar1.length; i++){
        printf("%d ",ar1.A[i]);
    }
}
struct array* merge(struct array *ar1,struct array *ar2){
        int i,j,k;
        i=j=k=0;
        struct array *ar3 =(struct array*)malloc(sizeof(struct array));
        while(i < ar1->length && j < ar2->length){
            if(ar1->A[i] < ar2->A[j])
              ar3->A[k++] = ar1->A[i++];
            else
              ar3->A[k++] = ar2->A[j++];
        }
          for(;i < ar1->length;i++)
                ar3->A[k++] = ar1->A[i];
          for(;j < ar2->length;j++)
                ar3->A[k++] = ar2->A[j];
        ar3->length = ar1->length + ar2->length;
        ar3->size = 16;
    return ar3;
}

int main(){
    struct array ar1 = {{2,5,7,6,8,7,3,4},16,8};
    struct array ar2 = {{3,7,6,2,70,90,4,90},16,8};
    struct array *ar3;
    ar3 = merge(&ar1,&ar2);
    display(*ar3);
    return 0;
}