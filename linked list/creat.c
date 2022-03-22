#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
//creating global pointer
struct node *first=NULL;
void creat(int ar[],int n)
{
    struct node *t,*last;
    first=(struct node*)malloc(sizeof(struct node));
    first->data=ar[0];
    first->next=NULL;
    last=NULL;
    //start from 1 bcoz we already assign the value of first array element
    for(int i=1;i<n;i++)
    {
        t=(struct node*)malloc(sizeof(struct node));
        t->data=ar[i];
        t->next=NULL;
        last->next=t;
        last =t;
    }
}
void display(struct node *p)
{
    while(p!=0)
    {
        
        printf("%d,",p->data);
        p=p->next;
    }
}
int main()
{
    int a[]={5,8,6,7,9};
    creat(a,5);
    display(first);
    return 0;
}