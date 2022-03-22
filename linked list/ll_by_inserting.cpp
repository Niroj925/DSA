#include<iostream>
#include<stdio.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *last,*first=NULL;
void display(struct node *p)
{
    while (p!=0)
    {
        printf("%d,",p->data);
        p=p->next;
    }
}

void insert(int x)
{
  struct node *t;
  t=new node;
  t->next=NULL;
  t->data=x;
  if(first==NULL)
  {
   first=last=t;
  }
  else
  {
      //pointing last to next node 
      //this is linking case
   last->next=t;
   //assigning address of new next node
   last=t;
  }
}
int main()
{
    insert(15);
    insert(20);
    insert(25);
    insert(30);
    display(first);
    return 0;
}