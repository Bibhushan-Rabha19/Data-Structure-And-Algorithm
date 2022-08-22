#include <stdio.h>
#include <stdlib.h>
int fact(int n){
    if(n==0)
    return 1;
    else
    return fact(n-1)*n;
}
int main(){
    int factorial,x;
    printf("Please enter the number\nYou like to see factorial of:");
    scanf("%d",&x);
  
    factorial = fact(x);
    printf("Factorial of your number is :%d",factorial);
    return 0;
}