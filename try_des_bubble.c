#include<stdio.h>
void main()
{
	int a[100],i,n,num,pass;
	printf("Enter limit of array=");
	scanf("%d",&n);
	printf("\n Enter %d elements in array=",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    for(pass=1;pass<n;pass++)
    {
    	for(i=0;i<n-pass;i++)
    	{
    		if(a[i]<a[i+1])
			{
			num=a[i];
    		a[i]=a[i+1];
    		a[i+1]=num;
    	   }
		}
		
	}
		printf("\n sorted array in disending order=");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
}