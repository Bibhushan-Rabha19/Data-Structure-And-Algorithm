#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct jams{
    char name[50];
    int price;
    char customer_rating;

};
int main(){
    //jam1
    printf("JAM 1 \n");

    struct jams *box;
    box =(struct jams*)malloc(sizeof(struct jams));
    strcpy(box->name,"kissan");
    box->price = 200;
    box->customer_rating = 'a';
    printf("name of  box 1 jam : %s \n",box->name);
    printf("price of box 1 jam  : %d \n",box->price);
    printf("customer rating of this product : %c \n",box->customer_rating);
  
    //jam 2
    printf("JAM 2 \n");

    struct jams *box2;
    box2 =(struct jams*)malloc(sizeof(struct jams));
    strcpy(box2->name,"berries");
    box2->price = 300;
    box2->customer_rating = 'c';
    printf("name of  box 2 jam : %s \n",box2->name);
    printf("price of box 2 jam : %d \n",box2->price);
    printf("customer rating of this product : %c \n",box2->customer_rating);
       
    return 0;
}