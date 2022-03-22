#include<iostream>
#include<stdio.h>
#define maxsize 10
using namespace std;
struct queue
{
    int items[maxsize];//size of items
    int front;
    int rear;
};

void creat( struct queue *s)
{
    s->front=-1;
    s->rear=-1;
}
int isempty(struct queue *s)
{
    
   if(s->front==s->rear)
   {
       return 1;
   }
   else
   {
       return 0;
   }
}
int isfull( struct queue *s)
{
   
    if(s->rear==maxsize)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}
void enqueue_rear(int n)
{
  struct queue *s;
  if(isfull(s))
  {
   printf("queue overflow.\n");
  }
  else{
      s->rear++;
      s->items[s->rear]=n;
      printf("%d is enqueue in rear.\n",n);
  }
}

void enqueue_front(int n)
{
  struct queue *s;
  if(s->front<=0)
  {
   printf("queue overflow.\n");
  }
  else{
      s->items[s->front]=n;
      s->front--;
      printf("%d is enqueue in front.\n",n);
  }
}
void dequeue_front( struct queue *s)
{
   
    if(isempty(s))
    {
        printf("queue underflow.\n");
    }
    else
    {
        printf("dequeue %d from front.\n",s->items[s->front+1]);
        //delete s->items[s->front];
        s->front++;
    }
}
void dequeue_rear( struct queue *s)
{
   
    if(isempty(s))
    {
        printf("queue underflow.\n");
    }
    else
    {
        printf("dequeue %d from rear.\n",s->items[s->rear]);
        //delete s->items[s->front];
        s->rear--;
    }
}
void display()
{
    struct queue *s;
    int i;
    printf("\n");
    for(i=s->front+1;i<=s->rear;i++)
    {
        printf("%d,",s->items[i]);
    }
    printf("\n");
}
int main()
{
    struct queue *s;
    creat(s);   
    dequeue_front(s);
    enqueue_rear(5);
    enqueue_rear(4);
    enqueue_rear(6);
    enqueue_front(2);
    enqueue_rear(7);
    display();
    dequeue_front(s);
    display();
    dequeue_rear(s);
    display();
    dequeue_front(s);
    display();
    enqueue_front(9);
    display();
    return 0;
}