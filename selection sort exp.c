#include<stdio.h>
void main()
{
   int a[100],i,n,pass,min,index,t;
   printf("Enter number=");
   scanf("%d",&n);
   printf("Enter %d numbers=",n);
   for(i=0;i<n;i++)
   {
   	scanf("%d",&a[i]);
   }
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
   for(i=0;i<n;i++)
   printf("%d\t",a[i]);
}
