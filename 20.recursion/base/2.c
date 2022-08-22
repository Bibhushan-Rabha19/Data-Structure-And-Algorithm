#include <stdio.h>
#include <stdlib.h>
void func1(int x){
        if(x > 0){
            printf("%d",x);
            func1(x-1);
        }
};
void main(){
    int y = 50;
    func1(y);
}