#include<stdio.h>
#include<stdlib.h>
struct array
{
    int A[10];
    int size;
    int length;
};
int  maximum(struct array *arr)
{
int i,max;
max=arr->A[0];
for(i=1;i<arr->length;i++)
{
  if(arr->A[i]>max)
  {
     max=arr->A[i]; 
  }
}
return max;
}
int average(struct array *arr)
{
    int total=0;
    for(int i=0;i<arr->length;i++)
    {
        total+=arr->A[i];
    }
    return total/(arr->length-1);
}
int main()
{
    struct array arr;
    arr.length=5;
    arr.size=10;
    arr={{4,5,7,3,9},arr.size,arr.length};
    int max=maximum(&arr);
   printf("max:%d\n",max);
   printf("average:%d\n",average(&arr));
    return 0;
}
