#include<stdio.h>
int length(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
      i++;
    }
    return i;
}
void check(char str1[],char str2[])
{
    int i,j;
    for(i=0;i<length(str1);i++)
    {
        if(str1[i]!=str2[i])
        {
            j=0;
            break;
        }
        else
        {
            j=1;
        }
    }
    if(j==1)
    {
        printf("string are same.\n");
    }
    else
    {
      printf("enter string are not same.\n");
    }
}
int cc(char str[])
{
      int l=length(str);
    for(int i=0;i<l;i++)
    {
        int n=str[i];
        if(n>=97&&n<=122)
        {
        printf("%c",n-32);
         str[i]=n-32;
        }
        else
        {
            printf("%c",n);
            str[i]=n;
        }
       // return str[i];
    }
    return str[l];
}
int main()
{
    char str1[]="niroj";
    char str2[]="niroj";
    check(str1,str2);
  return 0;
}