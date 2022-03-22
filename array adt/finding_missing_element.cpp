#include<iostream>
using namespace std;
int main()
{
    int a[]={2,4,9,3,6,11};
    int h[11]={};
    int i,low=2,high=11;
    for(i=0;i<6;i++)
    {
        h[a[i]]++;
    }
    printf("missing element are:\n");
    for(i=low;i<=high;i++)
    {
        if(h[i]==0)
        {
            printf("%d,",i);
        }
    }
    return 0;
}