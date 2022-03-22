#include<iostream>
using namespace std;
struct node {
    int *data;
    node *next;
    node *prev;
}*top=NULL;
void creat()
{
    int *array;
    int i;
    array=new int;
    printf("enter num:");
    for(i=0;i<5;i++){
        scanf("%d",&array[i]);;
    }
    struct node *p;
    p=new node;
    p->data=&array[0];
    p->next=p->prev=NULL;
    top=p;
    for(i=1;i<5;i++){
        p=new node;
        p->data=&array[i];
        p->next=NULL;
        p->prev=top;
        top=p;
    }
}
void display(){
    struct node *p;
    p=top;
    while(p){
        printf("%d,",*p->data);
        p=p->prev;
    }
}
int main(){
    creat();
    display();
    return 0;
}