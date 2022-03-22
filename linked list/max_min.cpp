#include<iostream>
#include<stdio.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *first=0;
void creat(int n)
{
    int *arr;
    arr=new int;
    printf("enter elements:\n");
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
int max(struct node *p)
{
    int max=-999999;
    while(p!=0)
    {
        //using ternary operator
    (p->data>max)?max=p->data:max=max;
    p=p->next;
    }
    return max;
}
int main()
{
    creat(5);
    printf("max:%d\n",max(first));
    return 0;
}