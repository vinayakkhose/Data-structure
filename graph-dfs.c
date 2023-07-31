#include<stdio.h>
void DFS(int i);
int g[100][100],visited[100],n;
void main()
{
	int i,j;
  printf("enter graph limit:");
  scanf("%d",&n);
  printf("enter matrix");
  for(i=0;i<n;i++)
  {
   for(j=0;j<n;j++)
    {
    scanf("%d",&g[i][j]);
    }
  }
  for(i=0;i<n;i++)
  {
   visited[i]=0; 
  }
  DFS(0);
}
void DFS(int i)
{
	int j;
  printf("\n%d",i);
  visited[i]=1;
  for(j=0;j<n;j++)
  {
   if(!visited[j]&&g[i][j]==1)
   DFS(j);
   }
}