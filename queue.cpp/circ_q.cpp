#include<stdio.h>
#include<iostream>
#define max 5
using namespace std;
struct cqueue
{
    int size;
    int rear;
    int front;
    int *items;
};
void creat(struct cqueue *p)
{
    printf("enter the size:");
    scanf("%d",&p->size);
  p->front=-1;
  p->rear=-1;
  p->items=new int[p->size];//creating array dinamically
}
int isfull(struct cqueue *p)
{
    if((p->rear+1)%max==p->front)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isempty(struct cqueue *p)
{
    if(p->front==p->rear)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void enqueue(struct cqueue *p,int n)
{
    if(isfull(p))
    {
        printf("queue is full dequeu some element.\n");

    }
    else
    {
    p->front=0;
    p->rear=(p->rear+1)%max;
    p->items[p->rear]=n;
    }
}
void dequeu(struct cqueue *p)
{
    if(isempty(p))
    {
        printf("queue is empty please enqueue some element.\n");
    }
    else
    {
    p->front=(p->front+1)%max;
    }
}
void dispaly(struct cqueue *p)
{
    int i=p->front;
 do
 {
    printf("%d,",p->items[i]);
    i=(i+1)%max;
 }while (i!=(p->rear+1)%max);
   printf("\n");
}
int main()
{
    struct cqueue *p;
    creat(p);
    enqueue(p,2);
    enqueue(p,4);
    enqueue(p,3);
    enqueue(p,6);
    enqueue(p,9);
   // enqueue(p,4);
    dispaly(p);
    dequeu(p);
    dispaly(p);
    dequeu(p);
    dispaly(p);
   // dequeu(p);
    return 0;

}