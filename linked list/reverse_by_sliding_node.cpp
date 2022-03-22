//this is the best way to reverse
#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *first=NULL,*last;
void creat(struct node *p,int arr[])
{
    struct node *t;
    first=new node;
    first->data=arr[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<5;i++)
    {
        t=new node;
        t->data=arr[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void  reverse()
{
    struct node *p,*q,*r;
    p=first;
    q=NULL;
    r=NULL;
    while(p!=0)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;  
    }
     first=q;
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
    int arr[]={2,3,7,9,4};
    creat(first,arr);
     reverse();
    display(first);
    return 0;
}