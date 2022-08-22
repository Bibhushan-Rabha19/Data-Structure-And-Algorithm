#include <stdio.h>
#include <stdlib.h>
//needs to debug
int main(){
    int *a,i;
    printf("enter the five elements :");
    for(i = 0; i <= 5; i++){
    scanf("%d",a+i);
    }
    printf("elements you entered are :");
    for(i = 0; i < 5; i++){
    printf("%d",*(a+i));
    }
   
    return 0;
}