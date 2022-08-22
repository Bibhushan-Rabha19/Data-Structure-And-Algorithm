#include <stdio.h>
#include <stdlib.h>
int main(){
    char A[] = "BCDFE";
    char swap;
    int i,j;
    for(j = 0; A[j] != '\0'; j++){} j = j - 1;
    for(i = 0; i < j; i++,j--){
        swap = A[i];
        A[i] = A[j];
        A[j] = swap;
    }
    printf("%s",A);
    return 0;
}