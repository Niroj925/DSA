#include<iostream>
using namespace std;
#include<iostream>
#include<stdio.h>
using namespace std;
struct node
{
    char data;
    struct node *next;
}*top;
int isempty()
{
    return top?0:1;//if top==null return 0 else return 1;
}
void push(char n)
{
    struct node *p;
    p=new node;
    if(p==NULL)
    {
        printf("stack overflow.\n");
    }
    else{
    p->data=n;
    p->next=top;
    top=p;
    }
}
int pop()
{
    struct node *p;
    int x=-1;
    if(top==NULL)
    {
        printf("stack underflow.\n");
    }
    else
    {    
    p=top;
    x=p->data;
    top=p->next;
    delete p;
    return x;
    }
    return 0;
}
int isoperand(char x)
{
    if(x=='+'||x=='-'||x=='*'||x=='/')
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int prec(char x)
{
    if(x=='-'||x=='+')
    {
        return 1;
    }
    else if(x=='*'||x=='/')
    {
        return 2;
    }
    else
    return 0;
}
void convert(char infix[])
{
    struct node *p;
   char *posf=new char;
   int i=0,j=0;
   while(infix[i]!='\0')
   {
       //printf("operand:%d,",isoperand(infix[i]));
       //printf("precedence:%d\n",prec(infix[i]));
    if(isoperand(infix[i]))
    {
       posf[j]=infix[i];
       j++;
    }
    else
    {
       if(prec(infix[i])>prec(top->data))
       {
         push(infix[i]);//push into the stack
       }
       else
       {
           while(prec(top->data)>=prec(infix[i]))
           {
               posf[j]=pop();//pop out from stack 
               j++;
           }
         push(infix[i]);
       }
    }
    i++;
   }
   while(top!=NULL)
   {
    posf[j]=pop();//pop out all the data from stack 
    j++;
   }
   printf("\npostfix:");
   for(i=0;i<j-1;i++)
   {
       printf("%c",posf[i]);
   }
   printf("\n");
}
int main()
{
    struct stack *p;
    char infix[]="3*5+6/2-4";
    push('#');//intially stack is empty so insert some data
    convert(infix);
    return 0;
}