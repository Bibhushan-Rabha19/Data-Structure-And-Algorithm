#include <stdio.h>
#include <stdlib.h>
struct array{
    int B[12];
    int size;
    int length;
};
void insert(struct array *aryINS,int index,int value){
    if(index >= 0 && index <= aryINS->length){
        int i;
        for(i = aryINS->length; i > index;i--){
            aryINS->B[i] = aryINS->B[i-1];
            aryINS->B[index] = value;
            aryINS->length++;
        }
    }
}
void display(struct array aryINS){
    if(aryINS.length<aryINS.size){
        int i;
        for(i = 0; i < aryINS.size;i++){
            printf("elements are : %d \n",aryINS.B[i]);
        }
    }
}
int main(){
    struct array aryINS = {{6,7,6,7,8,2},12,7};
    insert(&aryINS,4,500);
    display(aryINS);
    return 0;
}