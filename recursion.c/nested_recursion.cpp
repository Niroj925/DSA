#include<stdio.h>
int fun(int n)
{
     printf("%d\n",n);
    if(n>10)
    {
        return n-5;
    }
    else
    return fun(fun(n+6));
   
}
int main()
{
    fun(5);
    return 0;
}