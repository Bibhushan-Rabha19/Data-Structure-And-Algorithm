#include <stdio.h>
#include <stdlib.h>
double p = 1,f = 1;
double e(int x,int n){
    double r;
    if(n==0){
    return 1;
    }
   
    else{
    return r = e(x,n-1);
    p = p*x;
    f = f*n;
    return r + p/f;
    }
   
}
int main(){
   
    printf("Result : %lf",e(2,5));
    return 0;
}