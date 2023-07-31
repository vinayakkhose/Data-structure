#include<stdio.h>
void buble_sort(int a[],int n)
{
	int i,pass,temp;
	for(pass=1;pass<n;pass++)
	{
		for(i=0;i<n-pass;i++)
		{
			if(a[i]>a[i+1])
			{
			  temp=a[i];
			  a[i]=a[i+1];
			  a[i+1]=temp;	
			}
		}
	}
}
void main()
{
	int a[]={56,23,11,67,12,89,2};
	int i;
	int n=sizeof(a)/sizeof(int);
	buble_sort(a,n);
		printf("sorte array using buble sort=");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}