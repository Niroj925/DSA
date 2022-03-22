#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
struct term
{
    int expo;
    int coff;
};
struct poly
{
    int n;
    struct term *t;
};
void set(struct poly *p)
{
    int i;
      printf("enter the no. of terms of first polynomial=");
    scanf("%d",&p->n);
    p->t=new term[p->n];
    for(i=0;i<p->n;i++)
    {
        printf("enter coff and exponent for term %d:",i+1);
        scanf("%d%d",&p->t[i].coff,&p->t[i].expo);
    }
}
void add(struct poly *p1,struct poly *p2,struct poly *p3)
{
  //struct poly p3;
  int n=p1->n+p2->n;
  p3->t=new term[n];  
  int i=0,j=0,k=0; 
  int count=0;
  for(k=0;k<n;k++)
  {
      if(p1->t[i].expo>p2->t[j].expo)
      {
          p3->t[k].coff=p1->t[i].coff;
          p3->t[k].expo=p1->t[i].expo;
          i++;
          count++;
      }
      else if(p1->t[i].expo==p2->t[j].expo)
      {
          p3->t[k].coff=p1->t[i].coff+p2->t[j].coff;
          p3->t[k].expo=p1->t[i].expo;
          i++;
          j++;
          count++;
      }
      else
      {
       p3->t[k].coff=p2->t[j].coff;
       p3->t[k].expo=p2->t[j].expo;
       j++;
       count++;
      }
         if(p3->t[k].expo==0)
          {
              break;
          }
  }
  p3->n=count;
}
void display(struct poly p)
{
    int i,t=0;
    printf("\npolynomial:");
    for(i=0;i<p.n;i++)
    {   
        printf("%dx^%d+",p.t[i].coff,p.t[i].expo);
    }
    //printf("\npolynomial result if x=%d is :%d\n",x,t);
}
int main()
{
    int i,j,x=3;
    struct poly p1,p2,p3;
    set(&p1);
    set(&p2);
    display(p1);
    display(p2);
    add(&p1,&p2,&p3);
    printf("\n%d,%d\n",p3.t[2].coff,p3.t[2].expo);
    printf("%d\n",p3.n);
    display(p3);
    return 0;
}