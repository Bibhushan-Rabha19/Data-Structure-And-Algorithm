#include <stdio.h>
#include <stdlib.h>
struct human{
int male;
int female;
//male and female are data members
};

int main()
{
    //russia's population
    struct human russia = {10,20};
    printf("%d \n",russia.male);
    //us population
    struct human us;
    us.male = 10000;
    us.female = 20000;
    printf("%d \n",us.male);
    printf("%d \n",us.female);
    printf("%d \n",us.male*1000);

if(us.male > russia.male )
{
        printf("a \n");

}



else{
    printf("00");
    }

    return 0;
}
