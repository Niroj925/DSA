#include<stdio.h>
void fun(int n)
{
    if(n>0)
    {
        printf("%d\n",n);
        fun(n-1);
        fun(n-1);
    }
}
int main()
{
    fun(4);
    return 0;
}