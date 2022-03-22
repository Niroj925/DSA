#include<iostream>
#include<stdio.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*top;
int isempty()
{
    return top?0:1;//if top==null return 0 else return 1;
}
void push(int n)
{
    struct node *p;
    p=new node;
    if(p==NULL)
    {
        printf("stack overflow.\n");
    }
    else{
    p->data=n;
    p->next=top;
    top=p;
    }
}
int pop()
{
    struct node *p;
    int x=-1;
    if(top==NULL)
    {
        printf("stack underflow.\n");
    }
    else
    {    
    p=top;
    x=p->data;
    top=p->next;
    delete p;
    return x;
    }
    return 0;
}
int peek(int pos)
{
    struct node *p;
    p=top;
    int i;
    for(i=0;p!=NULL&&i<pos-1;i++)
    {
        p=p->next;
    }
    if(p!=NULL)
    {
    return p->data;
    }
    else
    {
        return -1;
    }
}
void display()
{
    struct node *p;
    p=top;
    while (p!=NULL)
    {
      printf("%d,",p->data);
      p=p->next;
    }
    printf("\n");
}
int main()
{
    struct node *p;
    push(5);
    push(4);
    push(3);
    display();
    printf("elelment %d is deleted.\n",pop());
    push(7);
    display();
    printf("peek element is %d\n",peek(2));
    return 0;
}