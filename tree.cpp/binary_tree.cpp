#include<iostream>
using namespace std;
struct node {
    node *lchild;
    int data;
    node *rchild;
}*root=NULL;

void insert(int key)
{
    struct node * t=root;
    struct node * r,* p;
    if(root==NULL)
    {
        p=new node;
        p->data=key;
        p->lchild=p->rchild=NULL;
        root=p;
       // return;
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
void inorder(struct node *p)
{
    if(p)
    {
        inorder(p->lchild);
        printf("%d,",p->data);
        inorder(p->rchild);
    }
}
void postorder(struct node *p)
{
    if(p)
    {
        postorder(p->lchild);
        postorder(p->rchild);
       printf("%d,",p->data);
    }
}
int main()
{
    insert(7);
    insert(3);
    insert(10);
    insert(5);
    insert(9);
    inorder(root);//this printed element are in sorted order
    printf("\n");
    postorder(root);
    printf("\n");
    return 0;
}