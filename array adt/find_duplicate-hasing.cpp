#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,1,2,4,4,6,7,8,8,8,9,10,11};
    int i;
    int h[13]={};
    for(i=0;i<13;i++)
    {
      h[arr[i]]++;
    }
    printf("%d,%d,%d,%d\n",h[1],h[4],h[8],h[11]);
    for(i=1;i<=11;i++)
    {
        if(h[i]>1)
        {
            printf("duplicated:%d,\n",i);
        }
    }
    return 0;
}