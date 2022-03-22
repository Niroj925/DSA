#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
}*front=NULL,*rear;

void enque(int x)
{ 
 struct node *p;
 p=new node;
 if(p==NULL)
 {
     printf("queue is full.\n");
 }
 else
 {
 if(front==NULL)
 {
  front=rear=p;
 }
  p->data=x;
  p->next=NULL;
  rear->next=p;
  rear=p;
}
}
int dequeue()
{
    int x=-1;
    node *p;
    p=front;
    if(front==NULL)
    {
        printf("queue is empty.\n");
    }
    else
    {
     x=front->data;
     p=front->next;
     delete front;
     front=p;
     return x;
    }
    return 0;
}
void display()
{
    node *p;
    p=front;
    while(p)
    {
        printf("%d,",p->data);
        p=p->next;
    }
    printf("\n");
}
int main()
{
    enque(5);
    enque(2);
    enque(9);
    display();
    dequeue();
    display();
    return 0;
}