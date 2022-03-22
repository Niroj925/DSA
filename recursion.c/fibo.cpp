#include<stdio.h>
int fibo(int n)
{
    if(n<=1)
    {
        return n;
    }
    else
    {
        return fibo(n-2)+fibo(n-1);    
    }
}
int main()
{
    printf("%d\n",fibo(10));
    return 0;
}