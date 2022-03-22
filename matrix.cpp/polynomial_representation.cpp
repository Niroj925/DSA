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
void display(struct poly p, int x)
{
    int i,t=0;

    for(i=0;i<p.n;i++)
    {   
        t=t+p.t[i].coff*pow(x,p.t[i].expo);
        printf("%dx^%d+",p.t[i].coff,p.t[i].expo);
    }
    printf("\npolynomial result if x=%d is :%d\n",x,t);
}
int main()
{
    int i,j,x=3;
    struct poly p;
    printf("enter the no. of terms=");
    scanf("%d",&p.n);
    p.t=new term[p.n];
    for(i=0;i<p.n;i++)
    {
        printf("enter coff and exponent for term %d:",i+1);
        scanf("%d%d",&p.t[i].coff,&p.t[i].expo);
    }
    display(p,3);
    return 0;
}