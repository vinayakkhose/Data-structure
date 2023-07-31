#include<stdio.h>
void selectionsort(int a[],int n)
{
	int i,pass,min,j,min1;
	for(pass=0;pass<n;pass++)
	{
		min=a[pass];
		for(i=pass+1;i<n;i++)
		{   
			if(a[i]<min)
			{
			    min1=min;
				min=a[i];	
				a[i]=min1;
				a[pass]=min;
			}
		}
		
	
	}
}
void print(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
}
void main()
{
	int a[100],i,n;
	printf("Enter limit=");
	scanf("%d",&n);
	printf("enter n elements in array=");
	for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    selectionsort(a,n);
    print(a,n);  
}