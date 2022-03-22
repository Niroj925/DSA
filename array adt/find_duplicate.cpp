#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,4,4,6,7,8,8,8,9,10};
    int i, ld=0;
    for(i=0;i<11;i++)
    {
        if(arr[i]==arr[i+1])
        {
            if(ld!=arr[i])
            {
                printf("duplicated element is %d\n",arr[i]);
            }
            ld=arr[i];
        }
    }
    return 0;
}