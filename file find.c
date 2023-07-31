#include<stdio.h>
#include<stdlib.h>
int main()
{
  FILE *f1;
  char ch;
  f1=fopen("hii.txt","r");
  if(f1==NULL)
{
  printf("file not found.......!");
  exit(0);
}
while(!feof(f1))
{
	ch=fgetc(f1);
	printf("%c",ch);
}
fclose(f1);
}
