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
void append(struct array *arr,int num)
{
    //checking for size
  if(arr->length<arr->size)
  {
      arr->A[arr->length++]=num;
  }
  else
  {
      printf("insuficient space.\n");
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
    append(&arr,10);
    append(&arr,13);
    display(arr);
    return 0;
}
