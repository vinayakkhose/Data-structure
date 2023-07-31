#include<stdio.h>
#include<string.h>
int main()
{
	struct people
	{
		int no,age;
	}p1[100],t;
  FILE *f1;
int n,pass,i;
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
for(pass=1;pass<n;pass++)
{
  t=p1[pass];

  	for(i=pass-1;i>=0 && p1[i].age>t.age;i--)
  	{
  	p1[i+1]=p1[i];
	  }
	    p1[i+1]=t;
}
   printf("\n records=\n");
   for(i=0;i<n;i++)
   {
   	printf("\n persons no=%d\tage=%d\t",p1[i].no,p1[i].age);
   }
}
