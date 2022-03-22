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
   for(int i=1;i<5;i++)
   {
       t=new node;
       t->data=arr[i];
       t->next=NULL;
       last->next=t;
       last=t;
   }
}
void check()
{
    struct node *p1,*p2;
    p1=first;
    p2=p1->next;
    int res;
    while (p2!=0)
    {
        if(p1->data<p2->data)
        {
            printf("%d,%d\n",p1->data,p2->data);
            res=1;
        }
        else 
        {
            res=0;
            break;
        }
        p1=p2;
        p2=p1->next;
    }
    if(res==1)
    {
        printf("element are in sorted order.\n");
    }
    else
    printf("element are not in sorted order.\n");   
}
int main()
{
    int ar[]={2,3,4,1,6,7};
    creat(first,ar);
    check();
    return 0;
}