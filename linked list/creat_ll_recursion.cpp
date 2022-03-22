#include<stdio.h>
#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *first=NULL;
void creat(int n)
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
//using recursion to display
void show(struct node *p)
{
    if(p!=NULL)
    {
        printf("%d,",p->data);
        show(p->next);
    }
}
//for reverse display of linked list
void reverse(struct node *p)
{
    if(p!=NULL)
    {
       
        reverse(p->next);
         printf("%d,",p->data);
    }
}
int main()
{
    creat(5);
    show(first);
    printf("\nreverse:");
    reverse(first);
    return 0;
}