#include<iostream>
#include<stdio.h>
using namespace std;
struct node
{
    int data;
    struct node  *next;
};
struct node *first=NULL;
void creat(int n)
{
    int *arr;
    int i;
    arr=new int;
    printf("enter element:\n");
    for(i=0;i<n;i++)
    {
     scanf("%d",&arr[i]);
    }
    struct node *t,*last;
    first=new node;
    first->data=arr[0];
    first->next=NULL;
    last=first;
    printf("first=%d,first->data=%d,first->next=%d,last=%d\n",first,first->data,first->next,last);
    for(i=1;i<n;i++)
    {
        t=new node;
        t->data=arr[i];
        t->next=NULL;
        last->next=t;
        last=t;
        printf("t=%d,t->data=%d,t->next=%d,last->next=%d,last=%d\n",t,t->data,t->next,last->next,last);
    }
}
void show(struct node *p)
{
    while(p!=0)
    {
        printf("%d,%d\n",&p->data,p->data);
        p=p->next;
    }
}
int count(struct node *p)
{
    int count=0;
    while(p!=0)
    {
      count++;    
      p=p->next;   
    }
    return count;
}
//using recursively
int countr(struct node *p)
{
    if(p==0)
    {
        return 0;
    }
    else
    return countr(p->next)+1;
}
int main()
{
    creat(5);
    printf("\nno. of nodes=%d\n",count(first));
    //calling recursive function
    printf("\nno. of nodes=%d\n",countr(first));
    show(first);
    return 0;
}