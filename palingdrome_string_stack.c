//enter string or check plingdrome or note using stack.
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
	char k;
	if(isempty())
	printf("stack is empty..");
	else
	{
		k=s1.a[s1.top];
		s1.top--;
		return k;
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
		push(s[i]);
	}
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]!=pop())
		{
		break;
	    }
	}
	if(isempty())
	printf("string is palingngdrome");
    else
    printf("string is not palingngdrome");

}