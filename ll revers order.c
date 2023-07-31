#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node* create(struct node*head)
{
	int i,n;
	struct node *newnode,*temp;
	printf("enter limit=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("\n enter value=");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(head==NULL)
		{
			head=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
	}
	return head;
}
void display(struct node*head)
{
	struct node *temp=head;
	int i;
	for(temp=head;temp!=NULL;temp=temp->next)
	{
		printf("%d\t",temp->data);
	}
	return head;
}
void main()
{
	struct node *head=NULL;
	head=create(head);
	display(head);
}