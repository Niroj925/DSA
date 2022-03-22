#include <iostream>
struct snode {
    int data;
    snode *next;
    snode *prev;
}*top=NULL;

int isempty()
{
    if(top==NULL)
    {
        return 1;
    }
    return 0;
}
void push(int key)
{
    struct snode *p;
    if(top==NULL)
    {
    p=new snode;
    p->data=key;
    //p->next=
    p->prev=NULL;
    top=p;
    }
    else
    {
        p=new snode;
        p->data=key;
       // p->next=NULL;
        p->prev=top;
        top=p;
    }
}
int pop(){
    struct snode *p;
    if(isempty())
    {
     printf("stack is empty.\n");
    }
    else
    {
    p=top;
    return p->data;
    delete p;
    top=p->prev; 
    }
}
void display(){
    struct snode *p;
    p=top;
    while (p)
    {
        printf("%d,",p->data);
        p=p->prev;
        /* code */
    }
    
}

