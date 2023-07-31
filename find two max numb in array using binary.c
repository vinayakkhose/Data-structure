#include<stdio.h>
#include<math.h>
void main()
{
  int a[100],i,n,low,high,mid,x,f=0;
 printf("Enter limit=");
 scanf("%d",&n);
printf("\n enter n numbers=");
for(i=0;i<n;i++)
{
   scanf("%d",&a[i]);
}

int m1=0;
int m2=0;
low=0;
high=n-1;
while(low<=high)
{
	mid=(low+high)/2;
	for(i=0;i<n;i++)
{
    if(a[i]>m1)
    {
        m2=m1;
        m1=a[i];
    }
    else if(m2<a[i])
    m2=a[i];
}
	if(a[mid]<m2)
	{
		low=mid+1;
	}
	if(a[mid]>m2)
	{
	  high=mid-1;	
	}
}
 
  printf("\n sum=%d",(m1+m2));
}
