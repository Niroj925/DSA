#include<iostream>
struct node{
    int data;
    node *next;
    node *prev;
}*front,*rear=NULL;

void enqueue(int data){
    node *p; 
    if(rear==NULL){
           p=new node;
      p->data=data;
      p->next=p->prev=NULL;
      front=rear=p;
    }
    else{
       p=new node;
      p->data=data;
    p->next=NULL;
    p->prev=rear;
    rear->next=p;
    rear=p;
    rear->next=NULL;
    }
}
int isempty(){

    if(front==NULL){
       // return 1;
        return true;
    }
    else
    {
       // return 0;
        return false;
    }
}
int dequeue(){
    struct node *p;
    int de;
    if(isempty()){
        printf("queue is empty.\n");
    }
    else
    {
     p=front;
     front=p->next;
     de=p->data;
     delete p;
    }
    return de;
}
void display(){
    struct node *p;
    p=front;
    while(p){
        printf("%d,",p->data);
        p=p->next;
    }
}