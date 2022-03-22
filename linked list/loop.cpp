#include<iostream>
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
    struct node  *p;
    int *arr;
    arr=new int;
    int i;
    printf("enter data:");
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
  last->next=first;
}
int check()
{
    struct node *p,*q;
    p=q=first;
    do
    {
        p=p->next;
        q=q->next->next;
        printf("%d,%d\n",p->data,q->data);
        if(p==NULL||q==NULL)
        {
            break;
        }
        if(p==q)
        {
            break;
        }
        
    }while(p!=q);
return (p==q)?1:0;
};
int main()
{
 creat(5);
 int res=check();
 res==1?printf("loop exist\n"):printf("there is no loop.\n");
 return 0;
}