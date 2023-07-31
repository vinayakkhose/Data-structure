#include<stdio.h>
#include<stdlib.h>
typedef struct node 
{
	char data;
	struct node *next;
}q;
q *top;
void init()
{
	top=NULL;
}
int isEmpty()
{
	if(top==NULL)
	return 1;
	return 0;
}
void push(char num)
{
	q *newnode;
	newnode=(q*)malloc(sizeof(q));
	newnode->data=num;
	newnode->next=top;
	top=newnode;
}
char pop()
{
	q *temp;
	char s;
	if(isEmpty())
	printf("\n stack is underflow...");
	else
	{
	 temp=top;
	  top=top->next;
	  s=temp->data;
	  free(temp);
	  return s;	
	}
}
void display()
{
	q *temp;
	for(temp=top;temp!=NULL;temp=temp->next)
	printf("%d\t",temp->data);
}
int main()
{
	char infix[100],postfix[100],ch;
	int i,j=0;
	printf("enter infix expresion=");
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