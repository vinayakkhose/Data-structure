#include<stdio.h>
void main()
{
 struct stud
{
 int rno;
char sname[20];
float per;
}s1[100],t;
int n,i;
printf("n student info=");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n enter roll no  student_name  percentage");
scanf("%d%s%f",&s1[i].rno,&s1[i].sname,&s1[i].per);
}
printf("\n display n student info=\n");
for(i=0;i<n;i++)
{
printf("\t roll_no=%d",s1[i].rno);
printf("\t name=%s",s1[i].sname);
printf("\t per=%f\n",s1[i].per);
}
}
