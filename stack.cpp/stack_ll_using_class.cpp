#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
};
class stack
{
    private:
    node *top;
    public:
    stack()
    {
        top=NULL;
    }
    void push(int x);
    int pop();
    void display();
};
void stack::push(int x)
{
    struct node *p;
    p=new node;
    if(p==NULL)
    {
        printf("stack is full.\n");
    }
    else
    {
    p->data=x;
    p->next=top;
    top=p;
    }
}
int stack::pop()
{
    struct node *p;
    int x=-1;
    if(top==NULL)
    {
        printf("stack is empty.\n");
    }
    else
    {
        p=top;
        x=p->data;
        top=top->next;
        delete p;
    }
return x;
}
void stack::display()
{
    struct node *p;
    p=top;
    while(p)
    {
        printf("%d,",p->data);
        p=p->next;
    }
    printf("\n");
}
int main()
{
    stack obj;
    obj.push(5);
    obj.push(7);
    obj.push(9);
    obj.display();
    printf("pop element is %d.\n",obj.pop());
    obj.display();
    return 0;
}