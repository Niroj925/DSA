#include<iostream>
#include<stdio.h>
using namespace std;
class node
{
    public:
    int data;
    node *next;
};
class ll
{
    private:
    node *first=NULL;
    public:
    void creat(int arr[]);
    void display();
    void insert(int pos,int val);
};
void ll::creat(int arr[])
{
    node *p,*last;
    first=new node;
    first->data=arr[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<5;i++)
    {
        p=new node;
        p->data=arr[i];
        p->next=NULL;
        last->next=p;
        last=p;
    }
}
void ll::display()
{
    node *p;
    p=first;
    while (p)
    {
        printf("%d,",p->data);
        p=p->next;
    }
}
void ll::insert(int pos ,int val)
{
    node *p,*q,*t;
    int i;
    p=first;
    for(i=1;i<pos-1;i++)
    {
       p=p->next;
       q=p;
    }
    t=new node;
    t->data=val;
    t->next=p->next;
    q->next=t;
    
}
int main()
{
    ll obj;
    int arr[]={2,4,6,9,7};
    obj.creat(arr);
    obj.display();
    obj.insert(3,5);
    printf("\n");
    obj.display();
    return 0;
}