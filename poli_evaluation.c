#include<stdio.h>
#include<math.h>
void main()
{
	int a[100],i,n,s=0;
	printf("Enter polinomial limit=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
  printf("\n enter coefficiet of x^%d=",i);
	scanf("%d",&a[i]);
   }
   printf("\n expresion=");
    printf("%d^0 ",a[0]);
    for(i=1;i<n;i++)
    printf("+ %d^%d",a[i],i);
    for(i=0;i<n;i++)
    {
    	s=s+pow(a[i],i);
	}
	
printf("\n sum of polinomial=%d",s);
}