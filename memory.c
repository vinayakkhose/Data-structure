#include<stdio.h>
#include<stdlib.h>
void main()
{
int *p1,*p2,c;
p1=(int*)malloc(sizeof(int));
p2=(int*)malloc(sizeof(int));
printf("enter two no");
scanf("%d%d",p1,p2);
  c=*p1+*p2;
  printf("add=%d",c);
  free(p1);
  free(p2);
}