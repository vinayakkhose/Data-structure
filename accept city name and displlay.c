#include<stdio.h>
#include<string.h>
void main()
{
  char a[20][20],s1[20];
 int i,n,pass;
printf("Enter limit=");
scanf("%d",&n);
printf("emter n names=");
for(i=0;i<n;i++)
{
scanf("%s",&a[i]);
}
for(pass=1;pass<n;pass++)
for(i=0;i<n-pass;i++)
{
	if(strcmp(a[i],a[i+1])>0)
	{
	strcpy(s1,a[i]);
	strcpy(a[i],a[i+1]);
	 strcpy(a[i+1],s1);
	}
}
printf("\n enter citys=\n");
for(i=0;i<n;i++)
{
printf("%s\t",a[i]);
}
}
