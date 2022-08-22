#include <stdio.h>
#include <stdlib.h>
double e(int x, int n){
    static double s=1;
    for(;n>0;n--){
    s = 1 + x/n *s;
    }
    return s;
}
int main(){
    printf("%lf",e(1,10));
    return 0;
}