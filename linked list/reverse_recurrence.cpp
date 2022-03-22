
#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *first=NULL,*last;
void creat(int arr[])
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
void reverse(struct node *q,struct node *p)
{
    
    if(p)
    {
        reverse(p,p->next);
        p->next=q;
    }
    else
    {
        first=q;
    }
}
void Reverse3(struct node *q,struct node *p)
{
    if(p) 
       {
         Reverse3(p,p->next);   
         p->next=q;  
        }
        else
        {
        first=q;
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
    int arr[]={2,3,7,9,4};
    creat(arr);
    reverse(NULL,first);
    display(first);
    return 0;
}