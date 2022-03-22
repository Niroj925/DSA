#include<iostream>
#include<stdio.h>
using namespace std;
class node
{
    public://this must be public otherwise can not access outside from the class
    int data;
    node *next;
};
class linkedlist
{
private:
node *first=NULL;//intialize node class to creat node
public:
void creat(int n);
void display();
void delet(int n);
};
void linkedlist::creat(int n)
{
    node *p,*last;
    int *arr;
    arr=new int;
    int i;
    printf("enter element:");
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
}
void linkedlist::display()
{
 node *p;
 p=first;
 printf("enter element are:");
 while (p)
 {
    printf("%d,",p->data);
    p=p->next;
 }
}
 void linkedlist::delet(int pos)
{
     node *p=first,*q,*t;
    int i,x;
    if(pos==1)
    {
        x=first->data;
        p=first;
        first=first->next;
        delete p;
    }
    else
    {
    for(i=0;i<pos-1&&p;i++)
    {
        q=p;
        p=p->next;
    }
    //checking if p is null or not 
    if(p)
    {
    q->next=p->next;
    //to deallocating memory form heap
    x=p->data;
    delete p;
    }
    }
}
int main()
{
  linkedlist a;
  a.creat(5);
  a.display();
  a.delet(3);
  a.display();
  return 0;
}