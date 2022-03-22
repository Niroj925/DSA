#include <iostream>
#include <chrono>
using namespace std;
struct node {
    int data;
    node *lchild;
    node *rchild;
}*root=NULL;
struct node *insert(node *p,int key)
{
    struct node *t=NULL;
    if(p==NULL)
    {
      t=new node;
      t->data=key;
      t->lchild=t->rchild=NULL;
      return t;
    }
    if(key<p->data)
    {
        p->lchild=insert(p->lchild,key);
    }
    else if(key>=p->data){
        p->rchild=insert(p->rchild,key);
    }
    return p;
}
int height(struct node *p){
if(p==NULL) 
{
    return 0;
}
    int x,y;
  x=height(p->lchild);
  y=height(p->rchild);
  return x>y?x+1:y+1;
}
//for predessor
struct node *inpre(struct node *p)
{
    while(p&&p->rchild!=NULL){
     p=p->rchild;
    }
    return p;
}
//for successor
struct node *insuc(struct node *p)
{
    while(p&&p->lchild!=NULL){
     p=p->lchild;
    }
    return p;
}
struct node *delet(struct node *p,int key){
 struct node *q;
 if(p==NULL)
 {
     return NULL;
 }
 if(p->lchild==NULL&&p->rchild==NULL)
 {
     if(p==NULL)
     {
         root=NULL;
     }
     free(p);
     return NULL;
 }
     if(key<p->data)
    {
        p->lchild=delet(p->lchild,key);
    }
    else if(key>p->data)
    {
        p->rchild=delet(p->rchild,key);
    }
    else
    {
        if(height(p->lchild)>height(p->rchild))
        {
            q=inpre(p->lchild);
            p->data=q->data;
            p->lchild=delet(p->lchild,q->data);
        }
        else
           {
            q=insuc(p->rchild);
            p->data=q->data;
            p->rchild=delet(p->rchild,q->data);
        }
    }
    return p;
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
int main()
{
    root=insert(root,9);
    insert(root,4);
    insert(root,10);
    insert(root,6);
    insert(root,11);
    insert(root,5);
    delet(root,6);
    inorder(root);
    printf("\n");

    return 0;
}