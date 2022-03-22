#include<stdio.h>
#include<stdlib.h>
 struct array
{
    int A[10];
    int size;
    int length;
};
int search(struct array *arr,int se)
{
    int l,r,mid,i=0;
    l=0;
    r=arr->length-1;
   // mid=(l+r)/2;

    do{
     mid=(l+r)/2;
     if(arr->A[mid]>se)
     {
         l=mid+1;
     }
     else
     {
         r=mid-1;
     }
    }while(arr->A[mid]!=se&&r>l);
    return mid;
}
int main()
{
    struct array arr;
    arr.size=10;
    arr.length=6;
  arr={{4,5,9,3,6,7},arr.size,arr.length};
  int se=8;
 int res=search(&arr,se);
if(arr.A[res]==se)
{
     printf("entered element is found with index %d\n",res);
    
}
else
{
   printf("entered element does not found.\n");
}
 return 0;
}