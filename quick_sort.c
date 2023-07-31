#include<stdio.h>
int partition( int a[],int lb,int ub)
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
void quicksort(int a[],int lb,int ub)
{
	int p;
	if(lb<ub)
	{
		p=partition(a,lb,ub);
		quicksort(a,lb,p-1);
		quicksort(a,p+1,ub);
	}
}
void main()
{
	int a[100],i,n;
	printf("Enter limit of array=");
	scanf("%d",&n);
	printf("\n Enter %d elements in array=",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    quicksort(a,0,n-1);
    	printf("\n sorted array=");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
}