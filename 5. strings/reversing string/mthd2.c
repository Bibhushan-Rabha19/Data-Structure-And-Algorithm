#include<stdio.h>
#include<stdlib.h>
int main(){
    char A[] = "BIBHUSHANRABHA";
    char B[24];
    int i,j;
    printf("irreversed string : %s \n",A);
    for(i = 0; A[i] != '\0'; i++){} i = i - 1;
    for(j = 0; i >= 0,B[j] != '\0'; i--, j++){
        B[j] = A[i];
    }
    printf("reversed string : %s",B);
    return 0;
}