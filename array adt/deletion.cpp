#include<stdio.h>
#include<stdlib.h>
struct array
{
    int A[10];
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
void delet(struct array *arr,int index)
{
    //checking for size
  if(index>=0&&index<arr->length)
  {
      int i;
      for(i=index;i<arr->length;i++)
      {
          arr->A[i]=arr->A[i+1];
      }
    arr->length--;
  }
  else
  {
      printf("invalid index.\n");
  }
}
int main()
{
    struct array arr;
    arr.length=5;
    arr.size=10;
    arr={{4,5,7,3,9},arr.size,arr.length};
    //assigned value in an array
    display(arr);
    delet(&arr,2);
    display(arr);
    return 0;
}
