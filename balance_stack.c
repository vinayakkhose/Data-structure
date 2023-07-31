#include<stdio.h>
#define max 100
struct stack
{
	char a[max];
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
int push(char k)
{
	if(isfull())
	printf("stack is full");
	else
	{
		s1.top++;
		s1.a[s1.top]=k;
	}
}
char pop()
{
	int k;
	if(isempty())
	printf("stack is empty..");
	else
	{
		k=s1.a[s1.top];
		s1.top--;
		return k;
	}
}
void display()
{
	int i;
	for(i=0;i<s1.top;i++)
	{
		printf("%d\t",s1.a[i]);
	}
}
int main()
{
	char s[100];
	int i;
	printf("Enter string=");
	gets(s);
	init();
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]=='{' || s[i]=='[' || s[i]=='(')
		  push(s[i]);
		if(s[i]=='}')
		{
			if(pop()!='{')
			break;
		}
		if(s[i]==']')
		{
			if(pop()!='[')
			break;
		}
		if(s[i]==')')
		{
			if(pop()!='(')
			break;
		}
	}
	display();
	if(isempty())
	printf("balance");
	else 
	printf("unbalace");
  }
	