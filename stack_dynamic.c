#include<stdio.h>
#include<malloc.h>
#include<conio.h>
typedef struct node
{
	int data;
	struct node *next;
}NODE;

NODE *initStack(NODE *stack)
{
	stack=NULL;
	return stack;
}

int isEmpty(NODE *stack)
{
	if(stack==NULL)
	return 1;
	else 
	return 0;
}
NODE *push(NODE *stack,int num)
{
	NODE *newnode;
	newnode=(NODE*)malloc(sizeof(NODE));
	newnode->data=num;
	newnode->next=stack;
	stack=newnode;
	return stack;
	stack=stack->next;
}
NODE *pop(NODE *stack)
{
	int x;
	NODE *temp;
	temp=stack;
	stack=temp->next;
	free(temp);
	printf("\n popped value= %d",x);
	return stack;
}
void display(NODE *stack)
{
	NODE *temp=stack;
	while(temp!=NULL)
	{
		printf("%d \t",temp->data);
		temp=temp->next;
	}
}
void main()
{
	NODE *stack;
	int ch,n;
	//clrscr();
	stack=initStack(stack);
	do
	{
		printf("1-push \n 2-pop \n 3-display \n 4-EXIT");
		printf("\n____________________________________");
		printf("\n Enter choice=");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("\n enter element to push...");
			     scanf("%d",&n);
			     stack=push(stack,n);
			     break;
			case 2:if(isEmpty(stack))
			        printf("\n stack is empty...");
			        else 
			        {
			        	stack=pop(stack);
			        	break;
			        }
			case 3:display(stack);
			       break;
		}			
	}while(ch!=4);
	getch();
}