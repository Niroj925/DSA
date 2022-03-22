//this is honor method 
#include<stdio.h>
int taylor(int x,int n)
{
    int i;
    int s=1;
    for(i=n;i>0;i--)
    {
      s=1+(x/i)*s;
    }
    return s;
}
int main()
{
    printf("%d\n",taylor(3,4));
    return 0;
}