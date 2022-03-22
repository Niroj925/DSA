#include<iostream>
#include<stdio.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *first=0;
void creat(int n)
{
    struct node *t,*last;
    int *ar;
    ar=new int;
    int i;
    printf("enter element:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    //first=(struct node*)malloc(sizeof(struct node));
    first=new node;
    first->data=ar[0];
    first->next=NULL;
    last=first;
    //start from 1 bcoz we already assign the value of first array element
    for(int i=1;i<n;i++)
    {
        //t=(struct node*)malloc(sizeof(struct node));
        t=new node;
        t->data=ar[i];
        t->next=NULL;
        last->next=t;
        last =t;
    }
}
void display(struct node *p)
{
    printf("element in linked list are:\n");
    while(p!=0)
    {
        printf("%d\n",p->data);
        p=p->next;
    }
}
int main()
{
    creat(5);
    display(first);
    return 0;
}