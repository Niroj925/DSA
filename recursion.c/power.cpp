#include<stdio.h>
int power(int n,int p)
{
    if(p==0)
    {
        return 1;
    }
    else
    {
      return n*power(n,p-1); 
    }
   return 0;
}
int main()
{
    int result=power(3,4);
    printf(" 3 to the power 4=%d\n",result);
    return 0;
}