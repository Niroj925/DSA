#include<iostream>
using namespace std;
struct node {
    int data;
    node *lchild;
    node *rchild;
   node *prev;
}*root=NULL,*last;

void insert(int key)
{
 struct node *t=root;
 struct node *p,*q,*r;
 if(root==NULL)
 {
     p=new node;
     p->data=key;
     p->lchild=p->rchild=NULL;
     p->prev=NULL;
     root=p;
     last=p;
 }
 while(t!=NULL)
 {
     r=t;
     if(key<t->data)
     {
         if(t->lchild!=NULL)
         {
             t->prev=r;
         }
         t=t->lchild;
        
     }
     else if(key>t->data)
     {
         if(t->lchild!=NULL)
         {
             t->prev=r;
         }
         t=t->rchild;
     }
 }
 p=new node;
 p->data=key;
 p->lchild=p->rchild=NULL;
 key<r->data?r->lchild=p:r->rchild=p;
 r->lchild!=NULL?last=r->lchild:last=r->rchild;
}
void display_last()
{
    struct node *p;
    p=last;
while(p->data!=root->data)
{
    printf("%d,",p->data);
     p=p->prev;
}
}
void inorder(struct node *p)
{
    if(p)
    {
        inorder(p->lchild);
        printf("%d,",p->data);
        inorder(p->rchild);
    }
}
int main(){
    insert(9);
    insert(3);
    insert(5);
    insert(6);
    inorder(root);
    printf("\n%d\n,",last->prev->data);
   // display_last();
    return 0;
}