#include<iostream>
#include<stdio.h>
using namespace std;
int fun(int n)
{
    if(n>0)
    {
        fun(n-1);
        printf("%d\n",n);//fun is in top so it is head
    }
    return 0;
}
int main()
{
fun(5);
return 0;
}