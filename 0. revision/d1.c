#include <stdio.h>
#include <stdlib.h>
struct matrix{
    int row;
    int col;
};
void change(int *a){
    int temp,y;
    y = 20;
    temp = *a;
    *a = y;
    y = temp;
}
void display(int *b,int size){
    int i;
    for(i = 0; i < size; i++){
        printf("elements of an array : %d ",b[i]);
    }
}
void oofmtrx(struct matrix O){
    int result = O.row * O.col;
    printf("order of matrix : %d",result);
}

int main(){
    struct matrix A = {2,3};
    int a = 10;
    int b[6] = {1,2,3,4,5,6};
    // change(&a);
    // display(b,6);
    printf("value of a : %d",a);
    oofmtrx(A);

    return 0;
}