#include<iostream>
#include<stdio.h>
using namespace std;
//int x=0;
int func(int n)
{
    //global and static variable has single copy but others does not have
    static int x=0;
    //int x=0;
    if(n>0)
    {
        x++;
        return func(n-1)+x;
    }
    return 0;
}
int main()
{
    //first increment 5 times in function so x=5
    printf("%d\n",func(5));
    //x=5 already and increment 5 times so x=10
     printf("%d\n",func(5));
    return 0;
}