#include<stdio.h>
#include<stdlib.h>
typedef struct node 
{
	int data;
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
void push(int num)
{
	q *newnode;
	newnode=(q*)malloc(sizeof(q));
	newnode->data=num;
	newnode->next=top;
	top=newnode;
}
void pop()
{
	q *temp;
	if(isEmpty())
	printf("\n stack is underflow...");
	else
	{
	 temp=top;
	  top=top->next;
	  printf("\n deleted value=%d",temp->data);
	  free(temp);	
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
	int n,ch;
	init();
	do
	{
		printf("\n1-push \n2-pop \n 3-display \n4-exit");
		printf("\n--------------------------------");
		printf("\n enter choice=");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("enter element to add queue=");
			        scanf("%d",&n);
			        push(n);
			        break;
			case 2:pop();
			      break;
			case 3:display();
		}
	}while(ch!=4);
}