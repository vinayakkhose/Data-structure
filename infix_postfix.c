#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
struct queue
{
	char a[max];
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
	char infix[max],postfix[max],ch;
	int i,j=0;
	printf("enter postfix expresion=");
	scanf("%s",infix);
	init();
	for(i=0;infix[i]!='\0';i++)
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
			case 'D':postfix[j]=infix[i];
			        j++;
			          break;
			case '+':
			case '-':
			case '*':
			case '/':
			case '(':push(infix[i]);
			          break;
			case ')':while((ch=pop())!='(')
			           {
			              postfix[j]=ch;
						  j++;	
					   }
					    break;			
		}
	}
	while(!isEmpty())
	{
		postfix[j]=pop();
		j++;
	}
	postfix[j]='\0';
	printf("\n postfix expresion=%s",postfix);
}