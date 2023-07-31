#include<stdio.h>
#include<stdlib.h>
int main()
{
 int g[10][10],i,n,j,s,flag=0;
 printf("enter how many nodes in graph:");
 scanf("%d",&n);
 printf("enter graph matrix:");
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=n;j++)
  {
   scanf("%d",&g[i][j]);
   }
  }
   for(i=1;i<=n;i++)
  {
  for(j=1;j<=n;j++)
  {
   if(g[i][j]!=g[j][i])
   flag=1;
   }
  }
   if(flag==1)
   {
    printf("non symmetric");
    exit(0);
    }
  for(i=1;i<=n;i++)
  {
    s=0;
    for(j=1;j<=n;j++)
   {
    if(g[i][j]==1)
    s++;
    }
    printf("\n in degree of %d=%d",i,s);
  }
}