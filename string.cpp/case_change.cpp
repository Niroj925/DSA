#include<stdio.h>
char case_c(char str[])
{
      int l=0;
    while(str[l]!='\0')
    {
      l++;
    }
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
    char str[]="Niroj tHapa";
    printf("\n");
    printf("%c",case_c(str));
    return 0;
}