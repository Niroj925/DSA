
#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *first=NULL,*second=NULL,*third=NULL;
void creat1(int arr[])
{
    struct node *t,*last;
    first=new node;
    first->data=arr[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<5;i++)
    {
        t=new node;
        t->data=arr[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void creat2(int arr[])
{
    struct node *t,*last;
    second=new node;
    second->data=arr[0];
    second->next=NULL;
    last=second;
    for(int i=1;i<4;i++)
    {
        t=new node;
        t->data=arr[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void merging(struct node *p,struct node *q)
{
 struct node *last;
 //intializing for first time 
 if(p->data<q->data)
 {
     last=third=p;
     p=p->next;
     third->next=NULL;
 }
 else
 {
     last=third=q;
     q=q->next;
     third->next=NULL;
 }
while (p && q);
{
    if(p->data<q->data)
    {
        last->next=p;
        last=p;
        p=p->next;
        last->next=NULL;
    }
    else
    {
        last->next=q;
        last=q;
        q=q->next;
        last->next=NULL;
    }
}
if(p)last->next=p;
if(q) last->next=q;
}
void Merge(struct node *p,struct node *q)
{
    struct node *last;
    if(p->data < q->data)
        {
            third=last=p; 
                   p=p->next;
                   third->next=NULL;
        }
        else  
          {
          third=last=q;
             q=q->next;
             third->next=NULL;
         }
          while(p && q)
             {
                if(p->data < q->data)     
                            {
                        last->next=p;  
                       last=p;         
                          p=p->next;
                      last->next=NULL; 
                             }
                             else
                            {          
                          last->next=q;  
                          last=q;        
                        q=q->next;       
                         last->next=NULL;  
                               }
    }
    if(p)last->next=p;
    if(q)last->next=q;
    }
void merg(struct node *p,struct node *q)
{
    struct node *last;
    if(p->data<q->data)
    {
        last=third=p;
        p=p->next;
        third->next=NULL;
    }
    else
    {
        last=third=q;
        q=q->next;
        third->next=NULL;
    }
    while(p && q)
    {
        if(p->data<q->data)
        {
            last->next=p;
            last=p;
            p=p->next;
            last->next=NULL;
        }
        else
        {
            last->next=q;
            last=q;
            q=q->next;
            last->next=NULL;
        }
    }
    if(p)last->next=p;
    if(q)last->next=q;
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
    int arr1[]={2,3,6,8,9},arr2[]={1,4,5,7};
    creat1(arr1);
    creat2(arr2);
    display(first);
    printf("\n");
    display(second);
    //merging(first,second);
   // Merge(first,second);
    merg(first,second);
    printf("\n");
    display(third);
    return 0;
}