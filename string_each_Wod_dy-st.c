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

void push(char num)
{
	q *newnode;
	newnode=(q*)malloc(sizeof(q));
	newnode->data=num;
	newnode->next=top;
	top=newnode;
}
void display()
{
	q *temp;
	for(temp=top;temp!=NULL;temp=temp->next)
	printf("%c",temp->data);
}void main()
{
	char s1[100];
	int i;
	init();
	printf("enter string=");
	gets(s1);
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]!=' ')
		push(s1[i]);
		if(s1[i]==' ')
		  {
			display();
			init();
		}
	}
	display();
}
