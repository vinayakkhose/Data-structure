#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	char data;
	struct node *next;
}NODE;
NODE *top;
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
	NODE *newnode;
	newnode=(NODE*)malloc(sizeof(NODE));
	newnode->data=num;
	newnode->next=top;
	top=newnode;
}
char pop()
{
	char ch;
	NODE *temp;
   if(isEmpty())	
    {
    	printf("\n stack is underflow");
    	exit(1);
	}
	else
	{
	  temp=top;
	  top=top->next;
	  ch=temp->data;
	  free(temp);
	  return temp->data;	
	}
}
void display()
{
	NODE *temp;
	for(temp=top;temp!=NULL;temp=temp->next)
	{
		printf("%c",temp->data);
	}
}
void main()
{
	int i;
	char ch,s[100];
	printf("\n enter string=");
	gets(s);
	
	for(i=0;i<s[i]!='\0';i++)
	{ 
	
	push(s[i]);
     if(s[i]==' ')
     {
     	display();
     	init();
	 }
	}
	display();	
	
}