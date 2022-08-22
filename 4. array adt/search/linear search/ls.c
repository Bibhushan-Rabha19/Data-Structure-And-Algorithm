#include <stdio.h>
#include <stdlib.h>
struct array{
    int A[10];
    int size;
    int length;
};
// display
void display(struct array ar1){
        int i;
        if(ar1.length <= ar1.size){     
            for(i = 0; i < ar1.length; i++){
                printf("elements are : %d \n",ar1.A[i]);
        }
     }
      
}
// linearsearch
int linears(struct array ar1,int key){
        int i;
       for(i = 0; i < ar1.length; i++){
           if(key == ar1.A[i])
           return i;
       }
    return -5;
};
int main(){
    struct array ar1 = {{98,27,55,67,63,34,18,28,11},10,9 };
    display(ar1);
    printf("linear search result index : %d",linears(ar1,63));
    return 0;
}