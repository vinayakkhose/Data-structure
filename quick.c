#include<stdio.h>
void quick(int a[], int lb, int ub)
{
	int p;
	if(lb<ub)
	{
		p=partition(a,lb,ub);
		quick(a,lb,p-1);
		quick(a,p+1,ub);
	}
}
int partition(int a[],int lb,int ub)
{
	int i,j,pivot,temp;
	i=lb+1;
	j=ub;
	pivot=a[lb];
	do
	{
		while(pivot>a[i])
		i++;
		while(pivot<a[j])
		j--;
		if(i<j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}while(i<j);
	a[lb]=a[j];
	a[j]=pivot;
	return j;
}

void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
}

void main()
{
	int i,a[100],n;
	printf("enter limit=");
	scanf("%d",&n);
	printf("Enter n numbers in array=");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	quick(a,0,n-1);
	display(a,n);
}