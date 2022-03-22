#include<iostream>
#include<stdio.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *first=NULL,*last;
void creat(int n)
{
    int *arr;
    arr=new int;
    printf("enter element:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    struct node *t;
    first=new node;
    first->data=arr[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++)
    {
        t=new node;
        t->data=arr[i];
        t->next=NULL;
        //linking is done by following operation
        last->next=t;
        last=t;
    }
}
void display(struct node *p)
{
    while (p!=0)
    {
        printf("%d,",p->data);
        p=p->next;
    }
}
void insert(int pos,int val)
{
    struct node *p,*t;
    int i;
    p=first;
    for(i=0;i<pos-1;i++)
    {
        p=p->next;
    }
    t=new node;
    t->data=val;
    //inserting value by changing pointer 
    t->next=p->next;
    p->next=t;
}
int main()
{
    creat(5);
    insert(3,15);
    display(first);
    return 0;
}