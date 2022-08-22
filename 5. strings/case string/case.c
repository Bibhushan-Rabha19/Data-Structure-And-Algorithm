#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    //note that the numeric value difference of lower case and upper case is 32
    // to get the lower case from upper case i.e add +32
    //to get the upper case from lower case i.e subtract -32
    char A[] = "hiHJ";
    int i ;
    for(i = 0; A[i] != '\0'; i++){
        if(A[i]  >= 65 && A[i] <= 90)
           A[i] =+32;
        else if(A[i] = 97 && A[i] <= 122)
            A[i] =- 32;
    }
        printf("%s",A);
    return 0;
}