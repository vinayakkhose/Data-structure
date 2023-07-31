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
		if(head==NULL)
		{
			head=temp=newnode;
			newnode->next=head;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
			newnode->next=head;
		}
	}
	return head;
}
void display(struct node *head)
{
	struct node *temp=head;
	do
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}while(temp!=head);
}

struct node* insertmid(struct node *head,int pos,int num)
{
	struct node *newnode,*temp;
	int i;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=num;
	for(i=1,temp=head;i<(pos-1) && temp->next!=head;i++,temp=temp->next);
	 newnode->next=temp->next;
	 temp->next=newnode;
	 return head;
}
void main()
{
	struct node *head=NULL;
		int num,ch,pos;
	head=create(head);
	
	display(head);
	
	printf("enter position=");
	 	        scanf("%d",&pos);
	 	        printf("Enter value=");
	 	        scanf("%d",&num);
	 	        head=insertmid(head,pos,num);
	 	        	display(head);

}