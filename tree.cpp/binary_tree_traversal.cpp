#include <iostream>
using namespace std;
struct node {
    int data;
    node *lchild;
    node *rchild;
}*root=NULL;
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
    if(key<p->data)
    {
        p->lchild=rinsert(p->lchild,key);
    }
    else if(key>=p->data){
        p->rchild=rinsert(p->rchild,key);
    }
    return p;
}
int search(struct node *p,int key)
{
 while(p!=NULL){
    if(p->data==key)
    {
      return p->data;
    }
    else if(key<p->data)
    {
        p=p->lchild;
    }
    else if(key>p->data)
    {
        p=p->rchild;
    }
 }
 return 0;
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
    root=rinsert(root,9);
    rinsert(root,4);
    rinsert(root,10);
    rinsert(root,6);
    rinsert(root,11);
    rinsert(root,5);
    inorder(root);
    int res=search(root,5);
    res==0?printf("\nelement not found.\n"):printf("\nelement found.\n");
    return 0;
}