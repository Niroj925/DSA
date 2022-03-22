#include<iostream>
#include<stdio.h>
using namespace std;
struct stack
{
    int top;
    char *st;
};
int isbalance(char exp[])
{
 struct stack *p;
 p->st=new char;
 int i;
 p->top=-1;
 for(i=0;exp[i]!='\0';i++)
 {
  if(exp[i]=='(')
  {
    p->top++;
    p->st[p->top]=exp[i];
  }
   else if(exp[i]==')')
  {
      if(p->top==-1)
      {
          return 1;
      }
      else
      {
      p->top--;
      }
  }
 }
 return (p->top<0)?0:1;
}
int main()
{
    char exp[]="(((a+b)-C)";
    int res=isbalance(exp);
    printf("%d\n",res);
    (res==0)?printf("parenthes is match.\n"):printf("not matched.\n");
    return 0;
}