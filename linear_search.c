#include<stdio.h>
void main()
{
	int a[100],i,n,key,f=0;
   printf("Enter limit of array=");
   scanf("%d",&n);
   printf("\n enter %d elements in array=",n);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   
   printf("enter number to search in array=");
   scanf("%d",&key);
   
    for(i=0;i<n;i++)
   printf("%d\t",a[i]);
   for(i=0;i<n;i++)
   if(a[i]==key)
   {
   f=1;
    break;
  }
  if(f==1)
  printf("\n number found in array position=%d",i);
  else
  printf("number not found");
}
