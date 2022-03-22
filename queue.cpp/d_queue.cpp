#include<iostream>
#include<stdio.h>
using namespace std;
struct queue
{
    int size;
    int front;
    int rear;
    int *que;
};
void creat( struct queue *s)
{
    printf("enter the size of queue:");
    scanf("%d",&s->size);
    s->front=-1;
    s->rear=-1;
   s->que=new int[s->size];//creating array dinamically
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
   
    if(s->rear==s->size)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}
void enqueue(int n)
{
  struct queue *s;
  if(isfull(s))
  {
   printf("queue overflow.\n");
  }
  else{
      s->rear++;
      s->que[s->rear]=n;
      printf("%d is enqueue.\n",n);
  }
}
void dequeue( struct queue *s)
{
   
    if(isempty(s))
    {
        printf("queue underflow.\n");
    }
    else
    {
        printf("dequeue %d from queue.\n",s->que[s->front+1]);
        //delete s->items[s->front];
        s->front++;
    }
}
void display()
{
    struct queue *s;
    int i;
    printf("\n");
    for(i=s->front+1;i<=s->rear;i++)
    {
        printf("%d,",s->que[i]);
    }
    printf("\n");
}
int main()
{
    struct queue *s;
    creat(s);
    dequeue(s);
    enqueue(5);
    enqueue(4);
    enqueue(6);
    display();
    dequeue(s);
    display();
    dequeue(s);
    dequeue(s);
    dequeue(s);
    return 0;
}