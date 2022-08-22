#include <stdio.h>
#include <stdlib.h>
struct array {
    int C[10];
    int size;
    int length;

};
void display(struct array arb){
        int i ;
        for(i = 0; i < arb.length; i++){
            printf("%d \n",arb.C[i]);
        }
}
int binsrch(struct array arb,int key){
        int l,mid,h;
        l = 0;
        h = arb.length + 1;
        while(l<=h){
            mid = (l+h)/2;
            if(key == arb.C[mid])
                return mid;
            else if(key < arb.C[mid])
                h = mid - 1;
            else
                l = mid + 1;
        }
    return -1;
}
int recurbins(int x[],int l,int h,int key){
       
        int mid;
        if(l<=h){
            mid = (l + h)/2;
        if(key == x[mid])
            return mid;
        else if(key < x[mid])
            return recurbins(x,l,mid-1,key);
        else
            return recurbins(x,mid+1,h,key);    
        }
    return -3;
}
int main(){
        struct array arb = {{67,34,45,42,37,81,93},10,7};
        display(arb);
        printf("binarysearch : %d \n",binsrch(arb,34));
        printf("recursive binary search : %d",recurbins(arb.C,0,arb.length,81));

        return 0;
}