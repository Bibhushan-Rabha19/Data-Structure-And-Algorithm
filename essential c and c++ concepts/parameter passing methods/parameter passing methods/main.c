#include <stdio.h>
#include <stdlib.h>
void a(m,n,u){
    int v = m + n * 10 * u;
    printf("%d \n",v);


}

int main()
{
    int x ,y,z;
    x = 4; y = 3;
    printf("please enter your favourite number :");
    scanf("%d \n",&z);
    printf("%d",z);
    a(x,y,z);
    return 0;

}
