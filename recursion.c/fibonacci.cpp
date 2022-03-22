#include<stdio.h>
int f[10];
int mfib(int n)
{
    if(n<=1)
    {
        return f[n]=n;
    }
    else
    {
        if(f[n-2]==-1)
        {
            f[n-2]=mfib(n-2);
        }
        if(f[n-1]==-1)
        {
            f[n-1]=mfib(n-1);
        }
        return f[n-2]+f[n-1];
    }
}
int main()
{
    int i;
    for(i=0;i<10;i++)
    {
        f[i]=-1;
    }
    printf("%d\n",mfib(10));
    return 0;
}