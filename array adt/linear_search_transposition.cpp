#include<stdio.h>
struct  array
{
    int A[10];
    int size;
    int length;
};
int l_search(struct array *arr,int element)
{
    int i;
    for(i=0;i<arr->length;i++)
    {
        if(element==arr->A[i])
        {
            //moving one step forward if element found
            //it makes faster to search
            int temp;
            if(i>0)
            {
            temp=arr->A[i];
            arr->A[i]=arr->A[i-1];
            arr->A[i-1]=temp; 
            }
            return i;
            break;
        }
    }
}
int main()
{
    struct array arr;
    arr.size=10;
    arr.length=5;
    arr={{4,1,6,9,7},arr.size,arr.length};
  int res;
  res= l_search(&arr,9);
//res= l_search(&arr,6);
res=l_search(&arr,9);
res=l_search(&arr,9);
  printf("%d\n",res);
     if(res>arr.length-1)
    {
        
        printf("entered element not found.\n");
    }
    else
    {
     printf("element found  with index:%d\n",res);
    }
return 0;
}
