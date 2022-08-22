#include <stdio.h>
#include <stdlib.h>
struct arr{
    int *ar;
    int size;
    int length;
};
void display(struct arr first){
    int i;
    for(i = 0; i < first.length; i++){
        printf("elements are : %d \n",first.ar[i]);
    }
};
void append(struct arr *first,int x){
        if(first->length<first->size){
            first->ar[first->length++]=x;
        }
};
int main(){
    struct arr first;
    printf("ENTER THE SIZE OF THE ARRAY :");
    scanf("%d",&first.size);
    first.ar=(int *)malloc(first.size*sizeof(int));
    int i,n;
    first.length = 0;
    printf("ENTER HOW MANY TIMES YOU WANT TO ENTER NUMBERS :");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS YOU WANT TO :");
        for(i = 0; i < n; i++){
            scanf("%d",&first.ar[i]);
            first.length = n;
        }
    append(&first,50);
    display(first);
    return 0;
}