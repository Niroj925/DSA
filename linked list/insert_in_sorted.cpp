#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *first=NULL,*last;
void creat(struct node *p,int arr[])
{
    first=new node;
    first->data=arr[0];
    first->next=NULL;
    last=first;
    struct node *t;
    for(int i=1;i<5;i++)
    {
       t=new node;
       t->data=arr[i];
       t->next=NULL;
       last->next=t;
       last=t;
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
void insert(int n)
{
  struct node *t,*p=first,*q=NULL;
  t=new node;
  //if inserting elemet is less than first element
   if(p->data>n)
   {
     t->next=first;
     first=t;
     t->data=n;
   }
   else
   {
  while (p->data<n)
  {
      q=p;
      p=p->next;
  }
  t->next=q->next;
  q->next=t;
  t->data=n;
   }
}
int main()
{
    int ar[]={2,5,9,10,13};
    creat(first,ar);
    insert(6);
    display(first);
    insert(1);
    printf("\n");
    display(first);
    return 0;
}