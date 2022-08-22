#include <stdio.h>
#include<stdlib.h>
struct array{
    int B[10];
    int size;
    int length;
};
void display(struct array ar){
        int i;
        for(i = 0; i < ar.length; i++){
            printf("elements are : %d \n",ar.B[i]);
        }
}

void med(int *x,int *y){
    int confc;
    *x = confc;
    *x = *y;
    *y = confc;

}
int linrbyone(struct array ar,int key){
        int i;
        for(i = 0; i < ar.length; i++){
            if(key ==  ar.B[i]){
                med(&ar.B[i],&ar.B[i - 1]);
                return i - 1;
            }

        }
}
int linrshead(struct array ar,int key){
        int i;
        for(i = 0; i < ar.length; i++){
            if(key ==  ar.B[i]){
                med(&ar.B[i],&ar.B[0]);
                return i;
            }

        }
}
int main(){
    struct array ar = {{67,87,94,89,67,35,54,100},10,8};
    display(ar);
    printf("linear search reduced time by one : %d \n",linrbyone(ar,100)) ;
    printf("linear search reduced time by one : %d",linrshead(ar,100)) ;

    return 0;
}