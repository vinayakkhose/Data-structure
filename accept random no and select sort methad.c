#include<stdio.h>
#include<math.h>
int main()
{
int a[100],i,n,pass,index,t,min;
printf("enter limit");
scanf("%d",&n);
for(i=0;i<n;i++)
a[i]=rand()%100;
printf("\n random array=\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
for(pass=1;pass<n;pass++)
{
     min=a[pass-1];
     index=pass-1;
     for(i=pass;i<n;i++)
     {
     if(a[i]<min)
      {
       min=a[i];
       index=i;
      }
     }
     t=a[pass-1];
     a[pass-1]=a[index];
     a[index]=t;
   }
   printf("\n sorted array=\n");
   for(i=0;i<n;i++)
   printf("%d\t",a[i]);
}
