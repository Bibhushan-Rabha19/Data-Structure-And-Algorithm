#include <stdio.h>
#include <stdlib.h>
//pass by address actually modifies the actual parameters
int add(int *x,int *y){//formal parameters must be pointers
    int r;
*x = 100;
*y = 200;
r =  *x * *y;
return r;
};
int main(){
   int a = 50;
   int b = 90;
  int  sum = add(&a,&b);
  if(sum < 20000)
  {
  printf("on to first");

  }
      else if(sum < 400)
          printf("on to second");
      
      else if(sum < 5219)
          printf("on to third");
      
  else{
      printf("no no no!!!");
  }
  
    printf(" \n%d \n",a);
    printf("%d \n",b);
    printf("%d \n",sum);
return 0;
}