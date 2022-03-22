#include<stdio.h>
/*
int fun(int n)
{
    if(n>0)
    {
        
        fun(n-1);
        printf("%d\n",n);
        //fun is in top so it is head
    }
    return 0;
}
*/
void fun(int n)
{
    int i=1;
    while(i<=n)
    {
        printf("%d\n",i);
        i++;
    }
}
int main()
{
    fun(5);
    return 0;
}