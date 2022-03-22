#include<iostream>
using namespace std;
class lt
{
    private:
    int n;
    
    int te;
    public:
    int *A;
    lt(int n)
    {
        this->n=n;
        te=((n*n)+n)/2;
        //allocating array dinamically
        A=new int[te];
    }
    void set(int n,int x)
    {
      A[n]=x;
    }
    void display()
    {
        int i,j;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                //this condition for non zero element
                if(i>=j)
                {
                    int pi=(i*(i-1)/2)+j-1;
                    printf("%d\t",A[pi]);
                }
                else
                {
                    int pi=(j*(j-1)/2)+i-1;
                    printf("%d\t",A[pi]);
                }
            }
            printf("\n");
        }
    }
};
int main()
{
    int n=4;
    lt obj(n);
    int i,j,num;
    int te=((n*n)+n)/2;
    printf("te:%d\n",te);
   for(i=0;i<te;i++)
   {
           printf("enter element:");
           scanf("%d",&num); 
           obj.set(i,num);
   } 
   obj.display();
   return 0; 
}