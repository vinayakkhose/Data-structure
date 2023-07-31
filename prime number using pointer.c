#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,*p,n;
	printf("Enter limit=");
	scanf("%d",&n);
	p=(int *)malloc(sizeof(int));
	printf("Enter %d numbers=",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	printf("\n revers order=\n ");
	for(i=n-1;i>=0;i--)
	{
	    printf("%d\t",*(p+i));
	}
}