#include <stdio.h>
#include <stdlib.h>
struct array{
    int A[10];
    int size;
    int length;
};
void disp(struct array sortedins){
    int i ;
    for(i = 0 ; i < sortedins.length; i++){
        printf("%d ",sortedins.A[i]);
    }
}
void insert(struct array *sortedins,int x){
    int i;
    i = sortedins-> length - 1;
    //checking indexes element and comparing with x value from right hand side
    //if index element is greater than x value A[i+1] = A[i]
    //if not A[i + 1] = x
    while(sortedins->A[i] > x){
        sortedins->A[i + 1] = sortedins->A[i];
        i--;
    }
    sortedins->A[i + 1] = x;
    sortedins->length++;
}
int main(){
    struct array sortedins ={{10,20,40,50,60,70},10,6};
    insert(&sortedins,30);
    disp(sortedins);
    return 0;
}