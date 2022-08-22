//using recursive function to find sum of natural numbers
#include <stdio.h>
#include <stdlib.h>
int sum(int n){
    if(n == 0)
        return 0;
    else
        return sum(n-1)+n;
};
int main(){
 int result;
  result = sum(2);
  printf("%d",result);
    return 0;
}