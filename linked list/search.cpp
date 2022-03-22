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
void search(struct node *p,int key)
{
 int res;
    while(p!=NULL)
    {
    if(p==NULL)
    {
        res=0;
    }
    else
    {
        if(key==p->data)
        {
             res=1;
             break;
        }
        else
        {

            res=0;
        }
    }
    p=p->next;
    }
    if(res==1)
    {
        printf("element is found.\n");
    }
    else
    {
        printf("element does not found.\n");
    }
}
int main()
{
    creat(5);
    search(first,6);
    return 0;
}