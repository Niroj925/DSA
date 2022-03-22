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
    for(int i=1;i<6;i++)
    {
       t=new node;
       t->data=arr[i];
       t->next=NULL;
       last->next=t;
       last=t;
    }
}
//reversing by element this 
void reverse_element()
{
    int *arr;
    arr=new int;
    int i=0;
    struct node *p;
    p=first;
    while (p!=0)
    {
        arr[i]=p->data;
        i++;
        p=p->next;
    }
    p=first;
    while (p!=0)
    {
        i--;
        p->data=arr[i];
        p=p->next;
    }   
}
void display(struct node *p)
{
    while (p!=0)
    {
        printf("%d,",p->data);
        p=p->next;
        /* code */
    }
    
}
int main()
{
    int arr[]={3,5,1,7,6,9};
    creat(arr);
    reverse_element();
    display(first);
    return 0;
}