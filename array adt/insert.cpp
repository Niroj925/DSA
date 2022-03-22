#include<stdlib.h>
#include<stdio.h>
struct array
{
    int *A;
    int size;
    int length;
};
//pass by address
void insert(struct array *arr,int index,int num)
{
  int i;
  if(index>=0&&index<arr->length)
  {
  for(i=arr->length;i>index;i--)
  {
      arr->A[i]=arr->A[i-1];
  }
  arr->A[index]=num;
  arr->length++;
  }
  else
  {
      printf("invalid position.\n");
  }
}
void display(struct array arr)
{
    int i;
    for(i=0;i<arr.length;i++)
    {
        printf("%d,",arr.A[i]);
    }
}
int main()
{
    struct array arr;
    int n=5,i;
     arr.size=10;
    arr.A=(int *)malloc(arr.size*sizeof(int ));
    printf("enter element:");
    for(i=0;i<n;i++)
    { 
        scanf("%d",&arr.A[i]);
    }
    arr.length=n;
    //call by address
    insert(&arr,2,10);
    insert(&arr,4,15);
    display(arr);
    printf("length=%d\n",arr.length);
    return 0;
}