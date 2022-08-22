#include <stdio.h>
#include <stdlib.h>
int powr(int m,int n){
        if(n==0)
        return 1;
        else
        return powr(m,n-1)*m;
};
int main (){
    int result;
    result = powr(2,5);
    printf(" result : %d",result);
    return 0;
}