#include<iostream>
#include<stdio.h>
using namespace std;
struct node{
    node *prev;
    int data;
    node *next;
};
struct node *first=NULL,*last;
void creat(int n)
{
    struct node *p;
    int *arr;
    arr=new int;
    printf("Enter element:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    first=new node;
    first->prev=NULL;
    first->data=arr[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++)
    {
      p=new node;
      p->data=arr[i];
      p->next=last->next;
      p->prev=last;
      last->next=p;
      last=p;
    }
}
void insert(int pos ,int val)
{
    int i;
    struct node *p,*q,*t;
    p=first;
    for(i=1;i<pos-1;i++)
    {
        q=p;
        p=p->next;
    }
    t=new node;
    t->data=val;
    t->next=p->next;
    q->next=t;
    t->prev=q;
    p->prev=t;
}
void delet(int n)
{
    struct node *p,*q,*r;
    int i;
    p=first;
    for(i=1;i<n;i++)
    {
      q=p;
      p=p->next;
      r=p->next;
    }
    r->prev=p->prev;
    q->next=p->next;
    delete p;
}
void display()
{
    struct node *p;
    p=last;
    while (p)
    {
        printf("%d,",p->data);
        p=p->prev;
    }
    printf("\n");
}
int main()
{
    creat(5);
    display();
    insert(3,6);
    display();
    delet(3);
    display();
    return 0;
}