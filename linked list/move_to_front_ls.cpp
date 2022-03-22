#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *first=NULL;
void creat(int n)
{
    int *arr,i;
    arr=new int;
  printf("enter element:");
  for(i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }
  struct node *t,*last;
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
//return type must be node type;
struct node *search(struct node *p,int key)
{
    struct node *q=NULL;
    while(p!=NULL)
    {
    if(key==p->data)
    {
      q->next=p->next;
      p->next=first;
      first=p;
      return p;
      break;
    }
    else
    {
       q=p;
       p=p->next;
    }
    }
    return NULL;
}
int main()
{
    struct node *temp;
    creat(5);
    temp=search(first,6);
    if(temp)
    {
        printf("element found:%d\n",temp->data);
    }
    else
    {
        printf("element not found.\n");
    }
    search(first,5);
    display(first);
    return 0;
}