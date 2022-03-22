#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[]="hello this is me thapa";
    int i=0;
    while(str[i]!='\0')
    {
      i++;
    }
    printf("reverse of string:\n");
    for(int j=i;j>=0;j--)
    {
     printf("%c",str[j]);
    }
    return 0;
}