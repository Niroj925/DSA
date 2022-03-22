#include<istream>
#include<stdio.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *first=NULL,*last;

void creat(int n)
{
 int *arr;
 arr=new int;
 int i;
first=new node;
first->data=arr[0];
first->next=NULL;
last=first;
}
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
void disp()
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
    insert(5);
    insert(6);
    insert(2);
    disp();
    return 0;
}