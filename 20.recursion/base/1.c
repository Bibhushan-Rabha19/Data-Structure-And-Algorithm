#include <stdio.h>
#include <stdlib.h>
void func1(int y){
if(y > 9){
    func1(y - 1);//fucntion calling itself
    printf("%d",y);
}
};
void main(){
int x = 50;
func1(x);
}