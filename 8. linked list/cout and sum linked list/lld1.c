
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}*first=NULL;
void create(int A[],int n)
{
    int i;
    struct Node *t,*last;
    first=(struct Node *)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;
    
    for(i=1;i<n;i++)
    {
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void Display(struct Node *p)
{
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}
//recursive funtion for displaying linked list 
void RDisplay(struct Node *p)
{
    if(p!=NULL)
    {
        RDisplay(p->next);
        printf("%d ",p->data);
        
    }
}
//iterative version for counting linked list
int count(struct Node *p){
    int l = 0;//l for length of a linked list
    while(p){
        l++;
        p = p->next;
    }
    return l;
}
//recursive function for counting a linked list
int Rcount(struct Node *p){
    if(p == 0)
    return 0;
    else
    return Rcount(p->next)+1;

}
//iterative version for finding sum of a linked list
int sum(struct Node *p){
    int s = 0;//s for storing added value until the condition
    while(p){
        s += p->data;
        p = p->next;
    }
    return s;

}
//recursive function for finding sum of a linked list
int Rsum(struct Node *p){
    if(p != 0)
    return Rsum(p->next)+p->data;
    else
    return 0;
}
int main()
{
    struct Node *temp;
    int A[]={3,5,7,10,25,8,32,2};
    create(A,8);
 
   printf("there are : %d linked list. \n",Rcount(first));
   printf("sum of a linked list : %d",Rsum(first));
    return 0;
}