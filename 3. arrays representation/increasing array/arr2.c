#include <stdio.h>
#include <stdlib.h>
int main(){
    int *a,*b; 
    a =(int*) malloc( 10 *sizeof(int));
    a[0] = 56; a[1] = 78; a[2] = 90;
    b =(int*) malloc( 10 *sizeof(int));
    int x;
    for(x = 0; x < 10; x++)
    b[x] = a[x];
    free(a);
    b = a;
    a = NULL;
    for(x = 0; x < 3; x ++)
    printf("%d ", b[x]);

    return 0;
}