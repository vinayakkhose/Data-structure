#include<stdio.h>
void main()
{
 struct stud
{
 int rno;
char sname[20];
float per;
}s1[100],t;
int n,i,pass;
printf("n student info=");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n enter roll no  student_name  percentage");
scanf("%d%s%f",&s1[i].rno,&s1[i].sname,&s1[i].per);
}
printf("\n display n student info=\n");
for(pass=1;pass<n;pass++)
{
for(i=0;i<n-pass;i++)
{
if(s1[i].per<s1[i+1].per)
{
   t=s1[i];
   s1[i]=s1[i+1];
  s1[i+1]=t;
}
}
}
printf("\n display student info desnding order in per=\n");
for(i=0;i<n;i++)
{
	printf("\n rno=%d",s1[i].rno);
	printf("\n name=%s",s1[i].sname);
	printf("\n per=%f",s1[i].per);
	
}
}
