#include<stdio.h>
void merge(int a[],int lb,int mid,int ub)
{
	int i,j,k=0,b[100];
	i=lb;
	j=mid+1;
	while(i <=mid && j<=ub)
	{
		if(a[i]<a[j])
		b[k++]=a[i++];
		else
		b[k++]=a[j++];
	}
	while(i<=mid)
	b[k++]=a[i++];
	while(j<=ub)
	b[k++]=a[j++];
	for(i=lb,k=0;i<=ub;i++,k++)
	a[i]=b[k];
}
void mergesort(int a[],int lb,int ub)
{
	int mid,b;
	if(lb<ub)
	{
		mid=(lb+ub)/2;
		mergesort(a,lb,mid);
		mergesort(a,mid+1,ub);
		merge(a,lb,mid,ub);
		
	}
}
void main()
{
	int a[100],i,n,b[100];
	printf("Enter limit of array=");
	scanf("%d",&n);
	printf("\n Enter %d elements in array=",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    mergesort(a,0,n-1);
    printf("\n sorted array=");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}