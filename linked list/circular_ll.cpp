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
    struct node  *p;
    int *arr;
    arr=new int;
    int i;
    printf("enter data:");
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    first=new node;
    first->data=arr[0];
    first->next=NULL;
    last=first;
    for(i=1;i<n;i++)
    {
        p=new node;
        p->data=arr[i];
        p->next=NULL;
        last->next=p;
        last=p;
    }
  last->next=first;
}
void insert(int n,int num)
{
    int i;
    struct node *p,*q,*t;//three pointer is not compulsory in inserting 
    p=first;
    for(i=1;i<n-1;i++)
    {
        p=p->next;
        q=p;
    }
    t=new node;
    t->data=num;
    t->next=p->next;
    q->next=t;
}
void delet(int n)
{
    int i;
    struct node *p,*q;
    p=first;
    for(i=1;i<n;i++)
    {
        q=p;
        p=p->next;
    }
    q->next=p->next;
    delete p;
}
void display()
{
    struct node *p,*head;
    head=p=first;
    do
    {
        printf("%d,",p->data);
       p=p->next;
    }while(p!=head);
    printf("\n");
}
int main()
{ 
 creat(5);
 display();
 insert(3,9);
 display();
 delet(4);
 display();
 return 0;
}