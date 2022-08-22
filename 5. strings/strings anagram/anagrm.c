#include <stdio.h>
#include <stdlib.h>
int main(){
    char A[] = "decimal";
    char B[] = "medical";
    int i,h[22] = {0};
        for(i = 0; A[i]!= '\0';i++ ){
            h[A[i]- 97] += 1;
        }
        for(i = 0; B[i] != '\0'; i++){
            h[A[i] - 97] -= 1;
            if(h[A[i]-97] < 0){
                printf("not anagram");
                break;
            }
        }
        if(B[i] == '\0'){
            printf("its anagram");
        }
    return 0;
}