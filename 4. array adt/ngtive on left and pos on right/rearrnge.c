#include <stdio.h>
#include <stdlib.h>
struct array{
    int A[10];
    int size;
    int length;
};
void disp(struct array mixed){
    int i;
    for(i = 0; i < mixed.length; i++){
        printf("%d ",mixed.A[i]);
    }
}
void swap(int *x,int *y){
    int temp;
    *x = temp;
    *x = *y;
    *y = temp;

}
void rearrnge(struct array *mixed){
    int i = 0;
    int j = mixed->length - 1;
    while(i < j){
        while(mixed->A[i] < 0)i++;
        while(mixed->A[j] > 0)j--;
        if(i<j)swap(&mixed->A[i],&mixed->A[j]);
    }
       
    
}
int main(){
    struct array mixed = {{10,100,-49,-10,50,-90},10,6};
    rearrnge(&mixed);
    disp(mixed);
   
    return 0;
}