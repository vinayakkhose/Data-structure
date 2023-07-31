#include<stdio.h>
#include<string.h>
int main()
{
	
  FILE *f1;
char cname[20],s1[20];
int code,f=0;
f1=fopen("cities.txt","r");
if(f1==NULL)
{
printf("file not found.......!");
exit(0);
}
printf("\n Enter city to search=");
scanf("%s",&s1);
while(! feof(f1))
{
fscanf(f1,"%s %d",&cname,&code);
if(strcmp(cname,s1)==0)
{
f=1;
break;
}
}
if(f==1)
printf("\n city found code=%d",code);
else
printf("\n city not found");
}
