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
printf("\nelement are:\n");
for(i=0;i<arr.length;i++)
{
printf("%d,",arr.A[i]);
}
}
void reverse(struct array *arr)
{
  int i;
  int l=arr->length-1;
  for(i=0;i<(arr->length-1)/2;i++)
  {
      int temp;
      temp=arr->A[i];
      arr->A[i]=arr->A[l];
      arr->A[l]=temp;
      l--;
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
    reverse(&arr);
    display(arr);
    return 0;
}
