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
	char ch;
	if(isEmpty())
	printf("\n stack is underflow...");
	else
	{
	 temp=top;
	  top=top->next;
	  ch=temp->data;
	  free(temp);
	  return ch;	
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
   char s1[100],ch,postfix[100];
   int i,j=0;
   printf("enter infix expretion=");
      gets(s1);
      for(i=0;s1[i]!='\0';i++)
      {
      	switch(s1[i])
      	{
      		case 'a':
      	    case 'A':
            case 'b':
			case 'B':
			case 'c':
			case 'C':
			case 'd':      	    	
      		case 'D':
      		case 'E':
      		case 'e':
      		case 'f':
      		case 'F':postfix[j++]=s1[i];
      		          break;
      		case '+':
      		case '-':
      		case '*':
      		case  '/':
      		case '(':push(s1[i]);
      		         break;
      		case ')':while((ch=pop())!='(')
      		          {
      		          	 postfix[j++]=ch;
			          }
			          break;
		  }
	  }
	  while(!isEmpty())
	  {
	  	 postfix[j++]=pop();
	  }
	  postfix[j]='\0';
	  printf("\n postfix character=%s",postfix);
}