#include "queue.h"
#include <iostream>
using namespace std;
void bfs(int a[7][7],int start,int n)
{
    int i=start,j;
    int visited[7]={0};
    printf("%d,",i);
    visited[i]=1;
    enqueue(i);
    while(!isempty())
    {
      i=dequeue();
      for(j=1;j<n;j++)
      {
        if(a[i][j]==1 &&visited[j]==0)
        {
          printf("%d,",j);
          visited[j]=1;
          enqueue(j);
        }
      }
    }
}
void dfs(int a[][7],int start,int n)
{
  static int visited[7]={0};
  int j;
  if(visited[start]==0){
    printf("%d,",start);
    visited[start]=1;
    for(j=1;j<=n;j++){
      if(a[start][j]==1&&visited[j]==0){
        dfs(a,j,n);
      }
    }
  }
}
int main()
{
  int a[7][7]={
  {0,0,0,0,0,0,0},
  {0,0,1,1,0,0,0},
  {0,1,0,1,1,0,0},
  {0,1,1,0,1,0,0},
  {0,0,1,1,0,1,1}, 
  {0,0,0,0,1,0,0},
  {0,0,0,0,1,0,0},
  };
  dfs(a,3,7);
  return 0;
};