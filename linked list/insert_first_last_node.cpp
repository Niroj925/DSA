#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *first=NULL;
struct node *last=NULL;
void creat(int n)
{
    int *arr,i;
    arr=new int;
  printf("enter element:");
  for(i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }
  struct node *t;
  //intializing first node
  first=new node;
  first->data=arr[0];
  first->next=NULL;
  last=first;
  for(i=1;i<n;i++)
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
    while (p!=NULL)
    {
        printf("%d,",p->data);
        p=p->next;
    }
}
void insert_f(struct node *p,int x)
{
  struct node *t;
  t=new node;
  t->data=x;
  t->next=first;
  first=t;
}
void insert_l(struct node *p,int x)
{
  struct node *t;
  t=new node;
  t->data=x;
  last->next=t;
  t->next=NULL;
  last=t;
}
int main()
{
    struct node *temp;
    creat(5);
    insert_f(first,10);
    display(first);
    insert_l(first,20);
    printf("\n");
    display(first);
    return 0;
}