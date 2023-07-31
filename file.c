#include<stdio.h>
#include<stdlib.h>
void main()
{
	struct people
	{
	 int no,age;	
	}p1;
	int i,n;
	FILE *f1;
	f1=fopen("people.txt","r");
	if(f1==NULL)
{
printf("file not found.......!");
exit(0);
}
while(!(feof(f1)))
{
fscanf(f1,"%d%d",&p1[i].no,&p1[i].age);
i++;
}
	n=i;
	for(i=0;i<n;i++)
	{
		printf("%d%d",p1[i].no,p1[i].age)
	}
}