#include<iostream>
#include<stdio.h>
#define maxsize 10
using namespace std;
struct stack
{
    int items[maxsize];//size of items
    int top;
};
void creat( struct stack *s)
{
    s->top=-1;
}
int isempty(struct stack *s)
{
    
   if(s->top==-1)
   {
       return 1;
   }
   else
   {
       return 0;
   }
}
int isfull( struct stack *s)
{
   
    if(s->top==maxsize)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}
void push(int n)
{
  struct stack *s;
  if(isfull(s))
  {
   printf("stack overflow.\n");
  }
  else{
      s->top++;
      s->items[s->top]=n;
      printf("%d is push in stack.\n",n);
  }
}
void pop( struct stack *s)
{
   
    if(isempty(s))
    {
        printf("stack underflow.\n");
    }
    else
    {
        printf("pop out %d from stack.\n",s->items[s->top]);
        s->top--;
    }
}
void display()
{
    struct stack *s;
    int i;
    printf("\n");
    for(i=0;i<=s->top;i++)
    {
        printf("%d,",s->items[i]);
    }
    printf("\n");
}
int main()
{
    struct stack *s;
    creat(s);
    pop(s);
    push(5);
    push(4);
    display();
    pop(s);
    display();
    return 0;
}