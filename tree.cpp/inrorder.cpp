#include<stack>
#include<iostream>
using namespace std;
struct node {
    int data;
    node *lchild;
    node *rchild;
}*root=NULL;
struct node *insert(int key)
{
    struct node *t=root;
    struct node *r,*p;
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
       else
       {
           //return 0;
       }
   }
   p=new node;
   p->data=key;
   p->lchild=p->rchild=NULL;
   key<r->data?r->lchild=p:r->rchild=p;
   return 0;
}
void preorder(node *root)
{
    stack<node*>st;
    node *t=root;
    while(t!= NULL|| !st.empty())
    {
        if(t!=NULL)
        {
            printf("%d,",t->data);
            st.push(t);
            t=t->lchild;
        }
        else
        {
            t=st.top();
            st.pop();
            t=t->rchild;
        }
    }
}
void inorder(node* root)
{
    // create an empty stack
    stack<node*> st;

    node* t = root;
    while (!st.empty() || t != NULL)
    {
        if (t != NULL)
        {
            st.push(t);
            t = t->lchild;
        }
        else {
            t = st.top();
            st.pop();
            printf("%d,",t->data);
            t = t->rchild;
        }
    }
}
int main()
{
    insert(4);
    insert(8);
    insert(1);
    insert(2);
    insert(6);
    inorder(root);
    printf("\n");
    preorder(root);
    printf("\n");
}