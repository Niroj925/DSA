#include<iostream>
#include<stdio.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *first=0;
int creat(int n)
{
    int *arr;
    arr=new int;
    printf("enter element:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    struct node *t,*last;
    first=new node;
    first->data=arr[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++)
    {
        t=new node;
        t->data=arr[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
int sum(struct node *p)
{
    int sum=0;
    while(p!=0)
    {
        sum+=p->data;
        p=p->next;
    }
    return sum;
}
int main()
{
    creat(5);
    printf("sum:%d\n",sum(first));
    return 0;
}