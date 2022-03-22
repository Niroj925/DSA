#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct element
{
    int i;
    int j;
    int x;
};
struct sparse
{
    //m and n are dimension
    int m;
    int n;
    int num;//for no. of nonzero element
    struct element *e;//to create array dinamically
};
void create(struct sparse *s)
{
  printf("enter dimension:");
  scanf("%d%d",&s->m,&s->n);
  printf("enter no. of non-zero elements:");
  scanf("%d",&s->num);
  //creating array to store element
   s->e= new element[s->num];
    //s->e=(struct element*)malloc(s->num*(sizeof(struct element)));
    printf("enter all element:\n");
    for(int i=0;i<s->num;i++)
    {
        scanf("%d%d%d",&s->e[i].i,&s->e[i].j,&s->e[i].x);
    }
}
void display(struct sparse s)
{
    int i,j,k;
    for(i=0;i<s.m;i++)
    {
        for(j=0;j<s.n;j++)
        {
            if(i=s.e[k].i&&j==s.e[k].j)
            {
                printf("%d\t",s.e[k++].x);
            }
            else
            {
                printf("0\t");
            }
        }
        printf("\n");
    }
}
int main()
{
    struct sparse s;
    create(&s);
    display(s);
    return 0;
}  