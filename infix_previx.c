#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
struct queue
{
	int a[max];
	int top;
}q;

void init()
{
	q.top=-1;
}
int isEmpty()
{
	if(q.top==-1)
	return 1;
	return 0;
}
int isFull()
{
	if(q.top==max-1)
	return 1;
	return 0;
}
void push(char a)
{
	if(isFull())
	{
		printf("\n stack is overflow");
		exit(1);
	}
	else
	{
		 q.top++;
	   q.a[q.top]=a;
	}
}
char pop()
{
	char val;
	if(isEmpty())
	{
		printf("\n stack is underflow");
		exit(1);
	}
	else
	{
		val=q.a[q.top];
		q.top--;
	    return val;
	}
}
int main()
{
	char infix[max],prefix[max],ch;
	int i,j=0;
	printf("enter infix expresion=");
	scanf("%s",infix);
	init();
	int len=strlen(infix);
	for(i=len-1;i>=0;i--)
	{
		switch(infix[i])
		{
			case 'a':
			case 'A':
			case 'b':
			case 'B':
			case 'c':
			case 'C':
			case 'd':
			case 'D':prefix[j]=infix[i];
			        j++;
			          break;
			case '+':
			case '-':
			case '*':
			case '/':
			case ')':push(infix[i]);
			          break;
			case '(':while((ch=pop())!=')')
			           {
			              prefix[j]=ch;
						  j++;	
					   }
					    break;			
		}
	}
	while(!isEmpty())
	{
		prefix[j]=pop();
		j++;
	}
	strcpy(prefix,strrev(prefix));
	prefix[j]='\0';
	printf("\n prefix expresion=%s",prefix);
}