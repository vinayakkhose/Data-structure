#include<stdio.h>
void main()
{
   int a[100],b[100],c[100],n1,n2,n3,j,k,l,i;
   printf("\n Enter first array elements=");
   scanf("%d",&n1);
   printf("\n Eenter array elements=");
   for(i=0;i<n1;i++)	
   {
   	scanf("%d",&a[i]);
   }
   printf("\n Enter second array elements=");
   scanf("%d",&n2);
   printf("\n Eenter array elements=");
   for(i=0;i<n2;i++)	
   {
   	scanf("%d",&b[i]);
   }
   j=k=l=0;
   while(j<n1 && k<n2)
   {
   	if(a[j]<b[k])
   	{
   	 c[l]=a[j];
		j++;
		l++;	
	}
	else
	{
		c[l]=b[k];
		l++;
		k++;
	}
   }
   while(j<n1)
   {
   	c[l++]=a[j++];
   }
   while(k<n2)
   {
   	c[l++]=b[k++];
   }
    n3=n1+n2;
   printf("\n mearge elements=");
   for(i=0;i<n3;i++)
   {
   	printf("%d\t",c[i]);
   }
}