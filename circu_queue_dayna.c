#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}cq;
cq *front ,*rear;

void init()
{
  front=rear=NULL;	
}
int isEmpty()
{
	if(front==NULL)
	return 1;
	return 0;
}
void insert(int num)
{
  cq *newnode;
  newnode=(cq*)malloc(sizeof(cq));
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
  printf("\n value inserted..");
}
void del()
{
	cq *t;
	if(isEmpty())
	printf("\n queue is underflow");
	else
	{
	  t=front;
	  front=front->next;
	  rear->next=front;
	  printf("deleted value=%d",t->data);	
	  free(t);
	}
}
void display()
{
	cq *temp=front;
	do
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}while(temp!=front);
}
int main()
{
	int n,ch;
	init();
	do
	{
		printf("\n1-insert \n2-delet \n 3-display");
		printf("\n--------------------------------");
		printf("\n enter choice=");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("enter element to add queue=");
			        scanf("%d",&n);
			        insert(n);
			        break;
			case 2:del();
			      break;
			case 3:display();
		}
	}while(ch!=4);
}