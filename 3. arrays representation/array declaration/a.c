#include<stdio.h>
int main(){
    //array declaration
    int b[3] = {0};//elements in an array will be all zero
    int c[5] = {1,2};//index 0 will take 1 and index 1 will take 2 and rest zero
    int a[3] = {1,2,3};
    //accessing array
    printf("%d \n",2[a]);// prints a[2]
    printf("%d \n",a[2]);// prints a[2]
    printf("%d \n",*(a+2));//this also prints a[2] 
    printf("%d \n",*(c + 1));
    printf("%d \n",2[c]);



    return 0;
}