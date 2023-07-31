#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}NODE;
NODE *front,*rear;
int isEmpty()
{
	if(rear==NULL)
	return 1;
	return 0;
}
void initq()
{
	front=rear=NULL;
}
void insert(int num)
{
	NODE *newnode;
	newnode=(NODE*)malloc(sizeof(NODE));
	newnode->data=num;
	if(front==NULL)
	{
	front=rear=newnode;
	 rear->next=front;
    }
	else
	{
		rear->next=newnode;
		rear=newnode;
		rear->next=front;
	}

}
void delet()
{
	if(isEmpty())
	{
		printf("\n oueue is underflow");
		exit(1);
	}
	NODE *temp;
	if(front==NULL)
	{
		printf("queue is underflow");
		exit(1);
	}
	else
	{
		 if(front==rear)
		 {
		   free(front);
		   front=rear=NULL;	
		 }
		 else
		 {
		temp=front;
		front=front->next;
		rear->next=front;
		printf("\ndeleted value=%d",temp->data);
		free(temp);
	}
	}
}
void display()
{
	NODE *temp=front;
	if(rear==NULL)
	 printf("queue is underflow");
	 else
	 {
	do
	{
	printf("%d\t",temp->data);
	temp=temp->next;
    }while(temp!=front);
	}
}
int main()
{
	int num,ch;
	initq();
	do
	{
		printf("\n 1-create \n2-delete \n 3-display");
		printf("\n__________________________________");
		printf("\n enter choice=");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("\n enter element to add queue=");
				scanf("%d",&num);
				insert(num);
				break;
			case 2:delet();
			       break;
			case 3:display();
		}
	}while(ch!=4);
}
