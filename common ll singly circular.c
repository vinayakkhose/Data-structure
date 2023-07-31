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

struct node * insertcom(struct node*head,int num,int pos)
{
	struct node*newnode,*temp;
	int i;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=num;
	if(pos==1)
	{
	
	for(temp=head;temp->next!=head;temp=temp->next);
	newnode->next=head;
	head=newnode;
	temp->next=head;
    }
	else
	{

	for(i=1,temp=head;i<(pos-1) && temp->next!=head;i++,temp=temp->next);
	 newnode->next=temp->next;
	 temp->next=newnode;
   }
   return head;
}
struct node * delcom(struct node*head,int pos)
{
	struct node *temp,*p;
	int i;
	if(pos==1)
	{
		p=head;
		for(temp=head;temp->next!=head;temp=temp->next);
		head=head->next;
		temp->next=head;
		free(p);
	}
	else
	{
		for(i=1,temp=head;i<(pos-1)&&temp->next!=head;i++,temp=temp->next);
		p=temp->next;
		temp->next=p->next;
		free(p);
	}
	return head;
}
void main()
{
	struct node *head=NULL;
		int num,ch,pos;
		do
	{
	 printf("\n 1-create \n 2-display \n 3-insert com \n 4-delete common ");
	 printf(" \n enter choice=");
	 scanf("%d",&ch);
	 switch(ch)
	 {
	 	case 1:head=create(head);
	 	           break;
	 	case 2:display(head);
	 	        break;
	 	case 3:printf("Enter value=");
	 	       scanf("%d",&num);
	 	       printf("enter possition=");
	 	       scanf("%d",&pos);
	 	       head=insertcom(head,num,pos);
	 	       break;
	 	case 4:printf("enter position=");
	 	        scanf("%d",&pos);
	 	        head=delcom(head,pos);
	 	        break;
	 	default :printf("invalid choice..");
		 }	
	}while(ch<5);
}