#include <stdio.h>
#include <stdlib.h>

int main()
{
int a[5] = {1,2,3,4,5,6};
int *p;
p =(int*) malloc(5 * sizeof(int));//allocating memory in heap
p[0] = 10;
p[1] = 20;
p[2] = 30;
p[3] = 40;
p[4] = 50;
for(int i = 0; i < 5; i++){
    printf("values are : %d \n",p[i]);
}
    return 0;
}
