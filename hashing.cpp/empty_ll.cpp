#include<iostream>
#include<stdio.h>
using namespace std;
struct node 
{
    int data;
    struct node *next;
}*first=NULL,*last;
void insert(int n)
{
    if(first==NULL)
    {
        first=new node;
        first->data=n;
        first->next=NULL;
        last->next=first;
        last=first;
    }
    else
    {
        struct node *p;
        p=new node;
        p=last;
        p->data=n;
        p->next=NULL;
        last->next=p;
        last=p;
    }
}
void display()
{
    struct node *p;
    p=first;
    while(p!=NULL)
    {
        printf("%d,",p->data);
        p=p->next;
    }
}
int main()
{
    insert(4);
    insert(3);
    display();
    return 0;
}