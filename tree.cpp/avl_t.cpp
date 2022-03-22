#include<iostream>
#include<stdio.h>
using namespace std;
/*
struct node *llrotate(struct node *p)
{
    struct node *pl=p->lchild;
    struct node *pll=pl->lchild;
    pl->rchild=p;
    p->lchild=pll;
    p->height=nodeheight(p);
    pl->height=nodeheight(pl);
    if(root==p)
    {
        root=pl;
    }
    return pl;
}
void insert(int key){
struct node *t=root;
struct node *r,*p;
if(root=NULL)
{
    p=new node;
    p->data=key;
    //p->height=1;
    p->lchild=p->rchild=NULL;
    root=p;
}
while(t!=NULL)
{
    r=t;
    if(key<t->data)
    {
        t=t->lchild;
    }
    else if (key>t->data)
    {
        t=t->rchild;
    }
}
    p=new node;
    p->data=key;
    //p->height=1;
    p->lchild=p->rchild=NULL;
    key<r->data?r->lchild=p:r->rchild=p;
     p->height=nodeheight(p);
    //this is for ll rotation
    if(balancefactor(p)==2&&balancefactor(p->lchild)==1)
    {
       llrotate(p);
    }
}
*/
struct node {
    node *lchild;
    int data;
    node *rchild;
}*root=NULL;

//for height of node
//it's doing perfect
int nodeheight(struct node *p)
{
  int hl=0,hr=0;
 if(!p)
 {
     return 0;
 }
 hl=nodeheight(p->lchild);
hr=nodeheight(p->rchild);
  return hl>hr?hl+1:hr+1;
}
int balancefactor(struct node *p){
    int lh,rh;
   lh=nodeheight(p->lchild);
   rh=nodeheight(p->rchild);
  return lh-rh;
}
void insert(int key)
{
    struct node *t=root;
    struct node *p,*r;
    if(root==NULL)
    {
        p=new node;
        p->data=key;
        p->lchild=p->rchild=NULL;
        root=p;
    }
    while(t!=NULL)
    {
        r=t;
        if(key<t->data)
        {
            t=t->lchild;
        }
        else if(key>t->data)
        {
            t=t->rchild;
        }
    }
    p=new node;
    p->data=key;
    p->lchild=p->rchild=NULL;
    key<r->data?r->lchild=p:r->rchild=p;
}
//recursive way to creting binary tree 
struct node *rinsert(node *p,int key)
{
    struct node *t=NULL;
    if(p==NULL)
    {
        t=new node;
        t->data=key;
        t->lchild=t->rchild=NULL;
        return t;
    }
    else if(key<p->data)
    {
        p->lchild=rinsert(p->lchild,key);
    }
    else if (key>p->data)
    {
        p->rchild=rinsert(p->rchild,key);
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
    root=rinsert(root,10);
    rinsert(root,13);
    rinsert(root,11);
   insert(6);
   insert(4);
   insert(9);
   insert(5);
   inorder(root);
   printf("\nroot height:%d\n",nodeheight(root));
   printf("\nbalance factor:%d\n",balancefactor(root));
    return 0;
}