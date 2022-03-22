#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *first=NULL,*last;
void creat(struct node *p,int arr[])
{
   struct node *t;
   first=new node;
   first->data=arr[0];
   first->next=NULL;
   last=first;
   for(int i=1;i<7;i++)
   {
       t=new node;
       t->data=arr[i];
       t->next=NULL;
       last->next=t;
       last=t;
   }
}
void r_duplicate()
{
    struct node *p,*q;
     p=first;
     q=p->next;
     while (q!=0)
     {
         if(p->data!=q->data)
         {
         p=q;
         q=q->next;  
         }
         else
         {
            p->next=q->next;
            delete q;
            q=p->next;
         }
        
         }
     }
void display(struct node *p)
{
    while(p!=0)
    {
        printf("%d,",p->data);
        p=p->next;
    }
}
int main()
{
    int ar[]={1,2,2,3,4,4,4};
    creat(first,ar);
    display(first);
    printf("\n");
    r_duplicate();
    display(first);
    return 0;
}