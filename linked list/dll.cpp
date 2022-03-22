#include<iostream> 
using namespace std;
struct node {
    node *prev;
    int data;
    node *next;
};
struct node *first=NULL,*last;
void insert(int data)
{
    struct node *p;
    if(first==NULL)
    {
     first=new node;
     first->data=data;
     first->next=NULL;
     last=first;
    }
    else
    {
    p=new  node;
    p->data=data;
    p->next=NULL;
    last->next=p;
    p->prev=last;
    last=p;
    }
}
void display(){
    struct node *p;
    p=last;
    while(p){
        printf("%d,",p->data);
        p=p->prev;
    }
}
int main(){
    insert(5);
    insert(4);
    insert(2);
    display();
}