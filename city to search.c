#include<stdio.h>
#include<string.h>
 void main()
{
 char a[20][20],s1[10];
int i,n,mid,top=0, bottom,f=0;
printf(" enter limit");
scanf("%d",&n);
printf("enter city names");
for(i=0;i<n;i++)
{
scanf("%s",&a[i]);
}
printf("enter city name to search");
scanf("%s",&s1);
bottom=n-1;
while(top<=bottom)
{
  mid=(top+bottom)/2;
if(strcmp(a[mid],s1)==0)
   {
      f=1;
      break;
    }
 if(strcmp(a[mid],s1)<0)
   top=mid+1;
if(strcmp(a[mid],s1)>0)
   bottom=mid-1;

}
if(f==1)
printf("city found at position %d",mid);
else
printf("city not found");
}
