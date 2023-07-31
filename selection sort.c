#include<stdio.h>
#include<string.h>
int main()
{
  struct per
  {
  	int no,age;
  	char name;
  }s1[100],t;
  FILE *f1;
int i=0,pass,n,min,index;
f1=fopen("personal.txt","r");
if(f1==NULL)
{
printf("file not found.......!");
exit(0);
}
while(!feof(f1))
{
	fscanf(f1,"%d%s%d",&s1[i].no,&s1[100].name,&s1[100].age);
	i++;
}
n=i;
for(pass=1;pass<n;pass++)
{
	min=s1[pass-1].age;
	index=pass-1;
	for(i=pass;i<n;i++)
	{
		if(s1[i].age<min)
		{
			min=s1[i].age;
			index=i;
		}
	}
	t=s1[pass-1];
	s1[pass-1]=s1[index];
	s1[index]=t;
}
printf("sorted file=");
for(i=0;i<n;i++)
{
	printf("\n %d %s %d",s1[i].no,s1[i].name,s1[i].age);
}
}
