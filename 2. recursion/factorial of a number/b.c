#include <stdio.h>
#include <stdlib.h>
int fact(int n){
    //f and i cannot be 0 since factorial of 0 and 1 is 1 or 1! = 1 0! = 1
    int f,i;
    f = 1;
    for(i = 1; i <= n; i++)
    f = f * i;
    return f;
}
int main(){
    int factorial,x;
    printf("enter your number to find factorial of:");
    scanf("%d",&x);
    factorial = fact(x);
    printf("factorial of your number is : %d",factorial);
    return 0;
}