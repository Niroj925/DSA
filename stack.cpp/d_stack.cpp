#include<iostream>
#include<stdio.h>
using namespace std;
struct stack
{
    int size;
    int top;
    int *st;
};
void creat(struct stack *p,int n)
{
    p->size=n;
    p->st=new int;
    p->top=-1;
}
int isfull(struct stack *p)
{
 if(p->top==p->size-1)
 {
     return 1;
 }
 else 
 {
     return 0;
 }
}
int isempty(struct stack *p)
{
    if(p->top==-1)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}
void push(struct stack *p,int n)
{
  if(isfull(p))
  {
     printf("stack overflow.\n");
  }
  else
  {
      p->top++;
      p->st[p->top]=n;
  }
}
int pop(struct stack *p)
{ 
    int x=-1;
    if(isempty(p))
    {
        printf("stack underflow.\n");
    }
    else
    {
     x=p->st[p->top];
    p->top--;
    }
    return x;
}
int peek(struct stack *p,int pos)
{
    if(isempty(p))
    {
        printf("stack underflow.\n");
    }
    else{
        return (p->st[p->top-pos+1]);
    }
    return 0;
}
void display(struct stack *p)
{
    printf("\n");
    int i;
    for(i=0;i<=p->top;i++)
    {
        printf("%d,",p->st[i]);
    }
}
int main()
{
    struct stack *p;
    
    creat(p,5);
    printf("%d\n",p->size);
    push(p,4);
    push(p,5);
    push(p,7);
    display(p);
    pop(p);
    display(p);
    printf("peek:%d,",peek(p,2));
    return 0;
}
