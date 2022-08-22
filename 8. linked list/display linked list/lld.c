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
//iterative version
/*
void Display(struct Node *p)
{
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}
*/
//recursive version for displaying linked list 
//head recursion returning values while returning
void recurdisp(struct Node *p){
    if(p !=NULL){
        recurdisp(p->next);
        printf("%d ",p->data);
    }
}
// tail recursion i.e printing value first and then calling
/*
void recurdisp(struct Node *p){
    if(p !=NULL){
        printf("%d ",p->data);
        recurdisp(p->next);

    }
}
*/

int main()
{
    struct Node *temp;
    int A[]={3,5,7,10,25,8,32,2};
    create(A,8);
    recurdisp(first);
    
    return 0;
}