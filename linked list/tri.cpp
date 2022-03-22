#include<iostream> 
using namespace std;
struct node {
    node *lchild;
    int data;
    node *rchild;
};
struct node *root=NULL;
void pos(int data){
    struct node *p,*q;
    p=root;
    int val=root->data;
    while(p->lchild!=NULL||p->rchild!=NULL)
    {
    if(val<data)
    {
     p=p->lchild;
     val=p->data;
    }
    else{
     p=p->rchild;
     val=p->data;
    }
    }
    q=p;
    p=new node;
    if(val<data)
    {
     p->data=data;
     q->lchild=p;
     p->lchild=NULL;
     p->rchild=NULL;
    }
    else
    {
     p->data=data;
     q->rchild=p;
     p->lchild=NULL;
     p->rchild=NULL;
    }
}
void insert(int data)
{
    struct node *p;
    if(root==NULL)
    {
     root=new node;
     root->data=data;
     root->lchild=NULL;
     root->rchild=NULL;
    }
    else
    {
       pos(data);
    }
}
int main(){
    insert(3);
    insert(2);
    insert(1);
    insert(4);

}