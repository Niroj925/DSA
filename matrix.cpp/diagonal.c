#include<stdio.h>
struct matrix
{
    int a[10];
    int n;
};
void set(struct matrix *obj,int i,int j,int x)
{
    if(i==j)
    {
        obj->a[i-1]=x;
    }
}
int get(struct matrix obj,int i, int j)
{
    if(i==j)
    {
  return obj.a[i-1];
    }
    else
    return 0;
}
void display(struct matrix obj)
{
    int i,j;
    for(i=0;i<obj.n;i++)
    {
        for(j=0;j<obj.n;j++)
        {
            if(i==j)
            {
                printf("%d\t",obj.a[i]);
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
    struct matrix m;
    m.n=4;
    set(&m,1,1,3);
    set(&m,2,2,7);
    set(&m,3,3,9);
    set(&m,4,4,6);
    printf("%d\n",get(m,2,2));
    printf("%d\n",m.a[3]);
    display(m);
    return 0;
}