#include<stdio.h>
#include<string.h>
void main()
{
  FILE *f1;
char cname[20],s1[20];
int code,f=1;
f1=fopen("cities.txt","r");
if(f1==NULL)
{
printf("file not found.......!");
exit(0);
}
}
