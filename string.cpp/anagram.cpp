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
void anagram(char str1[],char str2[])
{
    int i,j=length(str1);
    if(length(str2)==length(str1))
    {
    int h[26]={};
    for(int i=0;i<length(str1);i++)
    {
      int n=str1[i];
      n=n-97;
      h[n]++;
    }
    for(i=0;i<length(str2);i++)
    {
        int nn=str2[i];
        nn=nn-97;
        if(h[nn]==1)
        {
          j++;
        }
        else
        {
            j--;
        }
    }
    printf("%d\n",j);
    if(j==2*length(str1))
    {
        printf("entered string are anagram.\n");
    }
    else 
    {
        printf("entered string are not anagram.\n");
    }
    }
    else
    {
        printf("anagram check not possible.\n");
    }
}
int main()
{
    char str1[]="decimal";
    char str2[]="medical";
  anagram(str1,str2);
  return 0;
}