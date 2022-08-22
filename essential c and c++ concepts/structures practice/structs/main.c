#include <stdio.h>
#include <stdlib.h>

struct rectangle{ //defining rectangle structure
    int length;
    int breadth;
    /*length and breadth are members */
};
int main(){
    {
    struct rectangle r;
    struct rectangle r = {300,400};
    r.length = 100;
    r.breadth = 200;
    printf("Area of a rectangle : %d",r.length * r.breadth);
    return 0;
}
