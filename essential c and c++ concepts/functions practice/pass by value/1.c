#include <stdio.h>
int b1(int x, int y){ //int b1 is function prototype and int x , int y is formal parameters
int w ;
w = x * y;
return w;

}
int main(){
    int a = 100; int b = 2;
    int c = b1(a,b); //here a && b are actual parameters
    printf("result is : %d",c);
}