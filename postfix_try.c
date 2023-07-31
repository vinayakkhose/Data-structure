#include<stdio.h>
#define max 100
struct stack
{
	int a[max];
	int top;
}s1;
 void init()
 {
 	s1.top=-1;
 	
 }
int isfull()
 {
 	if(s1.top==max-1)
 	return 1;
 	else
 	return 0;
 }
int isempty()
 {
 	if(s1.top==-1)
 	return 1;
 	else
 	return 0;
 }
void  push(char num)
 {
   if(isfull())
   {
   	printf("\n stack is full dont insert.......! \n");	
   }
   else
   {
       s1.top++;
       num=integer(num);
	   s1.a[s1.top]=num;
	    printf("\n succesfully push...%d",num);  	
   }	
 }
 void pop()
 {
 	if(isempty())
 	{
 		printf("\n stack is empty....do not use pop..\n ");
	 }
	 else
	 {
	 	int v;
	 	v=s1.a[s1.top];
	 	s1.top--;
	 	printf("\n poped value=%d \n ",v);
	 }
 }
 void display()
 {
 	int i;
 	for(i=0;i<=s1.top;i++)
 	{
 	  printf("%d\t",s1.a[i]);	
	}
 }
 int main()
 {
 	int op1,op2,res,i;
 	char post[100];
 	printf("enter postfix expression=");
 	gets(post);
 	for(i=0;i<post[i]!='\0';i++)
 	{
 		if(post[i]>='0' && post[i]<='9')
 		push((post[i]));
 		
	 }
	 display();
 }