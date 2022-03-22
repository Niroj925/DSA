#include<iostream>
using namespace std;
struct node {
    int data;
    node *lchild;
    node *rchild;
    int height;
}*root=NULL;
int nodeheight(struct node *p)
{
  int hl,hr;
  hl=p&&p->lchild?p->lchild->height:0;
  hr=p&&p->rchild?p->rchild->height:0;
  return hl>hr?hl+1:hr+1;
}
int balancefactor(struct node *p){
    int hl,hr;
  hl=p&&p->lchild?p->lchild->height:0;
  hr=p&&p->rchild?p->rchild->height:0;
  return hl-hr;
}
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
struct node *lrrotate(struct node *p){
    struct node *pl=p->lchild;
    struct node *plr=pl->rchild;
    pl->rchild=plr->lchild;
    p->lchild=plr->rchild;

    plr->rchild=p;
    plr->lchild=pl;

    p->height=nodeheight(p);
    pl->height=nodeheight(pl);
    plr->height=nodeheight(plr);
    if(root==p)
    {
        root=plr;
    }
    return plr;
}
struct node *rrrotate(struct node *p){
    struct node * pr=p->rchild;
    struct node *prr=pr->rchild;

    pr->lchild=p;
    pr->rchild=prr;
    pr->height=nodeheight(pr);
    p->height=nodeheight(p);
    if(root==p)
    {
        root=pr;
    }
    return pr;
}
struct node *rlrotate(struct node *p){
    struct node * pr=p->rchild;
    struct node *prl=pr->lchild;

    prl->lchild=p;
    prl->rchild=pr;
    p->height=nodeheight(p);
    pr->height=nodeheight(pr);
    prl->height=nodeheight(prl);
    if(root==p){
        root=prl;
    }
    return prl;

}
struct node *rinsert(node *p,int key)
{
    struct node *t=NULL;
    if(p==NULL)
    {
      t=new node;
      t->data=key;
      t->height=1;
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
    p->height=nodeheight(p);
    //this is for ll rotation
    if(balancefactor(p)==2&&balancefactor(p->lchild)==1)
    {
      return llrotate(p);
    }
    else  if(balancefactor(p)==2&&balancefactor(p->lchild)==-1)//lr
    {
        return lrrotate(p);
    }
    else  if(balancefactor(p)==-2&&balancefactor(p->rchild)==-1)//this is for rr
    {
         return rrrotate(p);
    }
    else  if(balancefactor(p)==-2&&balancefactor(p->rchild)==1)//this is for rl
    {
        return rlrotate(p);
    }
    return p;
}
int main(){
    root=rinsert(root,9);
    rinsert(root,17);
    rinsert(root,13);
    rinsert(root,19);
   //rinsert(root) rinsert(root,18);
    rinsert(root,21);
    printf("%d",root->data);
    printf("\n");
    printf("%d,\n",root->rchild->data);
     printf("%d,\n",root->lchild->data);
      printf("%d,\n",root->rchild->rchild->data);
    return 0;
}