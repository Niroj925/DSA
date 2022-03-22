#include<iostream>
using namespace std;
struct  node
{
    int data;
    struct node *next;
};
struct node *first=NULL,*last;
void creat(struct node *p,int arr[])
{
   struct node *t;
    first=new node;
    first->data=arr[0];
    first->next=NULL;
    last=first; 
    for(int i=1;i<5;i++)
    {
     t=new node;
     t->data=arr[i];
     t->next=NULL;
     last->next=t;
     last=t;
    }
}
void delet(int pos)
{
    struct node *p=first,*q,*t;
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
void display(struct node *p)
{
    while(p!=0)
    {
        printf("%d,",p->data);
        p=p->next;
    }
}
int main()
{
 int arr[]={2,5,4,9,7};
 creat(first,arr);
 display(first);
 printf("\n");
 delet(3);
 display(first);
printf("\n");
 delet(1);
 display(first);
 return 0;
}