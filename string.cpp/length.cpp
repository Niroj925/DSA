#include<stdio.h>
int main()
{
    char str[]="hello this is me thapa";
    int i=0;
    while(str[i]!='\0')
    {
      i++;
    }
    printf("legth of string = %d\n",i);
    return 0;
}