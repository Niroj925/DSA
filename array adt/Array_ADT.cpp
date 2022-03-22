#include<stdio.h>
#include<stdlib.h>
struct array
{
    int *A;
    int size;
    int length;
};
void display(struct array arr)
{
int i;
printf("element are:\n");
for(i=0;i<arr.length;i++)
{
printf("%d,",arr.A[i]);
}
}
int main()
{
    struct array arr;
    int n,i;
    //size of array
    printf("enter the size of array:");
    scanf("%d",&arr.size);
    //creat an array dinamically
    arr.A=(int *)malloc((arr.size)*sizeof(int ));
    arr.length=0;
    printf("enter total number of element:");
    scanf("%d",&n);
    //assigned value in an array
    printf("enter element:\n");
    for(i=0;i<n;i++)
    {
     scanf("%d",&arr.A[i]);
     arr.length=n;
    }
    display(arr);
    return 0;
}
