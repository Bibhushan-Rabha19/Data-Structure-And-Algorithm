#include <stdio.h>
int main(){
    int x = 50;
    int *y;//pointer variable
    y = &x;//here y is pointing and storing x's address
    printf("%d \n",x); //printing out variable;
    printf("%d \n",&x);//printing out variable address
    printf("%d \n",y);//printing out y's result which is pointing to x
    printf("%d",*y);//here y is dereferencing note we use (*) only when declaring pointer variable and when we are deferencing
    return 0;
}