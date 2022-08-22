#include<stdio.h>
struct rectangle{ //defining rectangle structure
    int length;
    int breadth;
    /*length and breadth are members */
};
int main(){

    struct rectangle r = {300,400};//struct rectangle r is declaration structure and {300,400} is initialization
    r.length = 100;//changing the values from 3oo to 100
    r.breadth = 200;//changing the values from 400 to 200
    printf("Area of a rectangle : %d",r.length * r.breadth);
    return 0;
}