#include<stdio.h>
void mearge(int a[],int low,int mid,int high)
{
	int i,j,temp,k,b[100];
	i=low;
	j=mid+1;
	k=0;
	while(i<=mid && j<=high)
	{
		if(a[i]<a[j])
		b[k++]=a[i++];
		else
		b[k++]=a[j++];
	}
	while(i<=mid)
		b[k++]=a[i++];
	while(j<=high)
	 	b[k++]=a[j++];
	for(k=0,i=low;i<=high;i++,k++)
	 a[i]=b[k];
}
void meargesort(int a[],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		meargesort(a,low,mid);
		meargesort(a,mid+1,high);
		mearge(a,low,mid,high);
	}
}
void main()
{
	int a[100],i,n;
	printf("enter limit=");
	scanf("%d",&n);
	printf("Enter array elements=");
	for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    meargesort(a,0,n-1);
    printf("\n sorted array=");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}