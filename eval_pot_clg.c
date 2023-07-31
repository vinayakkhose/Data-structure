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
void push(int a)
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
int pop()
{
	int val;
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
	char infix[max];
	int i,op1,op2,r;
	printf("enter post expresion=");
	gets(infix);
	i=strlen(infix);
	init();
for(i=0;infix[i]!='\0';i++)
	{
		switch(infix[i])
		{
			case '0':push(0);
			          break;
			case '1':push(1);
			          break;
			case '2':push(2);
			          break;
			case '3':push(3);
			          break;
			case '4':push(4);
			          break;
			case '5':push(5);
			          break;
			case '6':push(6);
			          break;
            case '7':push(7);
			          break;
            case '8':push(8);
			          break;
			case '9':push(9);
			          break;
			case '+':op1=pop();
			          op2=pop();
			          r=op1+op2;
			          push(r);
			          break;
			case '-':op1=pop();
			          op2=pop();
			          r=op1-op2;
			          push(r);
			          break;
			case '*': op1=pop();
			          op2=pop();
			          r=op1*op2;
			          push(r);
			          break;
			case '/':op1=pop();
			          op2=pop();
			          r=op1/op2;
			          push(r);
			          break;
			case '%':op1=pop();
			          op2=pop();
			          r=op1%op2;
			          push(r);
			          break;			
		}
	}
	r=pop();
	printf("\n postfix expresion evaluation=%d",r);
}