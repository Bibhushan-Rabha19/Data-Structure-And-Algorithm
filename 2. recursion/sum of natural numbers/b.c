//using iterative loop
#include <stdio.h>
#include <stdlib.h>
    int sum(int n){
        int s = 0 ,x;
        for(x = 1; x <= n; x++)
            s = s + x;
            return s;
    }
int main(){
    int result;
    result = sum(3);
    printf("%d",result);
    return 0;
}