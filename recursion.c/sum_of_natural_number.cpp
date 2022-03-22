#include<stdio.h>
int sum(int n)
{
    if(n>0)
    {
        return n+sum(n-1);
    } 
    return 0;
}
 int main()
 {
     int result=sum(10);
     printf("sum of natural number upto 10:%d\n",result);
     return 0;
 }  