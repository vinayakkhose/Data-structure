#include<stdio.h>
#include<string.h>
 void main()
{
 char a[20][20],t[20];
int i,n,mid,top, bottom,f=0,pass;
printf(" enter limit");
scanf("%d",&n);
printf("enter city names");
for(i=0;i<n;i++)
{
scanf("%s",&a[i]);
}
for(pass=1;pass<n;pass++)
{
for(i=0;i<n;i++)
{
if(strcmp(a[i],a[i+1])>0)
{
strcpy(t,a[i]);
strcpy(a[i],a[i+1]);
strcpy(a[i+1],t);
}
}
}
printf("\n sorted array=");
for(i=0;i<n;i++)
{
	printf("%s\t",a[i]);
}
printf("\n enter city to search=\n");
scanf("%s",t[i]);
top=0;
bottom=n-1;
while(top<=bottom)
{
	mid=(top+bottom)/2;
	if(strcpm(a[mid],t[i])==0)
	{
	f=1;
	break;
    }
   
}
if(f==1)
printf("\n city found position=%d",mid);
else
printf("\n city not foud");
}
