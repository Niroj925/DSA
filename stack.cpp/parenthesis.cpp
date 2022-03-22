#include<iostream>
using namespace std;
struct node
{
    char data;
    node *next;
}*top=NULL;
int isbalance(char exp[])
{
    struct node *p;
    int i;
    for(i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='['||exp[i]=='{'||exp[i]=='(')
        {
            p=new node;
            p->data=exp[i];
            p->next=top;
            top=p;
        }
       else if(exp[i]==']'||exp[i]=='}'||exp[i]==')')
        {
            p=top;
            int tv=p->data;
            int val=exp[i];
            int diff=val-tv;
            if(diff==1||diff==2)
            {
                p=top;
                top=top->next;
                delete p;
            }
            else
            {
                p=new node;
                p->data=exp[i];
                p->next=top;
                top=p;
            }
        }
    }
 return top==NULL?0:1;
}
void display()
{
    struct node *p;
    p=top;
    while(p!=NULL)
    {
      printf("%d,",p->data);
      p=p->next;
    }
}
int main()
{
    char exp[]="[(a+b-{(c+d)*e/f}]";
    int res=isbalance(exp);
    printf("%d\n",res);
    isbalance(exp)?printf("not match.\n"):printf("match.\n");
    return 0;
}