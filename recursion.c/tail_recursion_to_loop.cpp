#include<stdio.h>
/*
int fun(int n)
{
    if(n>0)
    {
        printf("%d\n",n);
        fun(n-1);
        //fun is in last so it is tail
    }
    return 0;
}
*/
void fun(int n)
{
    while(n>0)
    {
        printf("%d\n",n);
        n--;
    }
}
int main()
{
    fun(5);
    return 0;
}