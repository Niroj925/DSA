//using cpp which is best way rather than the c and reduced complexity
#include<iostream>
using namespace std;
class diagonal
{
    private:
    int n;
    int *A;
    public:
    diagonal(int n)
    {
        this->n=n;
        A=new int [n];
    }
    int set(int i,int j,int x)
    {
        if(i==j)
        {
            A[i-1]=x;
            return A[i-1];
        }
        else
        return 0;
    }
    void display()
    {
        int i,j;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==j)
                {
                    printf("%d\t",A[i]);
                }
                else
                {
                    printf("0\t");
                }
            }
            printf("\n");
        }
    }
};
int main()
{
    int n=4,num;
  diagonal obj(n);
   for(int i=1;i<=n;i++)
   {
       printf("enter elelment of (%d,%d):",i,i);
       scanf("%d",&num);
       obj.set(i,i,num);
   }
  obj.display();
  return 0;
}