#include<stdio.h>
void main()
{
	int a[100],i,n,pass,num;
	printf("enter limit=");
	scanf("%d",&n);
	printf("Enter n elemts in array=");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	for(pass=1;pass<n;pass++)
	{
		num=a[pass];
		for(i=pass-1;i>=0 && a[i]>num;i--)
		{
			a[i+1]=a[i];
		}
		a[i+1]=num;
	}
	
	printf("\n sorted array=\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);	
}