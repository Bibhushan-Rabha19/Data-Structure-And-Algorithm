#include <stdio.h>
int b(int *a,int *b){
int c;
c = *a;// c is equal to a or 50
*a = 100;
*b = 200;
}
int main(){
    int x = 50;
    int y = 40;
    b(&x,&y);
    printf("%d",x);
    return 0;
}