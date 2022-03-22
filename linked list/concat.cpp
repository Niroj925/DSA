
#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *first=NULL,*second=NULL,*last;
void creat1(int arr[])
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
void creat2(int arr[])
{
    struct node *t;
    second=new node;
    second->data=arr[0];
    second->next=NULL;
    last=second;
    for(int i=1;i<4;i++)
    {
        t=new node;
        t->data=arr[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void concat()
{
    struct node *p;
    p=first;
    while(p->next!=0)
    {
        p=p->next;
    }
    p->next=second;
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
    int arr1[]={2,3,7,9,4},arr2[]={3,5,1,6};
    creat1(arr1);
    creat2(arr2);
    display(first);
    printf("\n");
    display(second);
    concat();
    printf("\n");
    display(first);
    return 0;
}