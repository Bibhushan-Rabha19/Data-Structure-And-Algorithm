#include <stdio.h>
#include <stdlib.h>
struct array{
    int arr[10];
    int size;
    int length;
};
void display(struct array A){
    int i;
    printf("elements are : ");
    for(i = 0; i <= A.length; i++){
        printf("%d ", A.arr[i]);
    }
}
int rsrch(int A[],int l, int h,int key){
//h = length
//l = 0
//m = h + l/2
//return m when m = key
//key < mid h = m - 1
//key > mid h = h + 1
int mid;
if(l < h){
    mid = (l + h)/2;
        if(key == A[mid])
            return mid;
        if(key < A[mid])
            return rsrch(A[],l,mid-1,key);
        if(key > A[mid])
            return rsrch(A[],mid+1,h,key);
}
else
return -1;
}
int main(){
    struct array A = {{10,20,30,40,50,60,70,80,90,100},10,10};
    rsrch(A.arr,0,A.length,20);
    display(A);
    return 0;
}